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
#ifndef __RAPID_DEC_HPP__
#define __RAPID_DEC_HPP__
#include "utility/type.hpp"
#include "utility/videotype.hpp"
#include "stddef.h"
#include "ffkit/ffoptions.h"
#include "ffkit/av_demuxer.h"
#include "ffkit/av_packet.h"
#include "ffkit/av_packet_factory.h"
#include "ffkit/fflocky.h"

using namespace cppkit;
using namespace std;
using namespace ffkit;

class RapidDec
{
public:
	RapidDec(RMRawVideoHandler pHandler = NULL,  void * pVideoContext = NULL)
	:m_Init(FALSE), m_rawVideoHandler(pHandler), m_pRawVideoContext(pVideoContext)
	{
	}
	virtual ~RapidDec() {}
public:
	virtual BOOL Init(){return FALSE;}
	virtual BOOL Decode( uint8_t* pBuf, int nSize, RawFrame & pFrame){return FALSE;}

protected:

	BOOL m_Init;
	RMRawVideoHandler m_rawVideoHandler;
	void *m_pRawVideoContext;
};

#endif /* __RAPID_DEC_HPP__ */
