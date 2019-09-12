#!/bin/bash
find ./ -name "CMakeCache.txt" | xargs rm -Rf

find ./ -name "cmake_install.cmake" | xargs rm -Rf
