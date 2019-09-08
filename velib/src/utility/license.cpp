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
#include "license.hpp"

BOOL SetIc(string lic)
{
	return TRUE;
}
BOOL IsIced()
{
	return TRUE;
}
BOOL LicSetLicense(astring &strLicense)
{
	return TRUE;
}
BOOL LicGetLicenseInfo(astring &strHostId, int &ch, astring &type,
	astring &startTime, astring &expireTime)
{
	strHostId = "RAPIDVMS::COMMUNITY";
	ch = 512;
	type = "Community";
	startTime = std::to_string((s64)(time(NULL)));
	expireTime = std::to_string((s64)(time(NULL)));
	return TRUE;
}
bool LicRecordRef()
{
	return TRUE;
}
bool LicRecordUnRef()
{
	return TRUE;
}
bool LicPlayRef()
{
	return TRUE;
}
bool LicPlayUnRef()
{
	return TRUE;
}