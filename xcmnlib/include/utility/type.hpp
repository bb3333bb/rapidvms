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
#ifndef _V_TYPE_H_
#define _V_TYPE_H_

#include <stdio.h>
#include <stdlib.h>
#ifdef WIN32
#include <io.h>
#endif
#include <assert.h>
#include <stdarg.h>
#include <errno.h>
#include <iostream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <stdarg.h>
#include <time.h>
#include "utility/typeexport.hpp"

#ifndef  V_TYPE
#define V_TYPE
typedef  unsigned char u8;
typedef  char s8;
typedef  unsigned short u16;
typedef  short s16;
typedef  unsigned int  u32;
typedef  int s32;
#if defined(__GNUC__)
#if defined(__LP64__)
typedef  long  s64;
typedef  unsigned  long u64;
#else
typedef  long long s64;
typedef  unsigned  long long u64;
#endif
#else
typedef  long long s64;
typedef  unsigned  long long u64;
#endif

typedef unsigned long       DWORD;
typedef int                 BOOL;
typedef unsigned char       BYTE;
typedef unsigned short      WORD;
typedef float               FLOAT;

typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef int INT;
typedef double DATE;

typedef signed char         INT8, *PINT8;
typedef signed short        INT16, *PINT16;
typedef signed int          INT32, *PINT32;
typedef signed long long    INT64, *PINT64;
typedef unsigned char       UINT8, *PUINT8;
typedef unsigned short      UINT16, *PUINT16;
typedef unsigned int        UINT32, *PUINT32;
typedef unsigned long long  UINT64, *PUINT64;

#ifndef TRUE 
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif
#endif /* V_TYPE */


#ifndef WIN32
typedef void * HWND; 	
#endif

#ifdef WIN32
#define snprintf _snprintf
#endif

#ifndef WIN32   
    #ifndef _V_PACKED_1_   
    #define _V_PACKED_1_  __attribute__ ((packed))     
    #endif   
#else   
    #ifndef _V_PACKED_1_   
    #define _V_PACKED_1_   
    #endif   
#endif   

inline bool isPlatformLittleEndian()
{
   int n = 1;
   return *((char*)&n) ? true : false;
}

#ifndef WIN32
#ifdef __BIG_ENDIAN__
#define BIG_ORDER 1
#else
#define BIG_ORDER 0
#endif
#else /* Windows */
#define BIG_ORDER ((1 >> 1 == 0) ? 0 : 1)
#endif

typedef std::string astring;

#endif /* _VDC_UTILITY_H_ */
