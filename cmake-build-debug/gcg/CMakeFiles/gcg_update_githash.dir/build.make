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

# Utility rule file for gcg_update_githash.

# Include any custom commands dependencies for this target.
include gcg/CMakeFiles/gcg_update_githash.dir/compiler_depend.make

# Include the progress variables for this target.
include gcg/CMakeFiles/gcg_update_githash.dir/progress.make

gcg/CMakeFiles/gcg_update_githash:
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\gcg && "D:\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe" -DDST=D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/src/gcg/githash.c -P D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/gcg_update_githash.cmake

gcg_update_githash: gcg/CMakeFiles/gcg_update_githash
gcg_update_githash: gcg/CMakeFiles/gcg_update_githash.dir/build.make
.PHONY : gcg_update_githash

# Rule to build all files generated by this target.
gcg/CMakeFiles/gcg_update_githash.dir/build: gcg_update_githash
.PHONY : gcg/CMakeFiles/gcg_update_githash.dir/build

gcg/CMakeFiles/gcg_update_githash.dir/clean:
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\gcg && $(CMAKE_COMMAND) -P CMakeFiles\gcg_update_githash.dir\cmake_clean.cmake
.PHONY : gcg/CMakeFiles/gcg_update_githash.dir/clean

gcg/CMakeFiles/gcg_update_githash.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0 D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\gcg D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\gcg D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\gcg\CMakeFiles\gcg_update_githash.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : gcg/CMakeFiles/gcg_update_githash.dir/depend

