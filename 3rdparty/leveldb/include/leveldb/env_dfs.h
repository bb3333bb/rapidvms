// Copyright (c) 2015, Baidu.com, Inc. All Rights Reserved
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef  TERA_LEVELDB_ENV_DFS_H_
#define  TERA_LEVELDB_ENV_DFS_H_

#include <stdio.h>
#ifdef LEVELDB_PLATFORM_POSIX
#include <sys/syscall.h>
#include <sys/time.h>
#endif
#include <time.h>
#include <unistd.h>

#include <algorithm>
#include <iostream>

#include "leveldb/dfs.h"
#include "leveldb/env.h"
#include "leveldb/status.h"
#include "counter.h"

namespace leveldb {

class DfsEnv : public EnvWrapper {
public:
    DfsEnv(Dfs* dfs);

    virtual ~DfsEnv();

    virtual Status NewSequentialFile(const std::string& fname, SequentialFile** result);

    virtual Status NewRandomAccessFile(const std::string& fname, RandomAccessFile** result);

    virtual Status NewWritableFile(const std::string& fname, WritableFile** result);

    virtual bool FileExists(const std::string& fname);

    bool CheckDelete(const std::string& fname, std::vector<std::string>* flags);

    virtual Status GetChildren(const std::string& path, std::vector<std::string>* result);

    virtual Status DeleteFile(const std::string& fname);

    virtual Status CreateDir(const std::string& name);

    virtual Status DeleteDir(const std::string& name);

    virtual Status ListDir(const std::string& name, std::vector<std::string>* result);

    virtual Status CopyFile(const std::string& from, const std::string& to);

    virtual Status GetFileSize(const std::string& fname, uint64_t* size);

    virtual Status RenameFile(const std::string& src, const std::string& target);

    virtual Status LockFile(const std::string& fname, FileLock** lock);

    virtual Status UnlockFile(FileLock* lock);

    virtual Status NewLogger(const std::string& fname, Logger** result);

    static uint64_t gettid() {
#ifdef LEVELDB_PLATFORM_POSIX
		 pid_t tid = syscall(SYS_gettid);
        return tid;
#endif
#ifdef LEVELDB_PLATFORM_WINDOWS
		return 0;
#endif
    }
private:
    Dfs* hdfs_;
};

/// init env
void InitHdfsEnv();
void InitHdfs2Env(const std::string& namenode_list);
void InitNfsEnv(const std::string& mountpoint,
                const std::string& conf_path);
/// default dfs env
Env* EnvDfs();
/// new hdfs env
Env* NewDfsEnv(Dfs*);

}  // namespace leveldb

#endif  // TERA_LEVELDB_ENV_DFS_H_

/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
