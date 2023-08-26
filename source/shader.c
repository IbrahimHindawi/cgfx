#include "shader.h"

void shader_compile_check(u32 shader) {
    int success;
    char info_log[512];
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(shader, 512, NULL, info_log);
        printf("shader compile error:\n%s", info_log);
    }
}

void shader_link_check(u32 shader) {
    int success;
    char info_log[512];
    glGetProgramiv(shader, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shader, 512, NULL, info_log);
        printf("shader compile error:\n%s", info_log);
    }
}

u32 shader_compile(const char* shader_source, GLenum shader_type) {
    u32 shader = glCreateShader(shader_type);
    glShaderSource(shader, 1, &shader_source, NULL);
    glCompileShader(shader);
    shader_compile_check(shader);
    return shader;
}

u32 shader_link(u32 vertex_shader, u32 fragment_shader) {
    u32 shader_program = glCreateProgram();
    glAttachShader(shader_program, vertex_shader);
    glAttachShader(shader_program, fragment_shader);
    glLinkProgram(shader_program);
    shader_link_check(shader_program);
    return shader_program;
}
