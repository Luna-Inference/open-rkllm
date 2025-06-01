@echo off
REM Build script for librkllmrt using MSVC
REM Run this from a Visual Studio Developer Command Prompt

REM Create build directory
if not exist build mkdir build

REM Compile source files
echo Compiling source files...
cl.exe /c /EHsc /MD /std:c++11 /Iinclude src\rkllm_core.cpp /Fobuild\rkllm_core.obj

REM Create DLL
echo Creating DLL...
link.exe /DLL /OUT:build\rkllmrt.dll build\rkllm_core.obj

REM Build test example
echo Building test application...
cl.exe /EHsc /MD /std:c++11 /Iinclude examples\rkllm_test.cpp build\rkllmrt.lib /Febuild\rkllm_test.exe

echo Build completed.
