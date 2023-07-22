cmake_minimum_required(VERSION 3.10)

project(cgfx VERSION 1.0)
add_executable(${PROJECT_NAME}
    source/main.c
    thirdparty/glad/src/glad.c
    )

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(thirdparty/glad/include)
include_directories(thirdparty/stb/include)
include_directories(C:/devel/vcpkg/installed/x64-windows/include)


target_link_libraries(${PROJECT_NAME} C:/devel/vcpkg/installed/x64-windows/lib/SDL2.lib)
target_link_libraries(${PROJECT_NAME} C:/devel/vcpkg/installed/x64-windows/lib/cglm.lib)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                   ${CMAKE_SOURCE_DIR}/resource ${CMAKE_CURRENT_BINARY_DIR}/resource)
