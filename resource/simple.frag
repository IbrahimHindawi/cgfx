#version 330 core
out vec4 FragColor;
in vec2 Coord;
uniform sampler2D utexture;

void main() {
    // FragColor = vec4(0.5f, 0.0f, 0.5f, 1.f);
    FragColor = texture(utexture, Coord);
}
