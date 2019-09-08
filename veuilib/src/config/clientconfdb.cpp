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
#include "config/clientconfdb.hpp"
using namespace std;

#if 0
BOOL SysConfDataDefault(VSCConfData &pConf)
{
	pConf.data.conf.DeviceNum = 0;
	for (s32 i = 0; i < CONF_MAP_MAX; i ++)
	{
		pConf.data.conf.DeviceMap[i] = CONF_MAP_INVALID_MIN;
	}
	for (s32 i = 0; i < CONF_MAP_MAX; i ++)
	{
		pConf.data.conf.VIPCMap[i] = CONF_MAP_INVALID_MIN;
	}

	pConf.data.conf.RTSPServerPort = VSC_RTSP_DEFAULT_PORT;
	strcpy(pConf.data.conf.MulticastStartIPV4, "226.0.0.1");
	pConf.data.conf.OAPIPort = VSC_OAPI_DEFAULT_PORT;
	pConf.data.conf.VHTTPServerPort = VSC_VHTTPS_DEFAULT_PORT;
	pConf.data.conf.VHLSServerPort = VSC_VHLSS_DEFAULT_PORT;
	pConf.data.conf.VHTTPSSLServerPort = VSC_VHTTPS_SSL_DEFAULT_PORT;

    return TRUE;
}

BOOL VmsConfDataDefault(VSCVmsData &pConf)
{
	memset(&pConf, 0, sizeof(VSCVmsData));

	for (s32 i = 0; i < CONF_VMS_NUM_MAX; i ++)
	{
	    	pConf.data.conf.vms[i].nId = i;
		pConf.data.conf.vms[i].Used = 0;
	}

    return TRUE;
}

BOOL ViewConfDataDefault(VSCViewData &pConf)
{
	memset(&pConf, 0, sizeof(VSCViewData));

	for (s32 i = 0; i < CONF_VIEW_NUM_MAX; i ++)
	{
	    	pConf.data.conf.view[i].nId = i;
		pConf.data.conf.view[i].Used = 0;
	}

    return TRUE;
}

BOOL VGroupConfDataDefault(VSCVGroupData &pConf)
{
	memset(&pConf, 0, sizeof(VSCVGroupData));

	for (s32 i = 0; i < CONF_VGROUP_NUM_MAX; i ++)
	{
	    	pConf.data.conf.group[i].nId = i;
			pConf.data.conf.group[i].Used = 0;
	}

    return TRUE;
}
#endif

void VSCClientConfDefault(VidClientConf &pData)
{
	SimpleCrypt crypt;
	pData.set_nlang(VID_LANG_AUTO);
	pData.set_bautologin(false);
	/* Default passwd is admin */
	QString strPass = "admin";
	pData.set_stradminpasswd(crypt.encryptToString(strPass).toStdString());

	return;
}

s32 ClientConfDB::Open(astring & pPath)
{
	m_Options.create_if_missing = true;
	leveldb::Status status = leveldb::DB::Open(m_Options, pPath, &m_pDb);
	if (false == status.ok())
	{
	    //cerr << "Unable to open/create test database "<< pPath << endl;
	    //cerr << status.ToString() << endl;
	    VDC_DEBUG( "Unable to open/create test database %s\n", pPath.c_str());

	    return FALSE;
	}
	astring fakeKey = "fakeKey";
	astring fakeValue = "fakeValue";
	SetCmnParam(fakeKey, fakeValue);
    return TRUE;
}

BOOL ClientConfDB::GetCmnParam(astring &strKey, astring &strParam)
{
	XGuard guard(m_cMutex);
	
	leveldb::Slice key(strKey);

	leveldb::Status s = m_pDb->Get(leveldb::ReadOptions(), 
					key,  &strParam);
	if (s.ok() == false)
	{
		strParam = "";
		return FALSE;
	}

	return TRUE;
}

BOOL ClientConfDB::SetCmnParam(astring &strKey, astring &strParam)
{
	leveldb::WriteOptions writeOptions;
	XGuard guard(m_cMutex);

	leveldb::Slice licKey(strKey);
	leveldb::Slice licValue(strParam);
	m_pDb->Put(writeOptions, licKey, licValue);
	return TRUE;
}

  bool ClientConfDB::GetLicense(astring &strLicense)
{
	XGuard guard(m_cMutex);

	VSCConfLicenseKey sLicKey;
	

	leveldb::Slice key((char *)&sLicKey, sizeof(sLicKey));

	leveldb::Status s = m_pDb->Get(leveldb::ReadOptions(), 
					key,  &strLicense);
	if (s.ok() == false)
	{
		strLicense = "";
		return false;
	}

	return true;

}
  bool ClientConfDB::SetLicense(astring &strLicense)
{
	XGuard guard(m_cMutex);
	
	VSCConfLicenseKey sLic;
	leveldb::WriteOptions writeOptions;

	leveldb::Slice licKey((char *)&sLic, sizeof(sLic));
	leveldb::Slice licValue(strLicense);
	m_pDb->Put(writeOptions, licKey, licValue);
	return true;
    
}

bool ClientConfDB::GetClientConf(VidClientConf &pData)
{
	VSCConfClientKey sKey;
	astring strValue;
	
	XGuard guard(m_cMutex);

	leveldb::Slice key((char *)&sKey, sizeof(sKey));

	leveldb::Status s = m_pDb->Get(leveldb::ReadOptions(), 
					key,  &strValue);
	if (s.ok() == false)
	{
		strValue = "fake";
	}

	if (pData.ParseFromString(strValue) == false)
	{
		VSCClientConfDefault(pData);
		VDC_DEBUG( "Client Config is not init\n");
		return true;
	}

	return true;
}
bool ClientConfDB::SetClientConf(VidClientConf &pData)
{
	VSCConfClientKey sKey;

	XGuard guard(m_cMutex);

	leveldb::WriteOptions writeOptions;

	leveldb::Slice sysKey((char *)&sKey, sizeof(sKey));

	astring strOutput;
	if (pData.SerializeToString(&strOutput) != TRUE)
	{
		return FALSE;
	}
	leveldb::Slice sysValue(strOutput);

	m_pDb->Put(writeOptions, sysKey, sysValue);

	return true;
}

bool ClientConfDB::FindStor(astring strStorId)
{
	XGuard guard(m_cMutex);
	
	VidStorList storList;
	GetStorListConf(storList);
	int storSize = storList.cvidstor_size();

	for (s32 i = 0; i < storList.cvidstor_size(); i ++)
	{
		const VidStor &stor = storList.cvidstor(i);
		if (stor.strid() == strStorId)
		{
			return true;
		}
	}

	return false;
}
bool ClientConfDB::DeleteStor(astring strStorId)
{
	XGuard guard(m_cMutex);

	VidStorList storList;
	VidStorList storListNew;
	GetStorListConf(storList);
	int storSize = storList.cvidstor_size();

	for (s32 i = 0; i < storList.cvidstor_size(); i ++)
	{
		const VidStor &stor = storList.cvidstor(i);
		if (stor.strid() != strStorId)
		{
			VidStor *pAddStor = storListNew.add_cvidstor();
			*pAddStor = stor;
		}
	}

	UpdateStorListConf(storListNew);
	return true;
}
bool ClientConfDB::AddStor(VidStor &pStor)
{
	XGuard guard(m_cMutex);
	
	VidStorList storList;

	GetStorListConf(storList);
	
	VidStor *pAddStor = storList.add_cvidstor();
	*pAddStor = pStor;
	UpdateStorListConf(storList);

	return true;
}



BOOL ClientConfDB::GetStorListConf(VidStorList &pData)
{
	VSCConfVidStorKey sKey;
	astring strValue;
	
	XGuard guard(m_cMutex);

	leveldb::Slice key((char *)&sKey, sizeof(sKey));

	leveldb::Status s = m_pDb->Get(leveldb::ReadOptions(), 
					key,  &strValue);
	if (s.ok() == false)
	{
		strValue = "fake";
	}

	if (pData.ParseFromString(strValue) == false)
	{
		VidStorList listDefault;
		pData = listDefault;
		//VDC_DEBUG( "Stor List Config is not init\n");
		return TRUE;
	}

	return TRUE;

}
BOOL ClientConfDB::UpdateStorListConf(VidStorList &pData)
{
	VSCConfVidStorKey sKey;

	XGuard guard(m_cMutex);

	leveldb::WriteOptions writeOptions;

	leveldb::Slice sysKey((char *)&sKey, sizeof(sKey));

	astring strOutput;
	if (pData.SerializeToString(&strOutput) != TRUE)
	{
		return FALSE;
	}
	leveldb::Slice sysValue(strOutput);

	m_pDb->Put(writeOptions, sysKey, sysValue);

	return TRUE;
}

bool ClientConfDB::GetStorConf(astring strId, VidStor &pStor)
{
	XGuard guard(m_cMutex);
	
	VidStorList storList;
	GetStorListConf(storList);
	int storSize = storList.cvidstor_size();

	for (s32 i = 0; i < storList.cvidstor_size(); i ++)
	{
		VidStor stor2;
		const VidStor &stor = storList.cvidstor(i);
		if (stor.strid() == strId)
		{
			pStor = stor;
			return true;
		}
	}

	return false;
}

bool ClientConfDB::FindView(astring strViewId)
{
	XGuard guard(m_cMutex);
	
	VidViewList viewList;
	GetViewListConf(viewList);
	int viewSize = viewList.cvidview_size();

	for (s32 i = 0; i < viewList.cvidview_size(); i ++)
	{
		const VidView &view = viewList.cvidview(i);
		if (view.strid() == strViewId)
		{
			return true;
		}
	}

	return false;
}
bool ClientConfDB::DeleteView(astring strViewId)
{
	XGuard guard(m_cMutex);

	VidViewList viewList;
	VidViewList viewListNew;
	GetViewListConf(viewList);
	int viewSize = viewList.cvidview_size();

	for (s32 i = 0; i < viewList.cvidview_size(); i ++)
	{
		const VidView &view = viewList.cvidview(i);
		if (view.strid() != strViewId)
		{
			VidView *pAddView = viewListNew.add_cvidview();
			*pAddView = view;
		}
	}

	UpdateViewListConf(viewListNew);
	return true;
}
bool ClientConfDB::AddView(VidView &pView)
{
	XGuard guard(m_cMutex);
	
	VidViewList viewList;

	GetViewListConf(viewList);
	
	VidView *pAddView = viewList.add_cvidview();
	*pAddView = pView;
	UpdateViewListConf(viewList);

	return true;
}



BOOL ClientConfDB::GetViewListConf(VidViewList &pData)
{
	VSCConfViewKey sKey;
	astring strValue;
	
	XGuard guard(m_cMutex);

	leveldb::Slice key((char *)&sKey, sizeof(sKey));

	leveldb::Status s = m_pDb->Get(leveldb::ReadOptions(), 
					key,  &strValue);
	if (s.ok() == false)
	{
		strValue = "fake";
	}

	if (pData.ParseFromString(strValue) == false)
	{
		VidViewList listDefault;
		pData = listDefault;
		//VDC_DEBUG( "View List Config is not init\n");
		return TRUE;
	}

	return TRUE;

}
BOOL ClientConfDB::UpdateViewListConf(VidViewList &pData)
{
	VSCConfViewKey sKey;

	XGuard guard(m_cMutex);

	leveldb::WriteOptions writeOptions;

	leveldb::Slice sysKey((char *)&sKey, sizeof(sKey));

	astring strOutput;
	if (pData.SerializeToString(&strOutput) != TRUE)
	{
		return FALSE;
	}
	leveldb::Slice sysValue(strOutput);

	m_pDb->Put(writeOptions, sysKey, sysValue);

	return TRUE;
}

bool ClientConfDB::GetViewConf(astring strId, VidView &pView)
{
	XGuard guard(m_cMutex);
	
	VidViewList viewList;
	GetViewListConf(viewList);
	int storSize = viewList.cvidview_size();

	for (s32 i = 0; i < viewList.cvidview_size(); i ++)
	{
		const VidView &view = viewList.cvidview(i);
		if (view.strid() == strId)
		{
			pView = view;
			return true;
		}
	}

	return false;
}

bool ClientConfDB::FindTour(astring strTourId)
{
	XGuard guard(m_cMutex);
	
	VidTourList tourList;
	GetTourListConf(tourList);
	int tourSize = tourList.cvidtour_size();

	for (s32 i = 0; i < tourList.cvidtour_size(); i ++)
	{
		const VidTour &tour = tourList.cvidtour(i);
		if (tour.strid() == strTourId)
		{
			return true;
		}
	}

	return false;
}
bool ClientConfDB::DeleteTour(astring strTourId)
{
	XGuard guard(m_cMutex);

	VidTourList tourList;
	VidTourList tourListNew;
	GetTourListConf(tourList);
	int tourSize = tourList.cvidtour_size();

	for (s32 i = 0; i < tourList.cvidtour_size(); i ++)
	{
		const VidTour &tour = tourList.cvidtour(i);
		if (tour.strid() != strTourId)
		{
			VidTour *pAddTour = tourListNew.add_cvidtour();
			*pAddTour = tour;
		}
	}

	UpdateTourListConf(tourListNew);
	return true;
}

bool ClientConfDB::AddTour(VidTour &pTour)
{
	XGuard guard(m_cMutex);
	
	VidTourList tourList;

	GetTourListConf(tourList);
	
	VidTour *pAddTour = tourList.add_cvidtour();
	*pAddTour = pTour;
	UpdateTourListConf(tourList);

	return true;
}



BOOL ClientConfDB::GetTourListConf(VidTourList &pData)
{
	VSCConfTourKey sKey;
	astring strValue;
	
	XGuard guard(m_cMutex);

	leveldb::Slice key((char *)&sKey, sizeof(sKey));

	leveldb::Status s = m_pDb->Get(leveldb::ReadOptions(), 
					key,  &strValue);
	if (s.ok() == false)
	{
		strValue = "fake";
	}

	if (pData.ParseFromString(strValue) == false)
	{
		VidTourList listDefault;
		pData = listDefault;
		//VDC_DEBUG( "Tour List Config is not init\n");
		return TRUE;
	}

	return TRUE;

}
BOOL ClientConfDB::UpdateTourListConf(VidTourList &pData)
{
	VSCConfTourKey sKey;

	XGuard guard(m_cMutex);

	leveldb::WriteOptions writeOptions;

	leveldb::Slice sysKey((char *)&sKey, sizeof(sKey));

	astring strOutput;
	if (pData.SerializeToString(&strOutput) != TRUE)
	{
		return FALSE;
	}
	leveldb::Slice sysValue(strOutput);

	m_pDb->Put(writeOptions, sysKey, sysValue);

	return TRUE;
}

bool ClientConfDB::GetTourConf(astring strId, VidTour &pTour)
{
	XGuard guard(m_cMutex);
	
	VidTourList tourList;
	GetTourListConf(tourList);
	int tourSize = tourList.cvidtour_size();

	for (s32 i = 0; i < tourList.cvidtour_size(); i ++)
	{
		const VidTour &tour = tourList.cvidtour(i);
		if (tour.strid() == strId)
		{
			pTour = tour;
			return true;
		}
	}

	return false;
}

bool ClientConfDB::FindGroup(astring strGroupId)
{
	XGuard guard(m_cMutex);
	
	VidGroupList groupList;
	GetGroupListConf(groupList);
	int groupSize = groupList.cvidgroup_size();

	for (s32 i = 0; i < groupList.cvidgroup_size(); i ++)
	{
		const VidGroup &group = groupList.cvidgroup(i);
		if (group.strid() == strGroupId)
		{
			return true;
		}
	}

	return false;
}
bool ClientConfDB::DeleteGroup(astring strGroupId)
{
	XGuard guard(m_cMutex);

	VidGroupList groupList;
	VidGroupList groupListNew;
	GetGroupListConf(groupList);
	int groupSize = groupList.cvidgroup_size();

	for (s32 i = 0; i < groupList.cvidgroup_size(); i ++)
	{
		const VidGroup &group = groupList.cvidgroup(i);
		if (group.strid() != strGroupId)
		{
			VidGroup *pAddGroup = groupListNew.add_cvidgroup();
			*pAddGroup = group;
		}
	}

	UpdateGroupListConf(groupListNew);
	return true;
}
bool ClientConfDB::AddGroup(VidGroup &pGroup)
{
	XGuard guard(m_cMutex);
	
	VidGroupList groupList;

	GetGroupListConf(groupList);
	
	VidGroup *pAddGroup = groupList.add_cvidgroup();
	*pAddGroup = pGroup;
	UpdateGroupListConf(groupList);

	return true;
}



BOOL ClientConfDB::GetGroupListConf(VidGroupList &pData)
{
	VSCConfVGroupKey sKey;
	astring strValue;
	
	XGuard guard(m_cMutex);

	leveldb::Slice key((char *)&sKey, sizeof(sKey));

	leveldb::Status s = m_pDb->Get(leveldb::ReadOptions(), 
					key,  &strValue);
	if (s.ok() == false)
	{
		strValue = "fake";
	}

	if (pData.ParseFromString(strValue) == false)
	{
		VidGroupList listDefault;
		pData = listDefault;
		//VDC_DEBUG( "Group List Config is not init\n");
		return TRUE;
	}

	return TRUE;

}
BOOL ClientConfDB::UpdateGroupListConf(VidGroupList &pData)
{
	VSCConfVGroupKey sKey;

	XGuard guard(m_cMutex);

	leveldb::WriteOptions writeOptions;

	leveldb::Slice sysKey((char *)&sKey, sizeof(sKey));

	astring strOutput;
	if (pData.SerializeToString(&strOutput) != TRUE)
	{
		return FALSE;
	}
	leveldb::Slice sysValue(strOutput);

	m_pDb->Put(writeOptions, sysKey, sysValue);

	return TRUE;
}

bool ClientConfDB::GetGroupConf(astring strId, VidGroup &pGroup)
{
	XGuard guard(m_cMutex);
	
	VidGroupList groupList;
	GetGroupListConf(groupList);
	int groupSize = groupList.cvidgroup_size();

	for (s32 i = 0; i < groupList.cvidgroup_size(); i ++)
	{
		const VidGroup &group = groupList.cvidgroup(i);
		if (group.strid() == strId)
		{
			pGroup = group;
			return true;
		}
	}

	return false;
}

bool ClientConfDB::FindEmap(astring strEmapId)
{
	XGuard guard(m_cMutex);
	
	VidEmapList emapList;
	GetEmapListConf(emapList);
	int emapSize = emapList.cvidemap_size();

	for (s32 i = 0; i < emapList.cvidemap_size(); i ++)
	{
		const VidEmap &emap = emapList.cvidemap(i);
		if (emap.strid() == strEmapId)
		{
			return true;
		}
	}

	return false;
}
bool ClientConfDB::DeleteEmap(astring strEmapId)
{
	XGuard guard(m_cMutex);

	VidEmapList emapList;
	VidEmapList emapListNew;
	GetEmapListConf(emapList);
	int emapSize = emapList.cvidemap_size();

	for (s32 i = 0; i < emapList.cvidemap_size(); i ++)
	{
		const VidEmap &emap = emapList.cvidemap(i);
		if (emap.strid() != strEmapId)
		{
			VidEmap *pAddEmap = emapListNew.add_cvidemap();
			*pAddEmap = emap;
		}
	}

	UpdateEmapListConf(emapListNew);
	return true;
}
bool ClientConfDB::AddEmap(VidEmap &pEmap)
{
	XGuard guard(m_cMutex);
	
	VidEmapList emapList;

	GetEmapListConf(emapList);
	
	VidEmap *pAddEmap = emapList.add_cvidemap();
	*pAddEmap = pEmap;
	UpdateEmapListConf(emapList);

	return true;
}



BOOL ClientConfDB::GetEmapListConf(VidEmapList &pData)
{
	VSCConfEmapKey sKey;
	astring strValue;
	
	XGuard guard(m_cMutex);

	leveldb::Slice key((char *)&sKey, sizeof(sKey));

	leveldb::Status s = m_pDb->Get(leveldb::ReadOptions(), 
					key,  &strValue);
	if (s.ok() == false)
	{
		strValue = "fake";
	}

	if (pData.ParseFromString(strValue) == false)
	{
		VidEmapList listDefault;
		pData = listDefault;
		//VDC_DEBUG( "Emap List Config is not init\n");
		return TRUE;
	}

	return TRUE;

}
BOOL ClientConfDB::UpdateEmapListConf(VidEmapList &pData)
{
	VSCConfEmapKey sKey;

	XGuard guard(m_cMutex);

	leveldb::WriteOptions writeOptions;

	leveldb::Slice sysKey((char *)&sKey, sizeof(sKey));

	astring strOutput;
	if (pData.SerializeToString(&strOutput) != TRUE)
	{
		return FALSE;
	}
	leveldb::Slice sysValue(strOutput);

	m_pDb->Put(writeOptions, sysKey, sysValue);

	return TRUE;
}

bool ClientConfDB::GetEmapConf(astring strId, VidEmap &pEmap)
{
	XGuard guard(m_cMutex);
	
	VidEmapList emapList;
	GetEmapListConf(emapList);
	int emapSize = emapList.cvidemap_size();

	for (s32 i = 0; i < emapList.cvidemap_size(); i ++)
	{
		const VidEmap &emap = emapList.cvidemap(i);
		if (emap.strid() == strId)
		{
			pEmap = emap;
			return true;
		}
	}

	return false;
}

