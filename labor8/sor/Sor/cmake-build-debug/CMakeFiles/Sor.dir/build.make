# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sor.dir/flags.make

CMakeFiles/Sor.dir/main.c.obj: CMakeFiles/Sor.dir/flags.make
CMakeFiles/Sor.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Sor.dir/main.c.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Sor.dir\main.c.obj   -c C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\main.c

CMakeFiles/Sor.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sor.dir/main.c.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\main.c > CMakeFiles\Sor.dir\main.c.i

CMakeFiles/Sor.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sor.dir/main.c.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\main.c -o CMakeFiles\Sor.dir\main.c.s

CMakeFiles/Sor.dir/Sor.c.obj: CMakeFiles/Sor.dir/flags.make
CMakeFiles/Sor.dir/Sor.c.obj: ../Sor.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Sor.dir/Sor.c.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Sor.dir\Sor.c.obj   -c C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\Sor.c

CMakeFiles/Sor.dir/Sor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sor.dir/Sor.c.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\Sor.c > CMakeFiles\Sor.dir\Sor.c.i

CMakeFiles/Sor.dir/Sor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sor.dir/Sor.c.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\Sor.c -o CMakeFiles\Sor.dir\Sor.c.s

# Object files for target Sor
Sor_OBJECTS = \
"CMakeFiles/Sor.dir/main.c.obj" \
"CMakeFiles/Sor.dir/Sor.c.obj"

# External object files for target Sor
Sor_EXTERNAL_OBJECTS =

Sor.exe: CMakeFiles/Sor.dir/main.c.obj
Sor.exe: CMakeFiles/Sor.dir/Sor.c.obj
Sor.exe: CMakeFiles/Sor.dir/build.make
Sor.exe: CMakeFiles/Sor.dir/linklibs.rsp
Sor.exe: CMakeFiles/Sor.dir/objects1.rsp
Sor.exe: CMakeFiles/Sor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Sor.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Sor.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sor.dir/build: Sor.exe

.PHONY : CMakeFiles/Sor.dir/build

CMakeFiles/Sor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Sor.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Sor.dir/clean

CMakeFiles/Sor.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\cmake-build-debug C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\cmake-build-debug C:\Github\DSA_lab\DSA_BalazsB-lintBern-rd_AUTIB\Onfejlesztes\Sor\cmake-build-debug\CMakeFiles\Sor.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sor.dir/depend

