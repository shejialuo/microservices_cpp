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
CMAKE_COMMAND = D:/360Downloads/Cmake/bin/cmake.exe

# The command to remove a file.
RM = D:/360Downloads/Cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:/Project/microservice-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:/Project/microservice-cpp/build

# Include any dependencies generated for this target.
include src/model/protocol/CMakeFiles/Protocol.dir/depend.make

# Include the progress variables for this target.
include src/model/protocol/CMakeFiles/Protocol.dir/progress.make

# Include the compile flags for this target's objects.
include src/model/protocol/CMakeFiles/Protocol.dir/flags.make

src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj: src/model/protocol/CMakeFiles/Protocol.dir/flags.make
src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj: src/model/protocol/CMakeFiles/Protocol.dir/includes_CXX.rsp
src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj: ../src/model/protocol/protocol.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:/Project/microservice-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj"
	cd D:/Project/microservice-cpp/build/src/model/protocol && D:/360Downloads/mingw64/bin/x86_64-w64-mingw32-g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Protocol.dir/protocol.cpp.obj -c D:/Project/microservice-cpp/src/model/protocol/protocol.cpp

src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Protocol.dir/protocol.cpp.i"
	cd D:/Project/microservice-cpp/build/src/model/protocol && D:/360Downloads/mingw64/bin/x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:/Project/microservice-cpp/src/model/protocol/protocol.cpp > CMakeFiles/Protocol.dir/protocol.cpp.i

src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Protocol.dir/protocol.cpp.s"
	cd D:/Project/microservice-cpp/build/src/model/protocol && D:/360Downloads/mingw64/bin/x86_64-w64-mingw32-g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:/Project/microservice-cpp/src/model/protocol/protocol.cpp -o CMakeFiles/Protocol.dir/protocol.cpp.s

src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj.requires:

.PHONY : src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj.requires

src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj.provides: src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj.requires
	$(MAKE) -f src/model/protocol/CMakeFiles/Protocol.dir/build.make src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj.provides.build
.PHONY : src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj.provides

src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj.provides.build: src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj


# Object files for target Protocol
Protocol_OBJECTS = \
"CMakeFiles/Protocol.dir/protocol.cpp.obj"

# External object files for target Protocol
Protocol_EXTERNAL_OBJECTS =

../lib/libProtocol.a: src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj
../lib/libProtocol.a: src/model/protocol/CMakeFiles/Protocol.dir/build.make
../lib/libProtocol.a: src/model/protocol/CMakeFiles/Protocol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:/Project/microservice-cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../../lib/libProtocol.a"
	cd D:/Project/microservice-cpp/build/src/model/protocol && $(CMAKE_COMMAND) -P CMakeFiles/Protocol.dir/cmake_clean_target.cmake
	cd D:/Project/microservice-cpp/build/src/model/protocol && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Protocol.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/model/protocol/CMakeFiles/Protocol.dir/build: ../lib/libProtocol.a

.PHONY : src/model/protocol/CMakeFiles/Protocol.dir/build

src/model/protocol/CMakeFiles/Protocol.dir/requires: src/model/protocol/CMakeFiles/Protocol.dir/protocol.cpp.obj.requires

.PHONY : src/model/protocol/CMakeFiles/Protocol.dir/requires

src/model/protocol/CMakeFiles/Protocol.dir/clean:
	cd D:/Project/microservice-cpp/build/src/model/protocol && $(CMAKE_COMMAND) -P CMakeFiles/Protocol.dir/cmake_clean.cmake
.PHONY : src/model/protocol/CMakeFiles/Protocol.dir/clean

src/model/protocol/CMakeFiles/Protocol.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" D:/Project/microservice-cpp D:/Project/microservice-cpp/src/model/protocol D:/Project/microservice-cpp/build D:/Project/microservice-cpp/build/src/model/protocol D:/Project/microservice-cpp/build/src/model/protocol/CMakeFiles/Protocol.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/model/protocol/CMakeFiles/Protocol.dir/depend

