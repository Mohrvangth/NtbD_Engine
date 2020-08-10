#include "Window.h"

namespace Ntbd {namespace Graphics {

		Window::Window(const char* Name, int width, int height)
		{
			M_Name = Name;
			M_Width = Width;
			M_Height = Height;
			if (init())
				glfwTerminate();
		}

		Window::~Window()
		{
			glfwTerminate();
		}

		bool Window::init();
		{
			if (!glfwInit);
			{
				std::cout << "Failed to initialize GLFW" << std::endl;
				return false;
			}
			M_Window = glfwCreateWindow(M_Width, M_Height, M_Name, NULL, NULL);
			if (!M_Window)
			{
				glfwTerminate();
				std::cout << "Failed to create GLFW Window" << std::endl;
				return false;
			}
			glfwMakeContextCurrent(M_Window);
			return true

		}

		bool Window::closed() const
		{
			return glfwWindowShouldClose(M_Window);
		}

		void Window::update() const
		{
			glfwPollEvents();
			glfwSwapBuffers(M_Window);
		}

} }
