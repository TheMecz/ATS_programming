# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\12_Punteros_en_C__002.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\12_Punteros_en_C__002.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\12_Punteros_en_C__002.dir\flags.make

CMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.obj: CMakeFiles\12_Punteros_en_C__002.dir\flags.make
CMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.obj: ..\Trasmision_de_direcciones.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/12_Punteros_en_C__002.dir/Trasmision_de_direcciones.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.obj /FdCMakeFiles\12_Punteros_en_C__002.dir\ /FS -c C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\Trasmision_de_direcciones.cpp
<<

CMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/12_Punteros_en_C__002.dir/Trasmision_de_direcciones.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\Trasmision_de_direcciones.cpp
<<

CMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/12_Punteros_en_C__002.dir/Trasmision_de_direcciones.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.s /c C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\Trasmision_de_direcciones.cpp
<<

# Object files for target 12_Punteros_en_C__002
12_Punteros_en_C__002_OBJECTS = \
"CMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.obj"

# External object files for target 12_Punteros_en_C__002
12_Punteros_en_C__002_EXTERNAL_OBJECTS =

12_Punteros_en_C__002.exe: CMakeFiles\12_Punteros_en_C__002.dir\Trasmision_de_direcciones.cpp.obj
12_Punteros_en_C__002.exe: CMakeFiles\12_Punteros_en_C__002.dir\build.make
12_Punteros_en_C__002.exe: CMakeFiles\12_Punteros_en_C__002.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 12_Punteros_en_C__002.exe"
	"C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\12_Punteros_en_C__002.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\12_Punteros_en_C__002.dir\objects1.rsp @<<
 /out:12_Punteros_en_C__002.exe /implib:12_Punteros_en_C__002.lib /pdb:C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\cmake-build-debug\12_Punteros_en_C__002.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\12_Punteros_en_C__002.dir\build: 12_Punteros_en_C__002.exe

.PHONY : CMakeFiles\12_Punteros_en_C__002.dir\build

CMakeFiles\12_Punteros_en_C__002.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\12_Punteros_en_C__002.dir\cmake_clean.cmake
.PHONY : CMakeFiles\12_Punteros_en_C__002.dir\clean

CMakeFiles\12_Punteros_en_C__002.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++ C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++ C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\cmake-build-debug C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\cmake-build-debug C:\Users\maxpo\Documentos\Program\Udemy\C++\12_Punteros_en_C++\cmake-build-debug\CMakeFiles\12_Punteros_en_C__002.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\12_Punteros_en_C__002.dir\depend

