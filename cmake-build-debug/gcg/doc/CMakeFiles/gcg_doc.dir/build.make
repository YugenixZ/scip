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

# Utility rule file for gcg_doc.

# Include any custom commands dependencies for this target.
include gcg/doc/CMakeFiles/gcg_doc.dir/compiler_depend.make

# Include the progress variables for this target.
include gcg/doc/CMakeFiles/gcg_doc.dir/progress.make

gcg/doc/CMakeFiles/gcg_doc: bin/gcg.exe
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\gcg\doc && "D:\CLion 2023.3.4\bin\cmake\win\x64\bin\cmake.exe" -E env BINDIR=D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/cmake-build-debug/bin D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/gcg/doc/builddoc.sh --mathjax

gcg_doc: gcg/doc/CMakeFiles/gcg_doc
gcg_doc: gcg/doc/CMakeFiles/gcg_doc.dir/build.make
.PHONY : gcg_doc

# Rule to build all files generated by this target.
gcg/doc/CMakeFiles/gcg_doc.dir/build: gcg_doc
.PHONY : gcg/doc/CMakeFiles/gcg_doc.dir/build

gcg/doc/CMakeFiles/gcg_doc.dir/clean:
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\gcg\doc && $(CMAKE_COMMAND) -P CMakeFiles\gcg_doc.dir\cmake_clean.cmake
.PHONY : gcg/doc/CMakeFiles/gcg_doc.dir/clean

gcg/doc/CMakeFiles/gcg_doc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0 D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\gcg\doc D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\gcg\doc D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\gcg\doc\CMakeFiles\gcg_doc.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : gcg/doc/CMakeFiles/gcg_doc.dir/depend

