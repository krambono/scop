#include "scop.h"

GLFWwindow *window;
GLuint      ebo;
GLuint      vao;
GLuint      vbo;

int init()
{
	if (!glfwInit())
		return (error_0("Failed to initialize GLFW"));

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	window = glfwCreateWindow(1280, 720, "LearnOpenGL", NULL, NULL);
	if (!window)
		return (error_0("Failed to create GLFW window"));

	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
		return (error_0("Failed to initialize GLAD"));

	glViewport(0, 0, 1280, 720);
	// glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
	return 1;
}

int main(void)
{
	setbuf(stdout, NULL);
	if (!init())
		return 1;

	GLuint program;

	if (!create_program(&program, "shaders/shader.vert", "shaders/shader.frag"))
		return (1);

	return (0);
}