# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/2_Expresiones_en_C__.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/2_Expresiones_en_C__.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2_Expresiones_en_C__.dir/flags.make

CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.obj: CMakeFiles/2_Expresiones_en_C__.dir/flags.make
CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.obj: ../Ejercicio_1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\2_Expresiones_en_C__.dir\Ejercicio_1.cpp.obj -c B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\Ejercicio_1.cpp

CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\Ejercicio_1.cpp > CMakeFiles\2_Expresiones_en_C__.dir\Ejercicio_1.cpp.i

CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\Ejercicio_1.cpp -o CMakeFiles\2_Expresiones_en_C__.dir\Ejercicio_1.cpp.s

# Object files for target 2_Expresiones_en_C__
2_Expresiones_en_C___OBJECTS = \
"CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.obj"

# External object files for target 2_Expresiones_en_C__
2_Expresiones_en_C___EXTERNAL_OBJECTS =

2_Expresiones_en_C__.exe: CMakeFiles/2_Expresiones_en_C__.dir/Ejercicio_1.cpp.obj
2_Expresiones_en_C__.exe: CMakeFiles/2_Expresiones_en_C__.dir/build.make
2_Expresiones_en_C__.exe: CMakeFiles/2_Expresiones_en_C__.dir/linklibs.rsp
2_Expresiones_en_C__.exe: CMakeFiles/2_Expresiones_en_C__.dir/objects1.rsp
2_Expresiones_en_C__.exe: CMakeFiles/2_Expresiones_en_C__.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2_Expresiones_en_C__.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2_Expresiones_en_C__.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2_Expresiones_en_C__.dir/build: 2_Expresiones_en_C__.exe

.PHONY : CMakeFiles/2_Expresiones_en_C__.dir/build

CMakeFiles/2_Expresiones_en_C__.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2_Expresiones_en_C__.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2_Expresiones_en_C__.dir/clean

CMakeFiles/2_Expresiones_en_C__.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++ B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++ B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\cmake-build-debug B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\cmake-build-debug B:\Max\Documentos\Program\Udemy\C++\2_Expresiones_en_C++\cmake-build-debug\CMakeFiles\2_Expresiones_en_C__.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/2_Expresiones_en_C__.dir/depend

