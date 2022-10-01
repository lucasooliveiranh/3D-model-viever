#pragma once
#include "Face.h"
#include <string>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

using namespace std;

class Group {
  public:
    Group();
    Group(string n, string m) {
      name = n;
      material = m;
    };

    string name;
    string material;
    vector <Face*> faces;
    GLuint vao;
};
