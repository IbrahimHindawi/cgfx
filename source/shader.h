#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "core.h"

#include <glad/glad.h>

void shader_compile_check(u32 shader); 
void shader_link_check(u32 shader); 

u32 shader_compile(const char* shader_source, GLenum shader_type);
u32 shader_link(u32 vertex_shader, u32 fragment_shader);
