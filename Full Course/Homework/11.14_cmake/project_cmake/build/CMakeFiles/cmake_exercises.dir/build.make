# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/build"

# Include any dependencies generated for this target.
include CMakeFiles/cmake_exercises.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cmake_exercises.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cmake_exercises.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmake_exercises.dir/flags.make

CMakeFiles/cmake_exercises.dir/main.c.o: CMakeFiles/cmake_exercises.dir/flags.make
CMakeFiles/cmake_exercises.dir/main.c.o: ../main.c
CMakeFiles/cmake_exercises.dir/main.c.o: CMakeFiles/cmake_exercises.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmake_exercises.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/cmake_exercises.dir/main.c.o -MF CMakeFiles/cmake_exercises.dir/main.c.o.d -o CMakeFiles/cmake_exercises.dir/main.c.o -c "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/main.c"

CMakeFiles/cmake_exercises.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake_exercises.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/main.c" > CMakeFiles/cmake_exercises.dir/main.c.i

CMakeFiles/cmake_exercises.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake_exercises.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/main.c" -o CMakeFiles/cmake_exercises.dir/main.c.s

CMakeFiles/cmake_exercises.dir/print.c.o: CMakeFiles/cmake_exercises.dir/flags.make
CMakeFiles/cmake_exercises.dir/print.c.o: ../print.c
CMakeFiles/cmake_exercises.dir/print.c.o: CMakeFiles/cmake_exercises.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/cmake_exercises.dir/print.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/cmake_exercises.dir/print.c.o -MF CMakeFiles/cmake_exercises.dir/print.c.o.d -o CMakeFiles/cmake_exercises.dir/print.c.o -c "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/print.c"

CMakeFiles/cmake_exercises.dir/print.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cmake_exercises.dir/print.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/print.c" > CMakeFiles/cmake_exercises.dir/print.c.i

CMakeFiles/cmake_exercises.dir/print.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cmake_exercises.dir/print.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/print.c" -o CMakeFiles/cmake_exercises.dir/print.c.s

# Object files for target cmake_exercises
cmake_exercises_OBJECTS = \
"CMakeFiles/cmake_exercises.dir/main.c.o" \
"CMakeFiles/cmake_exercises.dir/print.c.o"

# External object files for target cmake_exercises
cmake_exercises_EXTERNAL_OBJECTS =

cmake_exercises: CMakeFiles/cmake_exercises.dir/main.c.o
cmake_exercises: CMakeFiles/cmake_exercises.dir/print.c.o
cmake_exercises: CMakeFiles/cmake_exercises.dir/build.make
cmake_exercises: CMakeFiles/cmake_exercises.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable cmake_exercises"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmake_exercises.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmake_exercises.dir/build: cmake_exercises
.PHONY : CMakeFiles/cmake_exercises.dir/build

CMakeFiles/cmake_exercises.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmake_exercises.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmake_exercises.dir/clean

CMakeFiles/cmake_exercises.dir/depend:
	cd "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake" "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake" "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/build" "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/build" "/home/kirilov/code_workspace/C-/Full Course/Homework/11.14_cmake/project_cmake/build/CMakeFiles/cmake_exercises.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cmake_exercises.dir/depend
