#version 330 core
out vec4 FragColor;
in vec2 Coord;
uniform sampler2D utexture;

void main() {
    // FragColor = vec4(0.5f, 0.0f, 0.5f, 1.f);
    vec2 newCoord = Coord;
    // newCoord.x *= -1.f;
    newCoord.y *= -1.f; // flip texture!
    FragColor = texture(utexture, newCoord);
}
