#version 130

uniform vec4 mat_diffuse;

out vec4 fColor;

void main(void)
{
    fColor = mat_diffuse;
}
