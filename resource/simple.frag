#version 330 core

out vec4 FragColor;
in vec2 Coord;

// uniform vec4 ucolor;
uniform sampler2D utexture;

void main()
{
   // FragColor = vec4(vertex_color);
   // FragColor = vec4(ucolor);
   // FragColor = vec4(Color, 1.0f);
   FragColor = texture(utexture, Coord);
}
