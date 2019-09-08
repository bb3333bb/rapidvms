/** <!--
 *
 *  Copyright (C) 2017 veyesys support@veyesys.com
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  If you would like this software to be made available to you under an 
 *  alternate commercial license please email support@veyesys.com 
 *  for more information.
 *
 * -->
 */

#ifndef __VSC_EVENT_SERVER_H_
#define __VSC_EVENT_SERVER_H_
#include "config/confdb.hpp"
#include "server/camera.hpp"
#include "vdb.hpp"
#include "vhdfsdb.hpp"
#include "vplay.hpp"
#include "config/sysdb.hpp"
#include "server/factory.hpp"
#include <QThread>
#include <qdebug.h>
#include "Poco/Path.h"
#include "Poco/File.h"
#include "config/vidconf.pb.h"
#include "XSDK/TimeUtils.h"
#include "XSDK/XBlockingQueue.h"
#include "Poco/UUIDGenerator.h"
#include "Poco/Data/RecordSet.h"
#include "Poco/Data/Column.h"
#include "Poco/Data/SQLite/Connector.h"
#include "Poco/Path.h"
#include "Poco/File.h"
#include "Poco/SharedPtr.h"
#include "Poco/DateTime.h"
#include "Poco/Data/SessionFactory.h"
#include "Poco/Data/SQLite/Connector.h"

//#include <soci.h>
//#include <firebird/soci-firebird.h>
//#include <exception>


using Poco::Data::Statement;
using Poco::Data::RecordSet;
using namespace Poco::Data;
using namespace Poco;
using namespace Poco::Data::Keywords;

using Poco::Data::Session;

class VE_LIBRARY_API VEventData
{
public:
	astring strId;
	astring strDevice;
	astring strDeviceName;
	astring strType;/* MOTION_START, MOTION_END, MOTION, SMART_MOTION */
	s64 nTime;
	astring strEvttime;
	astring strDesc;
	bool bHandled;
	astring strComments;
	bool bMetaData;
	astring strMetaData;/* the MetaData Depend the type */
};

typedef std::map<u64, VEventData> EventItemMap;

typedef void (*FunctionEventNotify)(VEventData data, void* pParam);
typedef std::map<void *, FunctionEventNotify> FunctionEventNotifyMap;

class VE_LIBRARY_API VEventServerDbTask: public QThread
{
	Q_OBJECT
public:
	VEventServerDbTask(Factory &pFactory);
	~VEventServerDbTask();
public:
	void PushEvent(VEventData &pData);
	void UpdateDBSession(bool bIsFirst);
	/* Used by the Search task, TODO for the Release DataSession  */
	Poco::Data::Session *GetDataSession();
	void ReleaseDataSession();
public:
	void run();
private:
	XSDK::XBlockingQueue<VEventData> m_Queue;
	Factory &m_Factory;
	Poco::Data::Session *m_pSqlSession;
	int m_nYear;
	int m_nMonth;
	XMutex m_cMutex;
	
};

//TODO VEventServerMetaDbTask for the Meta Data for the VA 

class VE_LIBRARY_API VEventServerCallbackTask: public QThread
{
	Q_OBJECT
public:
	VEventServerCallbackTask(Factory &pFactory);
	~VEventServerCallbackTask();
public:
	void PushEvent(VEventData &pData);
	/* Register the call back for the event */
	BOOL RegEventNotify(void * pData, FunctionEventNotify callback);
	BOOL UnRegEventNotify(void * pData);	

public:
	void run();
private:
	XSDK::XBlockingQueue<VEventData> m_Queue;
	Factory &m_Factory;
	XMutex m_cMutex;

	FunctionEventNotifyMap m_NotifyMap;
};

typedef enum __VVidEventSearchCmdType
{
	VVID_EVENT_SEARCH_CMD = 1,
	VVID_EVENT_HANDLE_CMD,	
	VVID_EVENT_SEARCH_LAST
}VVidEventSearchCmdType;

typedef struct __VVidEventSearchCmd
{
	VVidEventSearchCmdType type;
	astring strId;
	s64 nStart;
	s64 nEnd;
	void * pData;/* Who send this cmd */
}VVidEventSearchCmd;

class VE_LIBRARY_API VEventServerSearchTask: public QThread
{
	Q_OBJECT
public:
	VEventServerSearchTask(Factory &pFactory, VEventServerDbTask &pDbTask);
	~VEventServerSearchTask();
public:
	BOOL PushCmd(VVidEventSearchCmd &pCmd);
	/* Register the call back for the event */
	BOOL RegEventNotify(void * pData, FunctionEventNotify callback);
	BOOL UnRegEventNotify(void * pData);	
	BOOL ProcessSearchCmd(VVidEventSearchCmd &pCmd);
	BOOL ProcessHandleCmd(VVidEventSearchCmd &pCmd);

public:
	void run();
private:
	XSDK::XBlockingQueue<VVidEventSearchCmd> m_Queue;
	Factory &m_Factory;
	XMutex m_cMutex;

	FunctionEventNotifyMap m_NotifyMap;
	VEventServerDbTask &m_pDbTask;
};


class VE_LIBRARY_API VEventServer: public QObject
{
	Q_OBJECT
public:
	VEventServer(Factory &pFactory);
	~VEventServer();
public:
	void PushEvent(VEventData &pData);
	/* Register the call back for the event */
	BOOL RegEventNotify(void * pData, FunctionEventNotify callback);
	BOOL UnRegEventNotify(void * pData);
	BOOL RegSearchEventNotify(void * pData, FunctionEventNotify callback);
	BOOL UnRegSearchEventNotify(void * pData);
	BOOL SearchEvent(astring strId, s64 nStart, s64 nEnd, void *pData);
	BOOL HandleEvent(astring strId);
public:
	BOOL Init();
private:
	VEventServerDbTask m_DbTask;
	VEventServerCallbackTask m_CallbackTask;
	VEventServerSearchTask m_SearchTask;
	Factory &m_Factory;
};

#endif // __VSC_EVENT_SERVER_H_
