# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\gal\Desktop\graphics\assignment2\BasicEngine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries

# Include any dependencies generated for this target.
include res/includes/glfw/examples/CMakeFiles/particles.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include res/includes/glfw/examples/CMakeFiles/particles.dir/compiler_depend.make

# Include the progress variables for this target.
include res/includes/glfw/examples/CMakeFiles/particles.dir/progress.make

# Include the compile flags for this target's objects.
include res/includes/glfw/examples/CMakeFiles/particles.dir/flags.make

res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/flags.make
res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/includes_C.rsp
res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.obj: C:/Users/gal/Desktop/graphics/assignment2/BasicEngine/res/includes/glfw/examples/particles.c
res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.obj"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.obj -MF CMakeFiles\particles.dir\particles.c.obj.d -o CMakeFiles\particles.dir\particles.c.obj -c C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\examples\particles.c

res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/particles.dir/particles.c.i"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\examples\particles.c > CMakeFiles\particles.dir\particles.c.i

res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/particles.dir/particles.c.s"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\examples\particles.c -o CMakeFiles\particles.dir\particles.c.s

res/includes/glfw/examples/CMakeFiles/particles.dir/glfw.rc.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/flags.make
res/includes/glfw/examples/CMakeFiles/particles.dir/glfw.rc.obj: C:/Users/gal/Desktop/graphics/assignment2/BasicEngine/res/includes/glfw/examples/glfw.rc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building RC object res/includes/glfw/examples/CMakeFiles/particles.dir/glfw.rc.obj"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\windres.exe -O coff $(RC_DEFINES) $(RC_INCLUDES) $(RC_FLAGS) C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\examples\glfw.rc CMakeFiles\particles.dir\glfw.rc.obj

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/flags.make
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/includes_C.rsp
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.obj: C:/Users/gal/Desktop/graphics/assignment2/BasicEngine/res/includes/glfw/deps/tinycthread.c
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.obj"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.obj -MF CMakeFiles\particles.dir\__\deps\tinycthread.c.obj.d -o CMakeFiles\particles.dir\__\deps\tinycthread.c.obj -c C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\tinycthread.c

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/particles.dir/__/deps/tinycthread.c.i"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\tinycthread.c > CMakeFiles\particles.dir\__\deps\tinycthread.c.i

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/particles.dir/__/deps/tinycthread.c.s"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\tinycthread.c -o CMakeFiles\particles.dir\__\deps\tinycthread.c.s

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/flags.make
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/includes_C.rsp
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.obj: C:/Users/gal/Desktop/graphics/assignment2/BasicEngine/res/includes/glfw/deps/getopt.c
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.obj"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.obj -MF CMakeFiles\particles.dir\__\deps\getopt.c.obj.d -o CMakeFiles\particles.dir\__\deps\getopt.c.obj -c C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\getopt.c

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/particles.dir/__/deps/getopt.c.i"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\getopt.c > CMakeFiles\particles.dir\__\deps\getopt.c.i

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/particles.dir/__/deps/getopt.c.s"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\getopt.c -o CMakeFiles\particles.dir\__\deps\getopt.c.s

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/flags.make
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/includes_C.rsp
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.obj: C:/Users/gal/Desktop/graphics/assignment2/BasicEngine/res/includes/glfw/deps/glad_gl.c
res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.obj: res/includes/glfw/examples/CMakeFiles/particles.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.obj"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.obj -MF CMakeFiles\particles.dir\__\deps\glad_gl.c.obj.d -o CMakeFiles\particles.dir\__\deps\glad_gl.c.obj -c C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\glad_gl.c

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/particles.dir/__/deps/glad_gl.c.i"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\glad_gl.c > CMakeFiles\particles.dir\__\deps\glad_gl.c.i

res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/particles.dir/__/deps/glad_gl.c.s"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\deps\glad_gl.c -o CMakeFiles\particles.dir\__\deps\glad_gl.c.s

# Object files for target particles
particles_OBJECTS = \
"CMakeFiles/particles.dir/particles.c.obj" \
"CMakeFiles/particles.dir/glfw.rc.obj" \
"CMakeFiles/particles.dir/__/deps/tinycthread.c.obj" \
"CMakeFiles/particles.dir/__/deps/getopt.c.obj" \
"CMakeFiles/particles.dir/__/deps/glad_gl.c.obj"

# External object files for target particles
particles_EXTERNAL_OBJECTS =

res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/particles.c.obj
res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/glfw.rc.obj
res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/tinycthread.c.obj
res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/getopt.c.obj
res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/__/deps/glad_gl.c.obj
res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/build.make
res/includes/glfw/examples/particles.exe: res/includes/glfw/src/libglfw3.a
res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/linkLibs.rsp
res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/objects1
res/includes/glfw/examples/particles.exe: res/includes/glfw/examples/CMakeFiles/particles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable particles.exe"
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\particles.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
res/includes/glfw/examples/CMakeFiles/particles.dir/build: res/includes/glfw/examples/particles.exe
.PHONY : res/includes/glfw/examples/CMakeFiles/particles.dir/build

res/includes/glfw/examples/CMakeFiles/particles.dir/clean:
	cd /d C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples && $(CMAKE_COMMAND) -P CMakeFiles\particles.dir\cmake_clean.cmake
.PHONY : res/includes/glfw/examples/CMakeFiles/particles.dir/clean

res/includes/glfw/examples/CMakeFiles/particles.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\gal\Desktop\graphics\assignment2\BasicEngine C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\res\includes\glfw\examples C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples C:\Users\gal\Desktop\graphics\assignment2\BasicEngine\binaries\res\includes\glfw\examples\CMakeFiles\particles.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : res/includes/glfw/examples/CMakeFiles/particles.dir/depend

