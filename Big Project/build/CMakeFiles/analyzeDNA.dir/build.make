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
include CMakeFiles/analyzeDNA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/analyzeDNA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/analyzeDNA.dir/flags.make

CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o: CMakeFiles/analyzeDNA.dir/flags.make
CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o: ../apps/analyzeDNA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o -c "/home/ahmed/Big Project/apps/analyzeDNA.cpp"

CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmed/Big Project/apps/analyzeDNA.cpp" > CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.i

CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmed/Big Project/apps/analyzeDNA.cpp" -o CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.s

CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o.requires:

.PHONY : CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o.requires

CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o.provides: CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o.requires
	$(MAKE) -f CMakeFiles/analyzeDNA.dir/build.make CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o.provides.build
.PHONY : CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o.provides

CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o.provides.build: CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o


# Object files for target analyzeDNA
analyzeDNA_OBJECTS = \
"CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o"

# External object files for target analyzeDNA
analyzeDNA_EXTERNAL_OBJECTS =

analyzeDNA: CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o
analyzeDNA: CMakeFiles/analyzeDNA.dir/build.make
analyzeDNA: CMakeFiles/analyzeDNA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable analyzeDNA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/analyzeDNA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/analyzeDNA.dir/build: analyzeDNA

.PHONY : CMakeFiles/analyzeDNA.dir/build

CMakeFiles/analyzeDNA.dir/requires: CMakeFiles/analyzeDNA.dir/apps/analyzeDNA.cpp.o.requires

.PHONY : CMakeFiles/analyzeDNA.dir/requires

CMakeFiles/analyzeDNA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/analyzeDNA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/analyzeDNA.dir/clean

CMakeFiles/analyzeDNA.dir/depend:
	cd "/home/ahmed/Big Project/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmed/Big Project" "/home/ahmed/Big Project" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build/CMakeFiles/analyzeDNA.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/analyzeDNA.dir/depend

