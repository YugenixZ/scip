# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug

# Include any dependencies generated for this target.
include soplex/src/CMakeFiles/example.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include soplex/src/CMakeFiles/example.dir/compiler_depend.make

# Include the progress variables for this target.
include soplex/src/CMakeFiles/example.dir/progress.make

# Include the compile flags for this target's objects.
include soplex/src/CMakeFiles/example.dir/flags.make

soplex/src/CMakeFiles/example.dir/example.cpp.obj: soplex/src/CMakeFiles/example.dir/flags.make
soplex/src/CMakeFiles/example.dir/example.cpp.obj: soplex/src/CMakeFiles/example.dir/includes_CXX.rsp
soplex/src/CMakeFiles/example.dir/example.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/example.cpp
soplex/src/CMakeFiles/example.dir/example.cpp.obj: soplex/src/CMakeFiles/example.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object soplex/src/CMakeFiles/example.dir/example.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/example.dir/example.cpp.obj -MF CMakeFiles\example.dir\example.cpp.obj.d -o CMakeFiles\example.dir\example.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\example.cpp

soplex/src/CMakeFiles/example.dir/example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/example.dir/example.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\example.cpp > CMakeFiles\example.dir\example.cpp.i

soplex/src/CMakeFiles/example.dir/example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/example.dir/example.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\example.cpp -o CMakeFiles\example.dir\example.cpp.s

# Object files for target example
example_OBJECTS = \
"CMakeFiles/example.dir/example.cpp.obj"

# External object files for target example
example_EXTERNAL_OBJECTS =

bin/example.exe: soplex/src/CMakeFiles/example.dir/example.cpp.obj
bin/example.exe: soplex/src/CMakeFiles/example.dir/build.make
bin/example.exe: lib/libsoplex.a
bin/example.exe: C:/msys64/mingw64/lib/libz.dll.a
bin/example.exe: soplex/src/CMakeFiles/example.dir/linkLibs.rsp
bin/example.exe: soplex/src/CMakeFiles/example.dir/objects1.rsp
bin/example.exe: soplex/src/CMakeFiles/example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ..\..\bin\example.exe"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\example.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
soplex/src/CMakeFiles/example.dir/build: bin/example.exe
.PHONY : soplex/src/CMakeFiles/example.dir/build

soplex/src/CMakeFiles/example.dir/clean:
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && $(CMAKE_COMMAND) -P CMakeFiles\example.dir\cmake_clean.cmake
.PHONY : soplex/src/CMakeFiles/example.dir/clean

soplex/src/CMakeFiles/example.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0 D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src\CMakeFiles\example.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : soplex/src/CMakeFiles/example.dir/depend

