//
//  Poller.cpp
//  xzl
//
//  Created by xzl on 16/4/12.
//
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <list>
#include "EventPoller.h"
#include "SelectWrap.h"
#include "Util/util.h"
#include "Util/logger.h"
#include "Network/sockutil.h"
#include "Util/TimeTicker.h"
#include "Thread/ThreadPool.h"

using namespace ZL::Util;
using namespace ZL::Thread;
using namespace ZL::Network;

#ifdef HAS_EPOLL
#include <sys/epoll.h>
#define toEpoll(event)	(((event) & Event_Read) ? EPOLLIN : 0) \
						| (((event) & Event_Write) ? EPOLLOUT : 0) \
						| (((event) & Event_Error) ? (EPOLLHUP | EPOLLERR) : 0) | EPOLLET

#define toPoller(epoll_event) (((epoll_event) & EPOLLIN) ? Event_Read : 0) \
							| (((epoll_event) & EPOLLOUT) ? Event_Write : 0) \
							| (((epoll_event) & EPOLLHUP) ? Event_Error : 0) \
							| (((epoll_event) & EPOLLERR) ? Event_Error : 0)
#endif //HAS_EPOLL

namespace ZL {
namespace Poller {

EventPoller::EventPoller(bool enableSelfRun) {
	if (pipe(pipe_fd) == -1) {
		throw runtime_error(StrPrinter << "创建管道失败：" << errno << endl);
	}
	SockUtil::setNoBlocked(pipe_fd[0]);
	SockUtil::setNoBlocked(pipe_fd[1],false);
#ifdef HAS_EPOLL
#if defined(__ARM_ARCH) || defined(ANDROID)
	epoll_fd = epoll_create(1024);
#else//defined(__ARM_ARCH) || defined(ANDROID)
	epoll_fd = epoll_create1(EPOLL_CLOEXEC);
#endif//defined(__ARM_ARCH) || defined(ANDROID)
	if (epoll_fd == -1) {
		close(pipe_fd[0]);
		close(pipe_fd[1]);
		throw runtime_error(StrPrinter << "创建epoll文件描述符失败：" << errno << endl);
	}
#endif //HAS_EPOLL
	initPoll();
	if (enableSelfRun) {
		loopThread = new thread(&EventPoller::runLoop, this);
		mainThreadId = loopThread->get_id();
	}
}
inline int EventPoller::sigalPipe(uint64_t type, uint64_t i64_size,
		uint64_t *buf) {
	uint64_t new_buf[4] = { type, (uint64_t) i64_size };
	if (i64_size) {
		memcpy(&new_buf[2], buf, i64_size * sizeof(uint64_t));
	}
	return (int) write(pipe_fd[1], new_buf, (2 + i64_size) * sizeof(uint64_t));
}
void EventPoller::shutdown() {
	sigalPipe(Sig_Exit);
	if (loopThread) {
		loopThread->join();
		delete loopThread;
	}


#ifdef HAS_EPOLL
	if (epoll_fd != -1) {
		close(epoll_fd);
		epoll_fd = -1;
	}
#endif //HAS_EPOLL
	if (pipe_fd[0]) {
		close(pipe_fd[0]);
		pipe_fd[0] = -1;
	}
	if (pipe_fd[1]) {
		close(pipe_fd[1]);
		pipe_fd[1] = -1;
	}
}
EventPoller::~EventPoller() {
	shutdown();
	InfoL;
}

int EventPoller::addEvent(int fd, int event, PollEventCB &&cb) {
	TimeTicker();
	if (!cb) {
		WarnL << "PollEventCB 为空!";
		return -1;
	}
#ifdef HAS_EPOLL
	lock_guard<mutex> lck(mtx_event_map);
	struct epoll_event ev = { 0 };
	ev.events = toEpoll(event);
	ev.data.fd = fd;
	int ret = epoll_ctl(epoll_fd, EPOLL_CTL_ADD, fd, &ev);
	if (ret == 0) {
		event_map.emplace(fd, cb);
	}
	return ret;
#else
	if (isMainThread()) {
		lock_guard<mutex> lck(mtx_event_map);
		Poll_Record record;
		record.event = (Poll_Event) event;
		record.callBack = cb;
		event_map.emplace(fd, record);
		return 0;
	}
	async([this,fd,event,cb]() {
				addEvent(fd,event,const_cast<PollEventCB &&>(cb));
			});
	return 0;
#endif //HAS_EPOLL
}

int EventPoller::delEvent(int fd, PollDelCB &&delCb) {
	TimeTicker();
	if (!delCb) {
		delCb = [](bool success) {};
	}
#ifdef HAS_EPOLL
	int ret0 = epoll_ctl(epoll_fd, EPOLL_CTL_DEL, fd, NULL);
	int ret1 = 0;
	{
		lock_guard<mutex> lck(mtx_event_map);
		ret1 = event_map.erase(fd);
	}
	bool success = ret0 == 0 && ret1 > 0;
	delCb(success);
	return success;
#else
	if (isMainThread()) {
		lock_guard<mutex> lck(mtx_event_map);
		if (event_map.erase(fd)) {
			delCb(true);
		} else {
			delCb(false);
		}
		return 0;
	}
	async([this,fd,delCb]() {
				delEvent(fd,const_cast<PollDelCB &&>(delCb));
			});
	return 0;
#endif //HAS_EPOLL
}
int EventPoller::modifyEvent(int fd, int event) {
	TimeTicker();
	//TraceL<<fd<<" "<<event;
#ifdef HAS_EPOLL
	struct epoll_event ev = { 0 };
	ev.events = toEpoll(event);
	ev.data.fd = fd;
	return epoll_ctl(epoll_fd, EPOLL_CTL_MOD, fd, &ev);
#else

	if (isMainThread()) {
		lock_guard<mutex> lck(mtx_event_map);
		auto it = event_map.find(fd);
		if (it != event_map.end()) {
			it->second.event = (Poll_Event) event;
		}
		return 0;
	}
	async([this,fd,event]() {
				modifyEvent(fd,event);
			});
	return 0;
#endif //HAS_EPOLL
}
void EventPoller::sync(PollAsyncCB &&syncCb) {
	TimeTicker();
	if (!syncCb) {
		return;
	}
	semaphore sem;
	async([&](){
		syncCb();
		sem.post();
	});
	sem.wait();
}
void EventPoller::async(PollAsyncCB &&asyncCb) {
	TimeTicker();
	if (!asyncCb) {
		return;
	}
	if (mainThreadId == this_thread::get_id()) {
		asyncCb();
		return;
	}
	std::shared_ptr<Ticker> pTicker(new Ticker(5,"唤醒主线程",FatalL,true));
	auto lam = [asyncCb,pTicker](){
		const_cast<std::shared_ptr<Ticker> &>(pTicker).reset();
		asyncCb();
	};
	uint64_t buf[1] = { (uint64_t) (new PollAsyncCB(lam)) };
	sigalPipe(Sig_Async, 1, buf);
}

bool EventPoller::isMainThread() {
	return mainThreadId == this_thread::get_id();
}

inline Sigal_Type EventPoller::_handlePipeEvent(uint64_t type, uint64_t i64_size, uint64_t *buf) {
	switch (type) {
	case Sig_Async: {
		PollAsyncCB **cb = (PollAsyncCB **) buf;
		try{
			(*cb)->operator()();
		}catch (std::exception &ex) {
			FatalL << ex.what();
		}
		delete *cb;
	}
		break;
	default:
		break;
	}
	return (Sigal_Type)type;
}
inline bool EventPoller::handlePipeEvent() {
	TimeTicker();
	while(true){
		char buf[1024];
		auto nread = read(pipe_fd[0], buf, sizeof(buf));
		if(nread > 0){
			pipeBuffer.append(buf, nread);
			continue;
		}
		if (errno == EAGAIN || errno == EWOULDBLOCK) {
			break;
		}
	}
	bool ret = true;
	while (pipeBuffer.size() >= 2 * sizeof(uint64_t)) {
		uint64_t type = *((uint64_t *) pipeBuffer.data());
		uint64_t slinceSize = *((uint64_t *) (pipeBuffer.data()) + 1);
		uint64_t *ptr = (uint64_t *) (pipeBuffer.data()) + 2;
		uint64_t slinceByte = (2 + slinceSize) * sizeof(uint64_t);
		if (slinceByte > pipeBuffer.size()) {
			break;
		}
		if(Sig_Exit == _handlePipeEvent(type, slinceSize, ptr)){
			ret = false;
		}
		pipeBuffer.erase(0, slinceByte);
	}
	return ret;
}
void EventPoller::initPoll() {
#ifdef HAS_EPOLL
	if (addEvent(pipe_fd[0], Event_Read | Event_Error, [](int event) {})
			== -1) {
		FatalL << "epoll添加管道失败" << endl;
		std::runtime_error("epoll添加管道失败");
	}
#else
#endif //HAS_EPOLL
}
void EventPoller::runLoop() {
	mainThreadId = this_thread::get_id();
    ThreadPool::setPriority(ThreadPool::PRIORITY_HIGHEST);
#ifdef HAS_EPOLL
	struct epoll_event events[1024];
	int nfds = 0;
	while (true) {
		nfds = epoll_wait(epoll_fd, events, 1024, -1);
		TimeTicker();
		if (nfds == -1) {
			if (pipe_fd[0] == -1 || pipe_fd[1] == -1) {
				break;
			}
			WarnL << "epoll_wait() interrupted!";
			continue;
		}

		for (int i = 0; i < nfds; ++i) {
			struct epoll_event &ev = events[i];
			int fd = ev.data.fd;
			int event = toPoller(ev.events);
			if (fd == pipe_fd[0]) {
				//inner pipe event
				if (event & Event_Error) {
					WarnL << "Poller 异常退出监听。";
					return;
				}
				if (!handlePipeEvent()) {
					InfoL << "Poller 退出监听。";
					return;
				}
				continue;
			}
			// other event
			PollEventCB eventCb;
			{
				lock_guard<mutex> lck(mtx_event_map);
				auto it = event_map.find(fd);
				if (it == event_map.end()) {
					WarnL << "未找到Poll事件回调对象!";
					epoll_ctl(epoll_fd, EPOLL_CTL_DEL, fd, NULL);
					continue;
				}
				eventCb = it->second;
			}
			eventCb(event);
		}
	}

#else
	int ret, maxFd;
	FdSet Set_read, Set_write, Set_err;
	list<unordered_map<int, Poll_Record>::value_type> listCB;
	while (true) {
		Set_read.fdZero();
		Set_write.fdZero();
		Set_err.fdZero();
		Set_read.fdSet(pipe_fd[0]); //监听管道可读事件
		maxFd = pipe_fd[0];
		{
			lock_guard<mutex> lck(mtx_event_map);
			for (auto &pr : event_map) {
				if (pr.first > maxFd) {
					maxFd = pr.first;
				}
				if (pr.second.event & Event_Read) {
					Set_read.fdSet(pr.first);//监听管道可读事件
				}
				if (pr.second.event & Event_Write) {
					Set_write.fdSet(pr.first);//监听管道可写事件
				}
				if (pr.second.event & Event_Error) {
					Set_err.fdSet(pr.first);//监听管道错误事件
				}
			}
		}
		ret = zl_select(maxFd + 1, &Set_read, &Set_write, &Set_err, NULL);
		if (ret < 1) {
			if (pipe_fd[0] == -1 || pipe_fd[1] == -1) {
				break;
			}
			WarnL << "select() interrupted:" << strerror(errno);
			continue;
		}

		if (Set_read.isSet(pipe_fd[0])) {
			//判断有否监听操作
			if (!handlePipeEvent()) {
				InfoL << "Poller 退出监听。";
				break;
			}
			if (ret == 1) {
				//没有其他事件
				continue;
			}
		}

		{
			lock_guard<mutex> lck(mtx_event_map);
			for (auto &pr : event_map) {
				int event = 0;
				if (Set_read.isSet(pr.first)) {
					event |= Event_Read;
				}
				if (Set_write.isSet(pr.first)) {
					event |= Event_Write;
				}
				if (Set_err.isSet(pr.first)) {
					event |= Event_Error;
				}
				if (event != 0) {
					pr.second.attach = event;
					listCB.push_back(pr);
				}
			}
		}
		for (auto &pr : listCB) {
			pr.second();
		}
		listCB.clear();
	}
#endif //HAS_EPOLL
}

}  // namespace Poller
}  // namespace ZL

