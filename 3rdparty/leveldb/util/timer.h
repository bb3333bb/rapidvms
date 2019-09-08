// Copyright (c) 2015, Baidu.com, Inc. All Rights Reserved
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef  TERA_UTILS_TIMER_H_
#define  TERA_UTILS_TIMER_H_
#ifdef LEVELDB_PLATFORM_POSIX
#include <sys/time.h>
#endif
#ifdef LEVELDB_PLATFORM_WINDOWS
#include <time.h>
#endif
#include <string>

namespace tera {

#ifdef LEVELDB_PLATFORM_WINDOWS
inline int
gettimeofday(struct timeval * tp, struct timezone * tzp)
{
    FILETIME    file_time;
    SYSTEMTIME  system_time;
    ULARGE_INTEGER ularge;

    GetSystemTime(&system_time);
    SystemTimeToFileTime(&system_time, &file_time);
    ularge.LowPart = file_time.dwLowDateTime;
    ularge.HighPart = file_time.dwHighDateTime;

	tp->tv_sec = (long)((ularge.QuadPart - ((unsigned __int64)116444736000000000ULL)) / 10000000L);
    tp->tv_usec = (long) (system_time.wMilliseconds * 1000);

    return 0;
}
#endif

static inline std::string get_curtime_str() {
    struct tm tt;
    char buf[20];
    time_t t = time(NULL);
#ifdef LEVELDB_PLATFORM_POSIX
    strftime(buf, 20, "%Y%m%d-%H:%M:%S", localtime_r(&t, &tt));
#endif
#ifdef LEVELDB_PLATFORM_WINDOWS
	strftime(buf, 20, "%Y%m%d-%H:%M:%S", localtime(&t));
#endif
    return std::string(buf, 17);
}

static inline int64_t get_micros() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return static_cast<int64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
}

static inline int64_t get_unique_micros(int64_t ref) {
    struct timeval tv;
    int64_t now;
    do {
        gettimeofday(&tv, NULL);
        now = static_cast<int64_t>(tv.tv_sec) * 1000000 + tv.tv_usec;
    } while (now == ref);
    return now;
}

static inline int64_t GetTimeStampInUs() {
    return get_micros();
}

static inline int64_t GetTimeStampInMs() {
    return get_micros() / 1000;
}

}  // namespace tera

#endif  // TERA_UTILS_TIMER_H_
