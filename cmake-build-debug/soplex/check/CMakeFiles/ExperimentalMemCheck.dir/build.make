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

# Utility rule file for ExperimentalMemCheck.

# Include any custom commands dependencies for this target.
include soplex/check/CMakeFiles/ExperimentalMemCheck.dir/compiler_depend.make

# Include the progress variables for this target.
include soplex/check/CMakeFiles/ExperimentalMemCheck.dir/progress.make

soplex/check/CMakeFiles/ExperimentalMemCheck:
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\check && "D:\CLion 2023.3.4\bin\cmake\win\x64\bin\ctest.exe" -D ExperimentalMemCheck

ExperimentalMemCheck: soplex/check/CMakeFiles/ExperimentalMemCheck
ExperimentalMemCheck: soplex/check/CMakeFiles/ExperimentalMemCheck.dir/build.make
.PHONY : ExperimentalMemCheck

# Rule to build all files generated by this target.
soplex/check/CMakeFiles/ExperimentalMemCheck.dir/build: ExperimentalMemCheck
.PHONY : soplex/check/CMakeFiles/ExperimentalMemCheck.dir/build

soplex/check/CMakeFiles/ExperimentalMemCheck.dir/clean:
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\check && $(CMAKE_COMMAND) -P CMakeFiles\ExperimentalMemCheck.dir\cmake_clean.cmake
.PHONY : soplex/check/CMakeFiles/ExperimentalMemCheck.dir/clean

soplex/check/CMakeFiles/ExperimentalMemCheck.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0 D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\check D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\check D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\check\CMakeFiles\ExperimentalMemCheck.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : soplex/check/CMakeFiles/ExperimentalMemCheck.dir/depend

