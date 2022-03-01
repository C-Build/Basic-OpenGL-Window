#include <iostream>;
#include<GLFW/glfw3.h>;
#include<glad/glad.h>;

//Sometime In The Build you nedd to Remove The ( #include<glad/glad.h>; ) Becuas It Is Include by Defualt With ( #include<GLFW/glfw3.h>; )

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
