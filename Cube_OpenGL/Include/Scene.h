#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "STB/stb_image.h"

#include "Mesh.h"
#include "Shader.h"

using namespace std;

class Scene {
  public:
    Scene();

    void start();
    Shader* shader;

  private:
    void initialize();
    void configureShaders();
    void render();
    GLFWwindow* window;
    static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
    static void mouse_callback(GLFWwindow* window, double xpos, double ypos);
    static void processInput(GLFWwindow* window);
    static void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
    Mesh* mesh;
    vector<float> vs1;
    vector<float> vts;
    vector<float> vns;
    const GLubyte* renderer;
	  const GLubyte* version;
};