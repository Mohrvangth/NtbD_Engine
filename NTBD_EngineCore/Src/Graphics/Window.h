#pragma once

#include <iostream>
#include <GLFW/glfw3.h>

namespace NtbD {namespace Graphics {

	class Window
	{
	private:
		const char* M_Name;
		int M_Width, M_Height;
		GLFWwindow* M_Window;
		bool M_Closed;
	public:
		Window(const char* Name, int Width, int Height);
		~Window();
		bool closed() const;
		void update() const;
	private:
		bool init();
	};

}}