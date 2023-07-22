@echo off

mkdir build
pushd build

cmake .. -G "Visual Studio 17 2022"
powershell -Command ..\scripts\clang-build.ps1 -export-jsondb

popd build
