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
include soplex/src/CMakeFiles/libsoplex-pic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.make

# Include the progress variables for this target.
include soplex/src/CMakeFiles/libsoplex-pic.dir/progress.make

# Include the compile flags for this target's objects.
include soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/didxset.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\didxset.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\didxset.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\didxset.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\didxset.cpp > CMakeFiles\libsoplex-pic.dir\soplex\didxset.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\didxset.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\didxset.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/idxset.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\idxset.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\idxset.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\idxset.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\idxset.cpp > CMakeFiles\libsoplex-pic.dir\soplex\idxset.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\idxset.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\idxset.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/mpsinput.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\mpsinput.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\mpsinput.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\mpsinput.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\mpsinput.cpp > CMakeFiles\libsoplex-pic.dir\soplex\mpsinput.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\mpsinput.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\mpsinput.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/nameset.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\nameset.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\nameset.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\nameset.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\nameset.cpp > CMakeFiles\libsoplex-pic.dir\soplex\nameset.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\nameset.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\nameset.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxdefines.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\spxdefines.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\spxdefines.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxdefines.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxdefines.cpp > CMakeFiles\libsoplex-pic.dir\soplex\spxdefines.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxdefines.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\spxdefines.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxgithash.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\spxgithash.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\spxgithash.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxgithash.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxgithash.cpp > CMakeFiles\libsoplex-pic.dir\soplex\spxgithash.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxgithash.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\spxgithash.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxid.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\spxid.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\spxid.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxid.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxid.cpp > CMakeFiles\libsoplex-pic.dir\soplex\spxid.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxid.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\spxid.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/spxout.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\spxout.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\spxout.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxout.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxout.cpp > CMakeFiles\libsoplex-pic.dir\soplex\spxout.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\spxout.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\spxout.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/usertimer.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\usertimer.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\usertimer.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\usertimer.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\usertimer.cpp > CMakeFiles\libsoplex-pic.dir\soplex\usertimer.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\usertimer.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\usertimer.cpp.s

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/flags.make
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/includes_CXX.rsp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.obj: D:/scipoptsuite-9.1.0/scipoptsuite-9.1.0/soplex/src/soplex/wallclocktimer.cpp
soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.obj: soplex/src/CMakeFiles/libsoplex-pic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.obj"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.obj -MF CMakeFiles\libsoplex-pic.dir\soplex\wallclocktimer.cpp.obj.d -o CMakeFiles\libsoplex-pic.dir\soplex\wallclocktimer.cpp.obj -c D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\wallclocktimer.cpp

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.i"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\wallclocktimer.cpp > CMakeFiles\libsoplex-pic.dir\soplex\wallclocktimer.cpp.i

soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.s"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && "D:\CLion 2023.3.4\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src\soplex\wallclocktimer.cpp -o CMakeFiles\libsoplex-pic.dir\soplex\wallclocktimer.cpp.s

# Object files for target libsoplex-pic
libsoplex__pic_OBJECTS = \
"CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.obj" \
"CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.obj"

# External object files for target libsoplex-pic
libsoplex__pic_EXTERNAL_OBJECTS =

lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/didxset.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/idxset.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/mpsinput.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/nameset.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxdefines.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxgithash.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxid.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/spxout.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/usertimer.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/soplex/wallclocktimer.cpp.obj
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/build.make
lib/libsoplex-pic.a: soplex/src/CMakeFiles/libsoplex-pic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library ..\..\lib\libsoplex-pic.a"
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && $(CMAKE_COMMAND) -P CMakeFiles\libsoplex-pic.dir\cmake_clean_target.cmake
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\libsoplex-pic.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
soplex/src/CMakeFiles/libsoplex-pic.dir/build: lib/libsoplex-pic.a
.PHONY : soplex/src/CMakeFiles/libsoplex-pic.dir/build

soplex/src/CMakeFiles/libsoplex-pic.dir/clean:
	cd /d D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src && $(CMAKE_COMMAND) -P CMakeFiles\libsoplex-pic.dir\cmake_clean.cmake
.PHONY : soplex/src/CMakeFiles/libsoplex-pic.dir/clean

soplex/src/CMakeFiles/libsoplex-pic.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0 D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\soplex\src D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src D:\scipoptsuite-9.1.0\scipoptsuite-9.1.0\cmake-build-debug\soplex\src\CMakeFiles\libsoplex-pic.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : soplex/src/CMakeFiles/libsoplex-pic.dir/depend

