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
include CMakeFiles/test_sll.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_sll.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_sll.dir/flags.make

CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o: CMakeFiles/test_sll.dir/flags.make
CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o: ../apps/test_int_linkedlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o -c "/home/ahmed/Big Project/apps/test_int_linkedlist.cpp"

CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmed/Big Project/apps/test_int_linkedlist.cpp" > CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.i

CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmed/Big Project/apps/test_int_linkedlist.cpp" -o CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.s

CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o.requires:

.PHONY : CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o.requires

CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o.provides: CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_sll.dir/build.make CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o.provides.build
.PHONY : CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o.provides

CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o.provides.build: CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o


# Object files for target test_sll
test_sll_OBJECTS = \
"CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o"

# External object files for target test_sll
test_sll_EXTERNAL_OBJECTS =

test_sll: CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o
test_sll: CMakeFiles/test_sll.dir/build.make
test_sll: CMakeFiles/test_sll.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmed/Big Project/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_sll"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_sll.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_sll.dir/build: test_sll

.PHONY : CMakeFiles/test_sll.dir/build

CMakeFiles/test_sll.dir/requires: CMakeFiles/test_sll.dir/apps/test_int_linkedlist.cpp.o.requires

.PHONY : CMakeFiles/test_sll.dir/requires

CMakeFiles/test_sll.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_sll.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_sll.dir/clean

CMakeFiles/test_sll.dir/depend:
	cd "/home/ahmed/Big Project/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmed/Big Project" "/home/ahmed/Big Project" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build" "/home/ahmed/Big Project/build/CMakeFiles/test_sll.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/test_sll.dir/depend
