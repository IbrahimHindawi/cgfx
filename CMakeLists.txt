cmake_minimum_required(VERSION 3.10)

project(cgfx VERSION 1.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(${PROJECT_NAME}
    source/main.c
    thirdparty/glad/src/glad.c
)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(source/)
include_directories(thirdparty/glad/include)
include_directories(thirdparty/stb/include)
include_directories(thirdparty/linmath/include)

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
    set_target_properties(${PROJECT_NAME} PROPERTIES VS_GLOBAL_VcpkgEnabled true)
    find_package(SDL2 CONFIG REQUIRED)
    target_link_libraries(${PROJECT_NAME}
            PRIVATE
            $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
            $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
    )
endif()

if (CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    find_package(SDL2 CONFIG REQUIRED)
    include_directories(${SDL2_INCLUDE_DIRS})
    target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
endif()

if (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    find_package(SDL2 CONFIG REQUIRED)
    include_directories(${SDL2_INCLUDE_DIRS})
    target_link_libraries(${PROJECT_NAME} -lm -ldl ${SDL2_LIBRARIES})
endif()

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                   ${CMAKE_SOURCE_DIR}/resource ${CMAKE_CURRENT_BINARY_DIR}/resource)
