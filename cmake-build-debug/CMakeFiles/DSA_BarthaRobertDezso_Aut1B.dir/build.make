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
CMAKE_SOURCE_DIR = C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/flags.make

CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.obj: CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/flags.make
CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.obj"
	C:\OJI\Codeblocks\mingw64telepitett\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\DSA_BarthaRobertDezso_Aut1B.dir\main.c.obj   -c C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\main.c

CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.i"
	C:\OJI\Codeblocks\mingw64telepitett\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\main.c > CMakeFiles\DSA_BarthaRobertDezso_Aut1B.dir\main.c.i

CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.s"
	C:\OJI\Codeblocks\mingw64telepitett\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\main.c -o CMakeFiles\DSA_BarthaRobertDezso_Aut1B.dir\main.c.s

# Object files for target DSA_BarthaRobertDezso_Aut1B
DSA_BarthaRobertDezso_Aut1B_OBJECTS = \
"CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.obj"

# External object files for target DSA_BarthaRobertDezso_Aut1B
DSA_BarthaRobertDezso_Aut1B_EXTERNAL_OBJECTS =

DSA_BarthaRobertDezso_Aut1B.exe: CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/main.c.obj
DSA_BarthaRobertDezso_Aut1B.exe: CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/build.make
DSA_BarthaRobertDezso_Aut1B.exe: CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/linklibs.rsp
DSA_BarthaRobertDezso_Aut1B.exe: CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/objects1.rsp
DSA_BarthaRobertDezso_Aut1B.exe: CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable DSA_BarthaRobertDezso_Aut1B.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\DSA_BarthaRobertDezso_Aut1B.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/build: DSA_BarthaRobertDezso_Aut1B.exe

.PHONY : CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/build

CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\DSA_BarthaRobertDezso_Aut1B.dir\cmake_clean.cmake
.PHONY : CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/clean

CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\cmake-build-debug C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\cmake-build-debug C:\Users\Dell\Desktop\Egyetem\Tantargyak\Adatszerkezetek_es_algoritmusok\DSA_BarthaRobertDezso_Aut1B\cmake-build-debug\CMakeFiles\DSA_BarthaRobertDezso_Aut1B.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DSA_BarthaRobertDezso_Aut1B.dir/depend

