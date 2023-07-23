# cgfx
## C graphics programming template  
Template project for graphics programming using SDL2 & OpenGL:  

Linux & Darwin Run:
* `mkdir build`
* `cd build`
* `cmake ..`
* `make`
* `./cgfx`

Win64 Run:
* [Install & Integrate VCPKG](https://learn.microsoft.com/en-us/vcpkg/examples/installing-and-using-packages)
* Install dependencies through VCPKG. (you might have to edit `scripts\bbuild.bat`)
* `scripts\bbuild.bat` to build `.sln` & `compile_commands.json`.
* `scripts\ccompilerun.bat` to compile & run exe.

Win64 Toolchain:
* [Visual Studio 2022 & MSBuild](https://visualstudio.microsoft.com/downloads/)  
* [vcpkg](https://github.com/Microsoft/vcpkg/)  
* [CMake](https://cmake.org/)

Dependencies:
* [SDL2](https://www.libsdl.org/)  

Vendored:
* [GLAD](https://glad.dav1d.de/)  
* [stb_image](https://github.com/nothings/stb)  
* [linmath](https://github.com/datenwolf/linmath.h)  
* [Clang Power Tools](https://github.com/Caphyon/clang-power-tools/tree/master/ClangPowerTools/ClangPowerTools/Tooling/v1)

Known Issues:
Clang Power Tools does not add vcpkg include dirs, must add manually for now.
