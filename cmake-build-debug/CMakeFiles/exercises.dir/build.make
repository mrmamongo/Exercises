# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2020.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2020.2.4/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lamp/CLionProjects/Exc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lamp/CLionProjects/Exc/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exercises.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercises.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercises.dir/flags.make

CMakeFiles/exercises.dir/Exercises/Main.cpp.o: CMakeFiles/exercises.dir/flags.make
CMakeFiles/exercises.dir/Exercises/Main.cpp.o: ../Exercises/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lamp/CLionProjects/Exc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exercises.dir/Exercises/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exercises.dir/Exercises/Main.cpp.o -c /home/lamp/CLionProjects/Exc/Exercises/Main.cpp

CMakeFiles/exercises.dir/Exercises/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exercises.dir/Exercises/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lamp/CLionProjects/Exc/Exercises/Main.cpp > CMakeFiles/exercises.dir/Exercises/Main.cpp.i

CMakeFiles/exercises.dir/Exercises/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exercises.dir/Exercises/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lamp/CLionProjects/Exc/Exercises/Main.cpp -o CMakeFiles/exercises.dir/Exercises/Main.cpp.s

# Object files for target exercises
exercises_OBJECTS = \
"CMakeFiles/exercises.dir/Exercises/Main.cpp.o"

# External object files for target exercises
exercises_EXTERNAL_OBJECTS =

exercises: CMakeFiles/exercises.dir/Exercises/Main.cpp.o
exercises: CMakeFiles/exercises.dir/build.make
exercises: CMakeFiles/exercises.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lamp/CLionProjects/Exc/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exercises"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exercises.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercises.dir/build: exercises

.PHONY : CMakeFiles/exercises.dir/build

CMakeFiles/exercises.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exercises.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exercises.dir/clean

CMakeFiles/exercises.dir/depend:
	cd /home/lamp/CLionProjects/Exc/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lamp/CLionProjects/Exc /home/lamp/CLionProjects/Exc /home/lamp/CLionProjects/Exc/cmake-build-debug /home/lamp/CLionProjects/Exc/cmake-build-debug /home/lamp/CLionProjects/Exc/cmake-build-debug/CMakeFiles/exercises.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercises.dir/depend
