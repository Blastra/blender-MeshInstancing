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
include source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/depend.make

# Include the progress variables for this target.
include source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/progress.make

# Include the compile flags for this target's objects.
include source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/flags.make

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o: source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/flags.make
source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o: /home/arad/gitProjects/blender/altBlender/blender/source/blender/imbuf/intern/oiio/openimageio_api.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/arad/gitProjects/blender/altBlender/build_linux/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o -c /home/arad/gitProjects/blender/altBlender/blender/source/blender/imbuf/intern/oiio/openimageio_api.cpp

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.i"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/arad/gitProjects/blender/altBlender/blender/source/blender/imbuf/intern/oiio/openimageio_api.cpp > CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.i

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.s"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/arad/gitProjects/blender/altBlender/blender/source/blender/imbuf/intern/oiio/openimageio_api.cpp -o CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.s

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o.requires:
.PHONY : source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o.requires

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o.provides: source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o.requires
	$(MAKE) -f source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/build.make source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o.provides.build
.PHONY : source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o.provides

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o.provides.build: source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o

# Object files for target bf_imbuf_openimageio
bf_imbuf_openimageio_OBJECTS = \
"CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o"

# External object files for target bf_imbuf_openimageio
bf_imbuf_openimageio_EXTERNAL_OBJECTS =

lib/libbf_imbuf_openimageio.a: source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o
lib/libbf_imbuf_openimageio.a: source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/build.make
lib/libbf_imbuf_openimageio.a: source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../../../../lib/libbf_imbuf_openimageio.a"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio && $(CMAKE_COMMAND) -P CMakeFiles/bf_imbuf_openimageio.dir/cmake_clean_target.cmake
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_imbuf_openimageio.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/build: lib/libbf_imbuf_openimageio.a
.PHONY : source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/build

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/requires: source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/openimageio_api.cpp.o.requires
.PHONY : source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/requires

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/clean:
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio && $(CMAKE_COMMAND) -P CMakeFiles/bf_imbuf_openimageio.dir/cmake_clean.cmake
.PHONY : source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/clean

source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/depend:
	cd /home/arad/gitProjects/blender/altBlender/build_linux && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arad/gitProjects/blender/altBlender/blender /home/arad/gitProjects/blender/altBlender/blender/source/blender/imbuf/intern/oiio /home/arad/gitProjects/blender/altBlender/build_linux /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/blender/imbuf/intern/oiio/CMakeFiles/bf_imbuf_openimageio.dir/depend

