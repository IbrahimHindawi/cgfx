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

find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME}
        PRIVATE
        $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
        $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
    )

find_package(cglm CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE cglm::cglm)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                   ${CMAKE_SOURCE_DIR}/resource ${CMAKE_CURRENT_BINARY_DIR}/resource)
