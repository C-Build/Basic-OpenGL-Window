#include<iostream>;
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

    gladLoadGL();



    glViewport(0, 0, 400, 400);

    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(Window);

    while (!glfwWindowShouldClose(Window))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(Window);
    glfwTerminate();

    return 0;

}
