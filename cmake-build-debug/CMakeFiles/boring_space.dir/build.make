# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Software Engeniering\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Software Engeniering\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Software Engeniering\boring_space"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Software Engeniering\boring_space\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/boring_space.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/boring_space.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/boring_space.dir/flags.make

CMakeFiles/boring_space.dir/main.cpp.obj: CMakeFiles/boring_space.dir/flags.make
CMakeFiles/boring_space.dir/main.cpp.obj: CMakeFiles/boring_space.dir/includes_CXX.rsp
CMakeFiles/boring_space.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/boring_space.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\boring_space.dir\main.cpp.obj -c "D:\Software Engeniering\boring_space\main.cpp"

CMakeFiles/boring_space.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring_space.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Engeniering\boring_space\main.cpp" > CMakeFiles\boring_space.dir\main.cpp.i

CMakeFiles/boring_space.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring_space.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Engeniering\boring_space\main.cpp" -o CMakeFiles\boring_space.dir\main.cpp.s

CMakeFiles/boring_space.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/boring_space.dir/main.cpp.obj.requires

CMakeFiles/boring_space.dir/main.cpp.obj.provides: CMakeFiles/boring_space.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\boring_space.dir\build.make CMakeFiles/boring_space.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/boring_space.dir/main.cpp.obj.provides

CMakeFiles/boring_space.dir/main.cpp.obj.provides.build: CMakeFiles/boring_space.dir/main.cpp.obj


CMakeFiles/boring_space.dir/src/utilities.cpp.obj: CMakeFiles/boring_space.dir/flags.make
CMakeFiles/boring_space.dir/src/utilities.cpp.obj: CMakeFiles/boring_space.dir/includes_CXX.rsp
CMakeFiles/boring_space.dir/src/utilities.cpp.obj: ../src/utilities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/boring_space.dir/src/utilities.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\boring_space.dir\src\utilities.cpp.obj -c "D:\Software Engeniering\boring_space\src\utilities.cpp"

CMakeFiles/boring_space.dir/src/utilities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring_space.dir/src/utilities.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Engeniering\boring_space\src\utilities.cpp" > CMakeFiles\boring_space.dir\src\utilities.cpp.i

CMakeFiles/boring_space.dir/src/utilities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring_space.dir/src/utilities.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Engeniering\boring_space\src\utilities.cpp" -o CMakeFiles\boring_space.dir\src\utilities.cpp.s

CMakeFiles/boring_space.dir/src/utilities.cpp.obj.requires:

.PHONY : CMakeFiles/boring_space.dir/src/utilities.cpp.obj.requires

CMakeFiles/boring_space.dir/src/utilities.cpp.obj.provides: CMakeFiles/boring_space.dir/src/utilities.cpp.obj.requires
	$(MAKE) -f CMakeFiles\boring_space.dir\build.make CMakeFiles/boring_space.dir/src/utilities.cpp.obj.provides.build
.PHONY : CMakeFiles/boring_space.dir/src/utilities.cpp.obj.provides

CMakeFiles/boring_space.dir/src/utilities.cpp.obj.provides.build: CMakeFiles/boring_space.dir/src/utilities.cpp.obj


CMakeFiles/boring_space.dir/src/Point2D.cpp.obj: CMakeFiles/boring_space.dir/flags.make
CMakeFiles/boring_space.dir/src/Point2D.cpp.obj: CMakeFiles/boring_space.dir/includes_CXX.rsp
CMakeFiles/boring_space.dir/src/Point2D.cpp.obj: ../src/Point2D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/boring_space.dir/src/Point2D.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\boring_space.dir\src\Point2D.cpp.obj -c "D:\Software Engeniering\boring_space\src\Point2D.cpp"

CMakeFiles/boring_space.dir/src/Point2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring_space.dir/src/Point2D.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Engeniering\boring_space\src\Point2D.cpp" > CMakeFiles\boring_space.dir\src\Point2D.cpp.i

CMakeFiles/boring_space.dir/src/Point2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring_space.dir/src/Point2D.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Engeniering\boring_space\src\Point2D.cpp" -o CMakeFiles\boring_space.dir\src\Point2D.cpp.s

CMakeFiles/boring_space.dir/src/Point2D.cpp.obj.requires:

.PHONY : CMakeFiles/boring_space.dir/src/Point2D.cpp.obj.requires

CMakeFiles/boring_space.dir/src/Point2D.cpp.obj.provides: CMakeFiles/boring_space.dir/src/Point2D.cpp.obj.requires
	$(MAKE) -f CMakeFiles\boring_space.dir\build.make CMakeFiles/boring_space.dir/src/Point2D.cpp.obj.provides.build
.PHONY : CMakeFiles/boring_space.dir/src/Point2D.cpp.obj.provides

CMakeFiles/boring_space.dir/src/Point2D.cpp.obj.provides.build: CMakeFiles/boring_space.dir/src/Point2D.cpp.obj


CMakeFiles/boring_space.dir/src/Entity.cpp.obj: CMakeFiles/boring_space.dir/flags.make
CMakeFiles/boring_space.dir/src/Entity.cpp.obj: CMakeFiles/boring_space.dir/includes_CXX.rsp
CMakeFiles/boring_space.dir/src/Entity.cpp.obj: ../src/Entity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/boring_space.dir/src/Entity.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\boring_space.dir\src\Entity.cpp.obj -c "D:\Software Engeniering\boring_space\src\Entity.cpp"

CMakeFiles/boring_space.dir/src/Entity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring_space.dir/src/Entity.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Engeniering\boring_space\src\Entity.cpp" > CMakeFiles\boring_space.dir\src\Entity.cpp.i

CMakeFiles/boring_space.dir/src/Entity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring_space.dir/src/Entity.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Engeniering\boring_space\src\Entity.cpp" -o CMakeFiles\boring_space.dir\src\Entity.cpp.s

CMakeFiles/boring_space.dir/src/Entity.cpp.obj.requires:

.PHONY : CMakeFiles/boring_space.dir/src/Entity.cpp.obj.requires

CMakeFiles/boring_space.dir/src/Entity.cpp.obj.provides: CMakeFiles/boring_space.dir/src/Entity.cpp.obj.requires
	$(MAKE) -f CMakeFiles\boring_space.dir\build.make CMakeFiles/boring_space.dir/src/Entity.cpp.obj.provides.build
.PHONY : CMakeFiles/boring_space.dir/src/Entity.cpp.obj.provides

CMakeFiles/boring_space.dir/src/Entity.cpp.obj.provides.build: CMakeFiles/boring_space.dir/src/Entity.cpp.obj


CMakeFiles/boring_space.dir/src/Player.cpp.obj: CMakeFiles/boring_space.dir/flags.make
CMakeFiles/boring_space.dir/src/Player.cpp.obj: CMakeFiles/boring_space.dir/includes_CXX.rsp
CMakeFiles/boring_space.dir/src/Player.cpp.obj: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/boring_space.dir/src/Player.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\boring_space.dir\src\Player.cpp.obj -c "D:\Software Engeniering\boring_space\src\Player.cpp"

CMakeFiles/boring_space.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring_space.dir/src/Player.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Engeniering\boring_space\src\Player.cpp" > CMakeFiles\boring_space.dir\src\Player.cpp.i

CMakeFiles/boring_space.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring_space.dir/src/Player.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Engeniering\boring_space\src\Player.cpp" -o CMakeFiles\boring_space.dir\src\Player.cpp.s

CMakeFiles/boring_space.dir/src/Player.cpp.obj.requires:

.PHONY : CMakeFiles/boring_space.dir/src/Player.cpp.obj.requires

CMakeFiles/boring_space.dir/src/Player.cpp.obj.provides: CMakeFiles/boring_space.dir/src/Player.cpp.obj.requires
	$(MAKE) -f CMakeFiles\boring_space.dir\build.make CMakeFiles/boring_space.dir/src/Player.cpp.obj.provides.build
.PHONY : CMakeFiles/boring_space.dir/src/Player.cpp.obj.provides

CMakeFiles/boring_space.dir/src/Player.cpp.obj.provides.build: CMakeFiles/boring_space.dir/src/Player.cpp.obj


CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj: CMakeFiles/boring_space.dir/flags.make
CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj: CMakeFiles/boring_space.dir/includes_CXX.rsp
CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj: ../src/Asteroid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\boring_space.dir\src\Asteroid.cpp.obj -c "D:\Software Engeniering\boring_space\src\Asteroid.cpp"

CMakeFiles/boring_space.dir/src/Asteroid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring_space.dir/src/Asteroid.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Engeniering\boring_space\src\Asteroid.cpp" > CMakeFiles\boring_space.dir\src\Asteroid.cpp.i

CMakeFiles/boring_space.dir/src/Asteroid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring_space.dir/src/Asteroid.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Engeniering\boring_space\src\Asteroid.cpp" -o CMakeFiles\boring_space.dir\src\Asteroid.cpp.s

CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj.requires:

.PHONY : CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj.requires

CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj.provides: CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj.requires
	$(MAKE) -f CMakeFiles\boring_space.dir\build.make CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj.provides.build
.PHONY : CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj.provides

CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj.provides.build: CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj


CMakeFiles/boring_space.dir/src/Particle.cpp.obj: CMakeFiles/boring_space.dir/flags.make
CMakeFiles/boring_space.dir/src/Particle.cpp.obj: CMakeFiles/boring_space.dir/includes_CXX.rsp
CMakeFiles/boring_space.dir/src/Particle.cpp.obj: ../src/Particle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/boring_space.dir/src/Particle.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\boring_space.dir\src\Particle.cpp.obj -c "D:\Software Engeniering\boring_space\src\Particle.cpp"

CMakeFiles/boring_space.dir/src/Particle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring_space.dir/src/Particle.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Engeniering\boring_space\src\Particle.cpp" > CMakeFiles\boring_space.dir\src\Particle.cpp.i

CMakeFiles/boring_space.dir/src/Particle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring_space.dir/src/Particle.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Engeniering\boring_space\src\Particle.cpp" -o CMakeFiles\boring_space.dir\src\Particle.cpp.s

CMakeFiles/boring_space.dir/src/Particle.cpp.obj.requires:

.PHONY : CMakeFiles/boring_space.dir/src/Particle.cpp.obj.requires

CMakeFiles/boring_space.dir/src/Particle.cpp.obj.provides: CMakeFiles/boring_space.dir/src/Particle.cpp.obj.requires
	$(MAKE) -f CMakeFiles\boring_space.dir\build.make CMakeFiles/boring_space.dir/src/Particle.cpp.obj.provides.build
.PHONY : CMakeFiles/boring_space.dir/src/Particle.cpp.obj.provides

CMakeFiles/boring_space.dir/src/Particle.cpp.obj.provides.build: CMakeFiles/boring_space.dir/src/Particle.cpp.obj


CMakeFiles/boring_space.dir/src/Timer.cpp.obj: CMakeFiles/boring_space.dir/flags.make
CMakeFiles/boring_space.dir/src/Timer.cpp.obj: CMakeFiles/boring_space.dir/includes_CXX.rsp
CMakeFiles/boring_space.dir/src/Timer.cpp.obj: ../src/Timer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/boring_space.dir/src/Timer.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\boring_space.dir\src\Timer.cpp.obj -c "D:\Software Engeniering\boring_space\src\Timer.cpp"

CMakeFiles/boring_space.dir/src/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boring_space.dir/src/Timer.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Software Engeniering\boring_space\src\Timer.cpp" > CMakeFiles\boring_space.dir\src\Timer.cpp.i

CMakeFiles/boring_space.dir/src/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boring_space.dir/src/Timer.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-W\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Software Engeniering\boring_space\src\Timer.cpp" -o CMakeFiles\boring_space.dir\src\Timer.cpp.s

CMakeFiles/boring_space.dir/src/Timer.cpp.obj.requires:

.PHONY : CMakeFiles/boring_space.dir/src/Timer.cpp.obj.requires

CMakeFiles/boring_space.dir/src/Timer.cpp.obj.provides: CMakeFiles/boring_space.dir/src/Timer.cpp.obj.requires
	$(MAKE) -f CMakeFiles\boring_space.dir\build.make CMakeFiles/boring_space.dir/src/Timer.cpp.obj.provides.build
.PHONY : CMakeFiles/boring_space.dir/src/Timer.cpp.obj.provides

CMakeFiles/boring_space.dir/src/Timer.cpp.obj.provides.build: CMakeFiles/boring_space.dir/src/Timer.cpp.obj


# Object files for target boring_space
boring_space_OBJECTS = \
"CMakeFiles/boring_space.dir/main.cpp.obj" \
"CMakeFiles/boring_space.dir/src/utilities.cpp.obj" \
"CMakeFiles/boring_space.dir/src/Point2D.cpp.obj" \
"CMakeFiles/boring_space.dir/src/Entity.cpp.obj" \
"CMakeFiles/boring_space.dir/src/Player.cpp.obj" \
"CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj" \
"CMakeFiles/boring_space.dir/src/Particle.cpp.obj" \
"CMakeFiles/boring_space.dir/src/Timer.cpp.obj"

# External object files for target boring_space
boring_space_EXTERNAL_OBJECTS =

boring_space.exe: CMakeFiles/boring_space.dir/main.cpp.obj
boring_space.exe: CMakeFiles/boring_space.dir/src/utilities.cpp.obj
boring_space.exe: CMakeFiles/boring_space.dir/src/Point2D.cpp.obj
boring_space.exe: CMakeFiles/boring_space.dir/src/Entity.cpp.obj
boring_space.exe: CMakeFiles/boring_space.dir/src/Player.cpp.obj
boring_space.exe: CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj
boring_space.exe: CMakeFiles/boring_space.dir/src/Particle.cpp.obj
boring_space.exe: CMakeFiles/boring_space.dir/src/Timer.cpp.obj
boring_space.exe: CMakeFiles/boring_space.dir/build.make
boring_space.exe: CMakeFiles/boring_space.dir/linklibs.rsp
boring_space.exe: CMakeFiles/boring_space.dir/objects1.rsp
boring_space.exe: CMakeFiles/boring_space.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable boring_space.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\boring_space.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/boring_space.dir/build: boring_space.exe

.PHONY : CMakeFiles/boring_space.dir/build

CMakeFiles/boring_space.dir/requires: CMakeFiles/boring_space.dir/main.cpp.obj.requires
CMakeFiles/boring_space.dir/requires: CMakeFiles/boring_space.dir/src/utilities.cpp.obj.requires
CMakeFiles/boring_space.dir/requires: CMakeFiles/boring_space.dir/src/Point2D.cpp.obj.requires
CMakeFiles/boring_space.dir/requires: CMakeFiles/boring_space.dir/src/Entity.cpp.obj.requires
CMakeFiles/boring_space.dir/requires: CMakeFiles/boring_space.dir/src/Player.cpp.obj.requires
CMakeFiles/boring_space.dir/requires: CMakeFiles/boring_space.dir/src/Asteroid.cpp.obj.requires
CMakeFiles/boring_space.dir/requires: CMakeFiles/boring_space.dir/src/Particle.cpp.obj.requires
CMakeFiles/boring_space.dir/requires: CMakeFiles/boring_space.dir/src/Timer.cpp.obj.requires

.PHONY : CMakeFiles/boring_space.dir/requires

CMakeFiles/boring_space.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\boring_space.dir\cmake_clean.cmake
.PHONY : CMakeFiles/boring_space.dir/clean

CMakeFiles/boring_space.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Software Engeniering\boring_space" "D:\Software Engeniering\boring_space" "D:\Software Engeniering\boring_space\cmake-build-debug" "D:\Software Engeniering\boring_space\cmake-build-debug" "D:\Software Engeniering\boring_space\cmake-build-debug\CMakeFiles\boring_space.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/boring_space.dir/depend

