# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/arad/gitProjects/blender/altBlender/blender

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arad/gitProjects/blender/altBlender/build_linux

# Include any dependencies generated for this target.
include intern/locale/CMakeFiles/bf_intern_locale.dir/depend.make

# Include the progress variables for this target.
include intern/locale/CMakeFiles/bf_intern_locale.dir/progress.make

# Include the compile flags for this target's objects.
include intern/locale/CMakeFiles/bf_intern_locale.dir/flags.make

intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o: intern/locale/CMakeFiles/bf_intern_locale.dir/flags.make
intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o: /home/arad/gitProjects/blender/altBlender/blender/intern/locale/boost_locale_wrapper.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/arad/gitProjects/blender/altBlender/build_linux/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/intern/locale && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o -c /home/arad/gitProjects/blender/altBlender/blender/intern/locale/boost_locale_wrapper.cpp

intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.i"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/intern/locale && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/arad/gitProjects/blender/altBlender/blender/intern/locale/boost_locale_wrapper.cpp > CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.i

intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.s"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/intern/locale && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/arad/gitProjects/blender/altBlender/blender/intern/locale/boost_locale_wrapper.cpp -o CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.s

intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o.requires:
.PHONY : intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o.requires

intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o.provides: intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o.requires
	$(MAKE) -f intern/locale/CMakeFiles/bf_intern_locale.dir/build.make intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o.provides.build
.PHONY : intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o.provides

intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o.provides.build: intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o

# Object files for target bf_intern_locale
bf_intern_locale_OBJECTS = \
"CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o"

# External object files for target bf_intern_locale
bf_intern_locale_EXTERNAL_OBJECTS =

lib/libbf_intern_locale.a: intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o
lib/libbf_intern_locale.a: intern/locale/CMakeFiles/bf_intern_locale.dir/build.make
lib/libbf_intern_locale.a: intern/locale/CMakeFiles/bf_intern_locale.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../lib/libbf_intern_locale.a"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/intern/locale && $(CMAKE_COMMAND) -P CMakeFiles/bf_intern_locale.dir/cmake_clean_target.cmake
	cd /home/arad/gitProjects/blender/altBlender/build_linux/intern/locale && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_intern_locale.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
intern/locale/CMakeFiles/bf_intern_locale.dir/build: lib/libbf_intern_locale.a
.PHONY : intern/locale/CMakeFiles/bf_intern_locale.dir/build

intern/locale/CMakeFiles/bf_intern_locale.dir/requires: intern/locale/CMakeFiles/bf_intern_locale.dir/boost_locale_wrapper.cpp.o.requires
.PHONY : intern/locale/CMakeFiles/bf_intern_locale.dir/requires

intern/locale/CMakeFiles/bf_intern_locale.dir/clean:
	cd /home/arad/gitProjects/blender/altBlender/build_linux/intern/locale && $(CMAKE_COMMAND) -P CMakeFiles/bf_intern_locale.dir/cmake_clean.cmake
.PHONY : intern/locale/CMakeFiles/bf_intern_locale.dir/clean

intern/locale/CMakeFiles/bf_intern_locale.dir/depend:
	cd /home/arad/gitProjects/blender/altBlender/build_linux && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arad/gitProjects/blender/altBlender/blender /home/arad/gitProjects/blender/altBlender/blender/intern/locale /home/arad/gitProjects/blender/altBlender/build_linux /home/arad/gitProjects/blender/altBlender/build_linux/intern/locale /home/arad/gitProjects/blender/altBlender/build_linux/intern/locale/CMakeFiles/bf_intern_locale.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : intern/locale/CMakeFiles/bf_intern_locale.dir/depend

