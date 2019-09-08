/*
 * PlayerBase.h
 *
 *  Created on: 2016年12月1日
 *      Author: xzl
 */

#ifndef SRC_PLAYER_PLAYERBASE_H_
#define SRC_PLAYER_PLAYERBASE_H_

#include <memory>
#include <string>
#include <functional>
#include "Player.h"
#include "Network/Socket.h"

using namespace std;
using namespace ZL::Network;

namespace ZL {
namespace Player {

class PlayerBase{
public:
	typedef std::shared_ptr<PlayerBase> Ptr;
	typedef enum {
		RTP_TCP = 0,
		RTP_UDP = 1,
		RTP_MULTICAST = 2,
	} eRtpType;
    static Ptr createPlayer(const char* strUrl);
    
	PlayerBase(){};
	virtual ~PlayerBase(){};

	virtual void play(const char* strUrl, const char *strUser = "", const char *strPwd = "", eRtpType eType = RTP_TCP) {};
	virtual void pause(bool bPause) {};
	virtual void teardown() {};

	virtual void setOnShutdown( const function<void(const SockException &)> &cb) {};
	virtual void setOnPlayResult( const function<void(const SockException &ex)> &cb) {};
	virtual void setOnVideoCB( const function<void(const H264Frame &frame)> &cb) {};
	virtual void setOnAudioCB( const function<void(const AdtsFrame &frame)> &cb) {};
    
	virtual int getVideoHeight() const { return 0; };
	virtual int getVideoWidth() const { return 0; };
	virtual float getVideoFps() const { return 0; };
	virtual int getAudioSampleRate() const { return 0; };
	virtual int getAudioSampleBit() const { return 0; };
	virtual int getAudioChannel() const { return 0; };
    virtual float getRtpLossRate(int iTrackId) const {return 0; };
	virtual const string& getPps() const { static string null;return null; };
	virtual const string& getSps() const { static string null;return null; };
	virtual const string& getAudioCfg() const { static string null;return null; };
	virtual bool containAudio() const { return false; };
    virtual bool containVideo() const { return false; };
    virtual bool isInited() const { return true; };
    virtual float getDuration() const { return 0;};
    virtual float getProgresss() const { return 0;};
    virtual void seekTo(float fProgress) {};
    

protected:
    virtual void onShutdown(const SockException &ex) {};
    virtual void onPlayResult(const SockException &ex) {};
};

template<typename Parent,typename Parser>
class PlayerImp : public Parent
{
public:
	typedef std::shared_ptr<PlayerImp> Ptr;
	PlayerImp(){};
	virtual ~PlayerImp(){};
	void setOnShutdown(const function<void(const SockException &)> &cb) override {
		if (m_parser) {
			m_parser->setOnShutdown(cb);
		}
		m_shutdownCB = cb;
	}
	void setOnPlayResult(const function<void(const SockException &ex)> &cb) override {
		if (m_parser) {
			m_parser->setOnPlayResult(cb);
		}
		m_playResultCB = cb;
	}
	void setOnVideoCB(const function<void(const H264Frame &frame)> &cb) override{
		if (m_parser) {
			m_parser->setOnVideoCB(cb);
		}
		m_onGetVideoCB = cb;
	}
	void setOnAudioCB(const function<void(const AdtsFrame &frame)> &cb) override{
		if (m_parser) {
			m_parser->setOnAudioCB(cb);
		}
		m_onGetAudioCB = cb;
	}
	int getVideoHeight() const override{
		if (m_parser) {
			return m_parser->getVideoHeight();
		}
		return PlayerBase::getVideoHeight();
	}

	int getVideoWidth() const override{
		if (m_parser) {
			return m_parser->getVideoWidth();
		}
		return PlayerBase::getVideoWidth();
	}

	float getVideoFps() const override{
		if (m_parser) {
			return m_parser->getVideoFps();
		}
		return PlayerBase::getVideoFps();
	}

	int getAudioSampleRate() const override{
		if (m_parser) {
			return m_parser->getAudioSampleRate();
		}
		return PlayerBase::getAudioSampleRate();
	}

	int getAudioSampleBit() const override{
		if (m_parser) {
			return m_parser->getAudioSampleBit();
		}
		return PlayerBase::getAudioSampleBit();
	}

	int getAudioChannel() const override{
		if (m_parser) {
			return m_parser->getAudioChannel();
		}
		return PlayerBase::getAudioChannel();
	}

	const string& getPps() const override{
		if (m_parser) {
			return m_parser->getPps();
		}
		return PlayerBase::getPps();
	}

	const string& getSps() const override{
		if (m_parser) {
			return m_parser->getSps();
		}
		return PlayerBase::getSps();
	}

	const string& getAudioCfg() const override{
		if (m_parser) {
			return m_parser->getAudioCfg();
		}
		return PlayerBase::getAudioCfg();
	}
	bool containAudio() const override{
		if (m_parser) {
			return m_parser->containAudio();
		}
		return PlayerBase::containAudio();
	}
    bool containVideo() const override{
        if (m_parser) {
            return m_parser->containVideo();
        }
        return PlayerBase::containVideo();
    }
    bool isInited() const override{
        if (m_parser) {
            return m_parser->isInited();
        }
        return PlayerBase::isInited();
    }
	float getDuration() const override {
		if (m_parser) {
			return m_parser->getDuration();
		}
		return PlayerBase::getDuration();
	}
    float getProgresss() const override{
        if (m_parser) {
            return m_parser->getProgresss();
        }
        return PlayerBase::getProgresss();
    };
    void seekTo(float fProgress) override{
        if (m_parser) {
            return m_parser->seekTo(fProgress);
        }
        return PlayerBase::seekTo(fProgress);
    };
protected:
	void onShutdown(const SockException &ex) override {
		if (m_shutdownCB) {
			m_shutdownCB(ex);
		}
	}
	void onPlayResult(const SockException &ex) override {
		if (m_playResultCB) {
			m_playResultCB(ex);
			m_playResultCB = nullptr;
		}
	}
	function<void(const SockException &ex)> m_shutdownCB;
	function<void(const SockException &ex)> m_playResultCB;
	std::shared_ptr<Parser> m_parser;
	function<void(const H264Frame &frame)> m_onGetVideoCB;
	function<void(const AdtsFrame &frame)> m_onGetAudioCB;

};
} /* namespace Player */
} /* namespace ZL */

#endif /* SRC_PLAYER_PLAYERBASE_H_ */
