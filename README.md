# cgfx
## C graphics programming template with SDL2 OpenGL  

Template project for graphics programming:  
Run:
* `scripts\bbuild.bat` to build `.sln` & `compile_commands.json`.
* `scripts\ccompilerun.bat` to compile & run exe.

Toolchain:  
* [Visual Studio 2022 & MSBuild](https://visualstudio.microsoft.com/downloads/)  
* [vcpkg](https://github.com/Microsoft/vcpkg/)  
* [Clang Power Tools](https://github.com/Caphyon/clang-power-tools/tree/master/ClangPowerTools/ClangPowerTools/Tooling/v1)

Vcpkg Install:  
* [SDL2](https://www.libsdl.org/)  
* [CGLM](https://github.com/recp/cglm)  

Vendored:  
* [GLAD](https://glad.dav1d.de/)  
* [stb_image](https://github.com/nothings/stb)  

TODO:  
* CMakeLists.txt `find_package()` for vcpkg
