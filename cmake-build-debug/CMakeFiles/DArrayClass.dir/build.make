# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "/Users/rodrigoasbun/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/rodrigoasbun/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rodrigoasbun/CLionProjects/DArrayClass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rodrigoasbun/CLionProjects/DArrayClass/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DArrayClass.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/DArrayClass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DArrayClass.dir/flags.make

CMakeFiles/DArrayClass.dir/main.cpp.o: CMakeFiles/DArrayClass.dir/flags.make
CMakeFiles/DArrayClass.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rodrigoasbun/CLionProjects/DArrayClass/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DArrayClass.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DArrayClass.dir/main.cpp.o -c /Users/rodrigoasbun/CLionProjects/DArrayClass/main.cpp

CMakeFiles/DArrayClass.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DArrayClass.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rodrigoasbun/CLionProjects/DArrayClass/main.cpp > CMakeFiles/DArrayClass.dir/main.cpp.i

CMakeFiles/DArrayClass.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DArrayClass.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rodrigoasbun/CLionProjects/DArrayClass/main.cpp -o CMakeFiles/DArrayClass.dir/main.cpp.s

# Object files for target DArrayClass
DArrayClass_OBJECTS = \
"CMakeFiles/DArrayClass.dir/main.cpp.o"

# External object files for target DArrayClass
DArrayClass_EXTERNAL_OBJECTS =

DArrayClass: CMakeFiles/DArrayClass.dir/main.cpp.o
DArrayClass: CMakeFiles/DArrayClass.dir/build.make
DArrayClass: CMakeFiles/DArrayClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rodrigoasbun/CLionProjects/DArrayClass/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DArrayClass"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DArrayClass.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DArrayClass.dir/build: DArrayClass
.PHONY : CMakeFiles/DArrayClass.dir/build

CMakeFiles/DArrayClass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DArrayClass.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DArrayClass.dir/clean

CMakeFiles/DArrayClass.dir/depend:
	cd /Users/rodrigoasbun/CLionProjects/DArrayClass/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rodrigoasbun/CLionProjects/DArrayClass /Users/rodrigoasbun/CLionProjects/DArrayClass /Users/rodrigoasbun/CLionProjects/DArrayClass/cmake-build-debug /Users/rodrigoasbun/CLionProjects/DArrayClass/cmake-build-debug /Users/rodrigoasbun/CLionProjects/DArrayClass/cmake-build-debug/CMakeFiles/DArrayClass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DArrayClass.dir/depend

