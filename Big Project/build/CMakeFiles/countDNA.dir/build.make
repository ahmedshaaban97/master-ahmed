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
include CMakeFiles/countDNA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/countDNA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/countDNA.dir/flags.make

CMakeFiles/countDNA.dir/apps/countDNA.cpp.o: CMakeFiles/countDNA.dir/flags.make
CMakeFiles/countDNA.dir/apps/countDNA.cpp.o: ../apps/countDNA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/countDNA.dir/apps/countDNA.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/countDNA.dir/apps/countDNA.cpp.o -c "/home/ahmed/Big Project/apps/countDNA.cpp"

CMakeFiles/countDNA.dir/apps/countDNA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/countDNA.dir/apps/countDNA.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmed/Big Project/apps/countDNA.cpp" > CMakeFiles/countDNA.dir/apps/countDNA.cpp.i

CMakeFiles/countDNA.dir/apps/countDNA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/countDNA.dir/apps/countDNA.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmed/Big Project/apps/countDNA.cpp" -o CMakeFiles/countDNA.dir/apps/countDNA.cpp.s

CMakeFiles/countDNA.dir/apps/countDNA.cpp.o.requires:

.PHONY : CMakeFiles/countDNA.dir/apps/countDNA.cpp.o.requires

CMakeFiles/countDNA.dir/apps/countDNA.cpp.o.provides: CMakeFiles/countDNA.dir/apps/countDNA.cpp.o.requires
	$(MAKE) -f CMakeFiles/countDNA.dir/build.make CMakeFiles/countDNA.dir/apps/countDNA.cpp.o.provides.build
.PHONY : CMakeFiles/countDNA.dir/apps/countDNA.cpp.o.provides

CMakeFiles/countDNA.dir/apps/countDNA.cpp.o.provides.build: CMakeFiles/countDNA.dir/apps/countDNA.cpp.o


# Object files for target countDNA
countDNA_OBJECTS = \
"CMakeFiles/countDNA.dir/apps/countDNA.cpp.o"

# External object files for target countDNA
countDNA_EXTERNAL_OBJECTS =

countDNA: CMakeFiles/countDNA.dir/apps/countDNA.cpp.o
countDNA: CMakeFiles/countDNA.dir/build.make
countDNA: CMakeFiles/countDNA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable countDNA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/countDNA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/countDNA.dir/build: countDNA

.PHONY : CMakeFiles/countDNA.dir/build

CMakeFiles/countDNA.dir/requires: CMakeFiles/countDNA.dir/apps/countDNA.cpp.o.requires

.PHONY : CMakeFiles/countDNA.dir/requires

CMakeFiles/countDNA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/countDNA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/countDNA.dir/clean

CMakeFiles/countDNA.dir/depend:
	cd "/home/ahmed/Big Project/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmed/Big Project" "/home/ahmed/Big Project" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build/CMakeFiles/countDNA.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/countDNA.dir/depend
