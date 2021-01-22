#include<iostream>
#include<GLFW/glfw3.h>
//要在相应的平台，添加对应的include文件，和lib文件
//添加动态库需要注意两点，同样的需要添加dll.lib静态文件,然后需要让exe文件能找到对应的.dll文件
int main() {
	int a = glfwInit();
	std::cout << a << std::endl;
	std::cin.get();
}
