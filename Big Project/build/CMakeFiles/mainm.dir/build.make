# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ahmed/Big Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ahmed/Big Project/build"

# Include any dependencies generated for this target.
include CMakeFiles/mainm.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mainm.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mainm.dir/flags.make

CMakeFiles/mainm.dir/apps/mainm.cpp.o: CMakeFiles/mainm.dir/flags.make
CMakeFiles/mainm.dir/apps/mainm.cpp.o: ../apps/mainm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mainm.dir/apps/mainm.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mainm.dir/apps/mainm.cpp.o -c "/home/ahmed/Big Project/apps/mainm.cpp"

CMakeFiles/mainm.dir/apps/mainm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainm.dir/apps/mainm.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmed/Big Project/apps/mainm.cpp" > CMakeFiles/mainm.dir/apps/mainm.cpp.i

CMakeFiles/mainm.dir/apps/mainm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainm.dir/apps/mainm.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmed/Big Project/apps/mainm.cpp" -o CMakeFiles/mainm.dir/apps/mainm.cpp.s

CMakeFiles/mainm.dir/apps/mainm.cpp.o.requires:

.PHONY : CMakeFiles/mainm.dir/apps/mainm.cpp.o.requires

CMakeFiles/mainm.dir/apps/mainm.cpp.o.provides: CMakeFiles/mainm.dir/apps/mainm.cpp.o.requires
	$(MAKE) -f CMakeFiles/mainm.dir/build.make CMakeFiles/mainm.dir/apps/mainm.cpp.o.provides.build
.PHONY : CMakeFiles/mainm.dir/apps/mainm.cpp.o.provides

CMakeFiles/mainm.dir/apps/mainm.cpp.o.provides.build: CMakeFiles/mainm.dir/apps/mainm.cpp.o


# Object files for target mainm
mainm_OBJECTS = \
"CMakeFiles/mainm.dir/apps/mainm.cpp.o"

# External object files for target mainm
mainm_EXTERNAL_OBJECTS =

mainm: CMakeFiles/mainm.dir/apps/mainm.cpp.o
mainm: CMakeFiles/mainm.dir/build.make
mainm: CMakeFiles/mainm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mainm"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mainm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mainm.dir/build: mainm

.PHONY : CMakeFiles/mainm.dir/build

CMakeFiles/mainm.dir/requires: CMakeFiles/mainm.dir/apps/mainm.cpp.o.requires

.PHONY : CMakeFiles/mainm.dir/requires

CMakeFiles/mainm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mainm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mainm.dir/clean

CMakeFiles/mainm.dir/depend:
	cd "/home/ahmed/Big Project/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmed/Big Project" "/home/ahmed/Big Project" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build/CMakeFiles/mainm.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/mainm.dir/depend
