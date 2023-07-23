@echo off

mkdir build
pushd build

cmake .. -G "Visual Studio 17 2022" "-DCMAKE_TOOLCHAIN_FILE=C:\devel\vcpkg\scripts\buildsystems\vcpkg.cmake"
powershell -Command ..\scripts\clang-build.ps1 -export-jsondb
python ..\scripts\finalize.py

popd build
