#include <GLFW/glfw3.h>
#include <iostream>

#include "Src/Graphics/Window.h"
int main()
{
	using namespace NtbD;
	using namespace Graphics;

	Window Window("NtbD!", 800, 600);

	while (Window.closed())
	{
		Window.update();
	}

	system("PAUSE");
	return 0;
}