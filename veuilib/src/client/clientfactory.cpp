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
#include "client/clientfactory.hpp"

ClientFactory::ClientFactory(VidEnv &pEnv)
:m_env(pEnv)
{
    //astring strTemp = m_env.GetAppConfPath("clientsystem");
    //m_SysPath.Open(strTemp);
	/* Create the stor factory */
    m_StorFactory = new StorFactory(m_Conf);
}

ClientFactory::~ClientFactory()
{
	delete m_StorFactory;
}

BOOL ClientFactory::SetSystemPath(astring strPath)
{
    //return m_SysPath.SetSystemPath(strPath);
    return TRUE;
}

BOOL ClientFactory::GetExportPath(astring &strPath)
{
	astring strKey = "ConfVideoExportKey";

	if (m_Conf.GetCmnParam(strKey, strPath) == FALSE)
	{
		strPath = m_env.GetAppConfPath("export");
		m_Conf.SetCmnParam(strKey, strPath);
		Poco::File file1(strPath);
		file1.createDirectories();
		
	}
	return TRUE;
}
BOOL ClientFactory::SetExportPath(astring &strPath)
{
	astring strKey = "ConfVideoExportKey";
	m_Conf.SetCmnParam(strKey, strPath);

	return TRUE;
}

BOOL ClientFactory::Init()
{
	astring strPath;
	//if (m_SysPath.GetSystemPath(strPath) == FALSE)
	//{
	//    SetSystemPath(m_env.GetConfDir());
	//}
	printf("Sys path %s\n", strPath.c_str());
	astring strConf = m_env.GetAppConfPath("clientconfig");
	m_Conf.Open(strConf);

	/* Init export path */
	astring strExportPath;
	GetExportPath(strExportPath);

	m_StorFactory->Init();

	InitLicense();
	return TRUE;
}

BOOL ClientFactory::CallChange(ClientFactoryChangeData data)
{
#if 0
	//XGuard guard(m_cMutex);
	ChangeNofityMap::iterator it = m_Change.begin(); 
	for(; it!=m_Change.end(); ++it)
	{
		if ((*it).second)
		{
			(*it).second((*it).first, data);
		}
	}
#else
	emit(SignalCallChange(data.type, data.id));
#endif
	 return TRUE;
}

BOOL ClientFactory::GetLicense(astring &strLicense, astring &strHostId, int &ch, 
	astring &type, astring &startTime, astring &expireTime)
{
	XGuard guard(m_cMutex);
	VPlay::GetLicenseInfo(strHostId, ch, type, startTime, expireTime);
	return m_Conf.GetLicense(strLicense);
}
BOOL ClientFactory::SetLicense(astring &strLicense)
{
	XGuard guard(m_cMutex);
	VPlay::SetLicense(strLicense);
	return m_Conf.SetLicense(strLicense);
}

BOOL ClientFactory::InitLicense()
{
	astring strLicense;
	m_Conf.GetLicense(strLicense);
	VPlay::SetLicense(strLicense);
	return TRUE;
}

bool ClientFactory::GetAutoLogin()
{
	VidClientConf  cData;
	m_Conf.GetClientConf(cData);

	return cData.bautologin();	
}
bool ClientFactory::SetAutoLogin(bool bAutoLogin)
{
	VidClientConf  cData;
	m_Conf.GetClientConf(cData);
	cData.set_bautologin(bAutoLogin);
	m_Conf.SetClientConf(cData);

	return true;	
}

bool ClientFactory::GetAutoFullScreen()
{
	VidClientConf  cData;
	m_Conf.GetClientConf(cData);

	return cData.bautofullscreen();	
}
bool ClientFactory::SetAutoFullScreen(bool bAuto)
{
	VidClientConf  cData;
	m_Conf.GetClientConf(cData);
	cData.set_bautofullscreen(bAuto);
	m_Conf.SetClientConf(cData);

	return true;	
}

bool ClientFactory::GetLang(VidLanguage &nLang)
{
	VidClientConf  cData;
	m_Conf.GetClientConf(cData);
	nLang = cData.nlang();

	return true;
}
bool ClientFactory::SetLang(VidLanguage &nLang)
{
	VidClientConf  cData;
	m_Conf.GetClientConf(cData);
	cData.set_nlang(nLang);
	m_Conf.SetClientConf(cData);

	return true;	
}

bool ClientFactory::AuthUser(astring &strUser, astring &strPasswd)
{
	/* Admin is a Super User */
	if (strUser == "admin")
	{
		VidClientConf  cData;
		m_Conf.GetClientConf(cData);
		SimpleCrypt crypt;
		astring strDummy = cData.stradminpasswd().c_str();
		QString strDePasswd = cData.stradminpasswd().c_str();
		if (crypt.decryptToString(strDePasswd).toStdString() == strPasswd)
		{
			return true;
		}else
		{
			return false;
		}
	}

	return false;
}
bool ClientFactory::GetAdminPasswd(astring &strPasswd)
{
	VidClientConf  cData;
	m_Conf.GetClientConf(cData);
	strPasswd = cData.stradminpasswd();
	
	return true;
}
bool ClientFactory::SetAdminPasswd(astring strPasswd)
{
	VidClientConf  cData;
	m_Conf.GetClientConf(cData);
	cData.set_stradminpasswd(strPasswd);
	m_Conf.SetClientConf(cData);

	return true;	
}

bool ClientFactory::AddView(VidView &pView)
{
	ClientFactoryChangeData data;
	bool ret = m_Conf.AddView(pView);

	data.type = CLIENT_FACTORY_VIEW_ADD;
	data.id = pView.strid();
	CallChange(data);
	return ret;
}
bool ClientFactory::DelView(astring strId)
{
	ClientFactoryChangeData data;
	bool ret = m_Conf.DeleteView(strId);

	data.type = CLIENT_FACTORY_VIEW_DEL;
	data.id = strId;
	CallChange(data);
	return ret;
}

bool ClientFactory::AddEmap(VidEmap &pEmap)
{
	ClientFactoryChangeData data;
	bool ret = m_Conf.AddEmap(pEmap);

	data.type = CLIENT_FACTORY_EMAP_ADD;
	data.id = pEmap.strid();
	CallChange(data);
	return ret;
}
bool ClientFactory::DelEmap(astring strId)
{
	ClientFactoryChangeData data;
	bool ret = m_Conf.DeleteEmap(strId);

	data.type = CLIENT_FACTORY_EMAP_DEL;
	data.id = strId;
	CallChange(data);
	return ret;
}

bool ClientFactory::AddEmapCamera(astring strId, VidEmapCamera cCam)
{
	bool ret = false;
	bool bAdd = false;

	VidEmap pEmap;
	VidEmap pEmapNew;

	if (m_Conf.GetEmapConf(strId, pEmap) == false)
	{
		return false;
	}

	pEmapNew = pEmap;
	pEmapNew.clear_ccamera();

	int camSize = pEmap.ccamera_size();

	for (s32 i = 0; i < pEmap.ccamera_size(); i++)
	{
		const VidEmapCamera &emapCam = pEmap.ccamera(i);
		if (emapCam.cid().strcameraid() == strId)
		{
			VidEmapCamera *pAddCam = pEmapNew.add_ccamera();
			*pAddCam = cCam;
			bAdd = true;
		}
		else
		{
			VidEmapCamera *pAddCam = pEmapNew.add_ccamera();
			*pAddCam = emapCam;
		}
	}

	if (bAdd == false)
	{
		VidEmapCamera *pAddCam = pEmapNew.add_ccamera();
		*pAddCam = cCam;
	}

	m_Conf.DeleteEmap(strId);
	m_Conf.AddEmap(pEmapNew);

	return true;
}
bool ClientFactory::DelEmapCamera(astring strId, astring strCamId)
{
	bool ret = false;

	VidEmap pEmap;
	VidEmap pEmapNew;

	if (m_Conf.GetEmapConf(strId, pEmap) == false)
	{
		return false;
	}

	pEmapNew = pEmap;
	pEmapNew.clear_ccamera();

	int camSize = pEmap.ccamera_size();

	for (s32 i = 0; i < pEmap.ccamera_size(); i ++)
	{
		const VidEmapCamera &emapCam = pEmap.ccamera(i);
		if (emapCam.cid().strcameraid() != strId)
		{
			VidEmapCamera *pAddCam = pEmapNew.add_ccamera();
			*pAddCam = emapCam;
		}
	}

	m_Conf.DeleteEmap(strId);
	m_Conf.AddEmap(pEmapNew);

	return true;
	
}


