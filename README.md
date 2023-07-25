# cgfx 
C graphics programming template using SDL2 & OpenGL:  
Based on [engine-from-scratch](https://github.com/Falconerd/engine-from-scratch.git).  
Compiles to Win64 MacOS Linux with `compile_commands.json` for clangd LSP support.

### Linux & Darwin Run:
* `mkdir build`
* `cd build`
* `cmake ..`
* `make`
* `./cgfx`

### Win64 Run:
* [Install & Integrate VCPKG](https://learn.microsoft.com/en-us/vcpkg/examples/installing-and-using-packages)
* Install dependencies through VCPKG.
* `scripts\bbuild.bat` to build `.sln` & `compile_commands.json`. (check DCMAKE_TOOLCHAIN_FILE path)
* `scripts\ccompilerun.bat` to compile & run exe.

### Win64 Toolchain:
* [Visual Studio 2022 & MSBuild](https://visualstudio.microsoft.com/downloads/)
* [Clang Power Tools VS Extension](https://marketplace.visualstudio.com/items?itemName=caphyon.ClangPowerTools)
* [vcpkg](https://github.com/Microsoft/vcpkg/)  
* [CMake](https://cmake.org/)

### Dependencies:
* [SDL2](https://www.libsdl.org/)  

### Vendored:
* [GLAD](https://glad.dav1d.de/)  
* [stb_image](https://github.com/nothings/stb)  
* [linmath](https://github.com/datenwolf/linmath.h)  
* [Clang Power Tools script](https://github.com/Caphyon/clang-power-tools/tree/master/ClangPowerTools/ClangPowerTools/Tooling/v1)
