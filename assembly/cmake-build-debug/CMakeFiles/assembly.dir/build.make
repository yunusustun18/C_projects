# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /opt/clion/projects/assembly

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/clion/projects/assembly/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/assembly.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assembly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assembly.dir/flags.make

CMakeFiles/assembly.dir/main.cpp.o: CMakeFiles/assembly.dir/flags.make
CMakeFiles/assembly.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/clion/projects/assembly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assembly.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assembly.dir/main.cpp.o -c /opt/clion/projects/assembly/main.cpp

CMakeFiles/assembly.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assembly.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/clion/projects/assembly/main.cpp > CMakeFiles/assembly.dir/main.cpp.i

CMakeFiles/assembly.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assembly.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/clion/projects/assembly/main.cpp -o CMakeFiles/assembly.dir/main.cpp.s

# Object files for target assembly
assembly_OBJECTS = \
"CMakeFiles/assembly.dir/main.cpp.o"

# External object files for target assembly
assembly_EXTERNAL_OBJECTS =

assembly: CMakeFiles/assembly.dir/main.cpp.o
assembly: CMakeFiles/assembly.dir/build.make
assembly: CMakeFiles/assembly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/clion/projects/assembly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable assembly"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assembly.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assembly.dir/build: assembly

.PHONY : CMakeFiles/assembly.dir/build

CMakeFiles/assembly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assembly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assembly.dir/clean

CMakeFiles/assembly.dir/depend:
	cd /opt/clion/projects/assembly/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/clion/projects/assembly /opt/clion/projects/assembly /opt/clion/projects/assembly/cmake-build-debug /opt/clion/projects/assembly/cmake-build-debug /opt/clion/projects/assembly/cmake-build-debug/CMakeFiles/assembly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assembly.dir/depend

