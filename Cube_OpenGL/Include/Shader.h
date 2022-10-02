#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <GLM/glm.hpp>
#include <GLM/gtc/matrix_transform.hpp>
#include <GLM/gtc/type_ptr.hpp>
#include <map>
#include <string>

#include "Texture.h"

using namespace std;

class Shader {
  public:
    GLuint shader_programme;
    GLint textureQtd;
    Shader();
    map<string, Texture> textures;

    void useTexture(string textureName);
    void loadTexture(char* path, char* textureUniformName, string textureName);
    void setUniformMatrix4fv(const string& name, glm::mat4& matrix);
    void setUniformMatrix4fvFloat(const string& name, float* matrix);
};
