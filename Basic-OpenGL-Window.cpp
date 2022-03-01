#include <iostream>;
#include<glad/glad.h>;
#include<GLFW/glfw3.h>;

int main()
{

    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* Window = glfwCreateWindow(400, 400, "WINDOW", NULL, NULL);

    if (Window == NULL)
    {

        std::cout << "ERRORE.." << std::endl;

        glfwTerminate();

        return -1;

    }
    glfwMakeContextCurrent(Window);

    while (!glfwWindowShouldClose(Window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(Window);
    glfwTerminate();

    return 0;

}
