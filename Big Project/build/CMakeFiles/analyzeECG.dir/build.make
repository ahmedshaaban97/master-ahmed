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
include CMakeFiles/analyzeECG.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/analyzeECG.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/analyzeECG.dir/flags.make

CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o: CMakeFiles/analyzeECG.dir/flags.make
CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o: ../apps/analyzeECG.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o -c "/home/ahmed/Big Project/apps/analyzeECG.cpp"

CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmed/Big Project/apps/analyzeECG.cpp" > CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.i

CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmed/Big Project/apps/analyzeECG.cpp" -o CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.s

CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o.requires:

.PHONY : CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o.requires

CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o.provides: CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o.requires
	$(MAKE) -f CMakeFiles/analyzeECG.dir/build.make CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o.provides.build
.PHONY : CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o.provides

CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o.provides.build: CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o


# Object files for target analyzeECG
analyzeECG_OBJECTS = \
"CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o"

# External object files for target analyzeECG
analyzeECG_EXTERNAL_OBJECTS =

analyzeECG: CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o
analyzeECG: CMakeFiles/analyzeECG.dir/build.make
analyzeECG: CMakeFiles/analyzeECG.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable analyzeECG"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/analyzeECG.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/analyzeECG.dir/build: analyzeECG

.PHONY : CMakeFiles/analyzeECG.dir/build

CMakeFiles/analyzeECG.dir/requires: CMakeFiles/analyzeECG.dir/apps/analyzeECG.cpp.o.requires

.PHONY : CMakeFiles/analyzeECG.dir/requires

CMakeFiles/analyzeECG.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/analyzeECG.dir/cmake_clean.cmake
.PHONY : CMakeFiles/analyzeECG.dir/clean

CMakeFiles/analyzeECG.dir/depend:
	cd "/home/ahmed/Big Project/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmed/Big Project" "/home/ahmed/Big Project" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build/CMakeFiles/analyzeECG.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/analyzeECG.dir/depend

