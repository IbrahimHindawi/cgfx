# cgfx 
C graphics programming template using SDL2 & OpenGL:  
Compiles to Win64 MacOS Linux with `compile_commands.json` for clangd LSP support.

### Linux & Darwin Run:
* `mkdir build`
* `cd build`
* `cmake ..`
* `make`
* `./cgfx`

### Win64 Run:
* requires ninja
* download `SDL2-devel-X.YY.Z-VC.zip` from `https://github.com/libsdl-org/SDL/releases`
* unzip & add path to CMAKE_PREFIX_PATH environment variable
* run `x64 Native Tools Command Prompt for VS 20XX`
* `scripts\build.bat -b` to make `build.ninja` & `compile_commands.json`
* `scripts\build.bat -cr` to compile & run exe

### Win64 Toolchain:
* [Visual Studio 2022 & MSBuild](https://visualstudio.microsoft.com/downloads/)
* [CMake](https://cmake.org/)

### Dependencies:
* [SDL2](https://www.libsdl.org/)  
* [CGLM](https://github.com/recp/cglm)  

### Vendored:
* [GLAD](https://glad.dav1d.de/)  
* [stb_image](https://github.com/nothings/stb)  
* [Clang Power Tools script](https://github.com/Caphyon/clang-power-tools/tree/master/ClangPowerTools/ClangPowerTools/Tooling/v1)
