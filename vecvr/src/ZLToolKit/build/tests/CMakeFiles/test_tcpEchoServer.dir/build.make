# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_tcpEchoServer.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_tcpEchoServer.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_tcpEchoServer.dir/flags.make

tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o: tests/CMakeFiles/test_tcpEchoServer.dir/flags.make
tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o: ../tests/test_tcpEchoServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o"
	cd /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o -c /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/tests/test_tcpEchoServer.cpp

tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.i"
	cd /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/tests/test_tcpEchoServer.cpp > CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.i

tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.s"
	cd /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/tests/test_tcpEchoServer.cpp -o CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.s

tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o.requires:

.PHONY : tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o.requires

tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o.provides: tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/test_tcpEchoServer.dir/build.make tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o.provides.build
.PHONY : tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o.provides

tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o.provides.build: tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o


# Object files for target test_tcpEchoServer
test_tcpEchoServer_OBJECTS = \
"CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o"

# External object files for target test_tcpEchoServer
test_tcpEchoServer_EXTERNAL_OBJECTS =

bin/test_tcpEchoServer: tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o
bin/test_tcpEchoServer: tests/CMakeFiles/test_tcpEchoServer.dir/build.make
bin/test_tcpEchoServer: lib/libZLToolKit.so
bin/test_tcpEchoServer: /home/bangnq/working/rapidvms/output/Ubuntu-18.04-64bit/lib/libssl.so
bin/test_tcpEchoServer: /home/bangnq/working/rapidvms/output/Ubuntu-18.04-64bit/lib/libcrypto.so
bin/test_tcpEchoServer: tests/CMakeFiles/test_tcpEchoServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/test_tcpEchoServer"
	cd /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_tcpEchoServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_tcpEchoServer.dir/build: bin/test_tcpEchoServer

.PHONY : tests/CMakeFiles/test_tcpEchoServer.dir/build

tests/CMakeFiles/test_tcpEchoServer.dir/requires: tests/CMakeFiles/test_tcpEchoServer.dir/test_tcpEchoServer.cpp.o.requires

.PHONY : tests/CMakeFiles/test_tcpEchoServer.dir/requires

tests/CMakeFiles/test_tcpEchoServer.dir/clean:
	cd /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_tcpEchoServer.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_tcpEchoServer.dir/clean

tests/CMakeFiles/test_tcpEchoServer.dir/depend:
	cd /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/tests /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/tests /home/bangnq/working/linkingvision/rapidvms/vecvr/src/ZLToolKit/build/tests/CMakeFiles/test_tcpEchoServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_tcpEchoServer.dir/depend

