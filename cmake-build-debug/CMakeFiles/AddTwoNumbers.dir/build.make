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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/snnafi/Desktop/CLionProjects/ProblemsSolving

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/snnafi/Desktop/CLionProjects/ProblemsSolving/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AddTwoNumbers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AddTwoNumbers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AddTwoNumbers.dir/flags.make

CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.o: CMakeFiles/AddTwoNumbers.dir/flags.make
CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.o: ../LeetCode/AddTwoNumbers/AddTwoNumbers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/snnafi/Desktop/CLionProjects/ProblemsSolving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.o -c /Users/snnafi/Desktop/CLionProjects/ProblemsSolving/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp

CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/snnafi/Desktop/CLionProjects/ProblemsSolving/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp > CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.i

CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/snnafi/Desktop/CLionProjects/ProblemsSolving/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp -o CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.s

# Object files for target AddTwoNumbers
AddTwoNumbers_OBJECTS = \
"CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.o"

# External object files for target AddTwoNumbers
AddTwoNumbers_EXTERNAL_OBJECTS =

AddTwoNumbers: CMakeFiles/AddTwoNumbers.dir/LeetCode/AddTwoNumbers/AddTwoNumbers.cpp.o
AddTwoNumbers: CMakeFiles/AddTwoNumbers.dir/build.make
AddTwoNumbers: CMakeFiles/AddTwoNumbers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/snnafi/Desktop/CLionProjects/ProblemsSolving/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AddTwoNumbers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AddTwoNumbers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AddTwoNumbers.dir/build: AddTwoNumbers

.PHONY : CMakeFiles/AddTwoNumbers.dir/build

CMakeFiles/AddTwoNumbers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AddTwoNumbers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AddTwoNumbers.dir/clean

CMakeFiles/AddTwoNumbers.dir/depend:
	cd /Users/snnafi/Desktop/CLionProjects/ProblemsSolving/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/snnafi/Desktop/CLionProjects/ProblemsSolving /Users/snnafi/Desktop/CLionProjects/ProblemsSolving /Users/snnafi/Desktop/CLionProjects/ProblemsSolving/cmake-build-debug /Users/snnafi/Desktop/CLionProjects/ProblemsSolving/cmake-build-debug /Users/snnafi/Desktop/CLionProjects/ProblemsSolving/cmake-build-debug/CMakeFiles/AddTwoNumbers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AddTwoNumbers.dir/depend

