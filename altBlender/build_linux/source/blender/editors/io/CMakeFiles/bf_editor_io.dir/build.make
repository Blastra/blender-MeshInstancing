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
include source/blender/editors/io/CMakeFiles/bf_editor_io.dir/depend.make

# Include the progress variables for this target.
include source/blender/editors/io/CMakeFiles/bf_editor_io.dir/progress.make

# Include the compile flags for this target's objects.
include source/blender/editors/io/CMakeFiles/bf_editor_io.dir/flags.make

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/flags.make
source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o: /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io/io_collada.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/arad/gitProjects/blender/altBlender/build_linux/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_io.dir/io_collada.c.o   -c /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io/io_collada.c

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bf_editor_io.dir/io_collada.c.i"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io/io_collada.c > CMakeFiles/bf_editor_io.dir/io_collada.c.i

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bf_editor_io.dir/io_collada.c.s"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io/io_collada.c -o CMakeFiles/bf_editor_io.dir/io_collada.c.s

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o.requires:
.PHONY : source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o.requires

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o.provides: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o.requires
	$(MAKE) -f source/blender/editors/io/CMakeFiles/bf_editor_io.dir/build.make source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o.provides.build
.PHONY : source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o.provides

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o.provides.build: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/flags.make
source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o: /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io/io_ops.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/arad/gitProjects/blender/altBlender/build_linux/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_io.dir/io_ops.c.o   -c /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io/io_ops.c

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bf_editor_io.dir/io_ops.c.i"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io/io_ops.c > CMakeFiles/bf_editor_io.dir/io_ops.c.i

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bf_editor_io.dir/io_ops.c.s"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io/io_ops.c -o CMakeFiles/bf_editor_io.dir/io_ops.c.s

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o.requires:
.PHONY : source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o.requires

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o.provides: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o.requires
	$(MAKE) -f source/blender/editors/io/CMakeFiles/bf_editor_io.dir/build.make source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o.provides.build
.PHONY : source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o.provides

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o.provides.build: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o

# Object files for target bf_editor_io
bf_editor_io_OBJECTS = \
"CMakeFiles/bf_editor_io.dir/io_collada.c.o" \
"CMakeFiles/bf_editor_io.dir/io_ops.c.o"

# External object files for target bf_editor_io
bf_editor_io_EXTERNAL_OBJECTS =

lib/libbf_editor_io.a: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o
lib/libbf_editor_io.a: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o
lib/libbf_editor_io.a: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/build.make
lib/libbf_editor_io.a: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C static library ../../../../lib/libbf_editor_io.a"
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_io.dir/cmake_clean_target.cmake
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_editor_io.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/blender/editors/io/CMakeFiles/bf_editor_io.dir/build: lib/libbf_editor_io.a
.PHONY : source/blender/editors/io/CMakeFiles/bf_editor_io.dir/build

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/requires: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_collada.c.o.requires
source/blender/editors/io/CMakeFiles/bf_editor_io.dir/requires: source/blender/editors/io/CMakeFiles/bf_editor_io.dir/io_ops.c.o.requires
.PHONY : source/blender/editors/io/CMakeFiles/bf_editor_io.dir/requires

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/clean:
	cd /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_io.dir/cmake_clean.cmake
.PHONY : source/blender/editors/io/CMakeFiles/bf_editor_io.dir/clean

source/blender/editors/io/CMakeFiles/bf_editor_io.dir/depend:
	cd /home/arad/gitProjects/blender/altBlender/build_linux && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arad/gitProjects/blender/altBlender/blender /home/arad/gitProjects/blender/altBlender/blender/source/blender/editors/io /home/arad/gitProjects/blender/altBlender/build_linux /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io /home/arad/gitProjects/blender/altBlender/build_linux/source/blender/editors/io/CMakeFiles/bf_editor_io.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/blender/editors/io/CMakeFiles/bf_editor_io.dir/depend

