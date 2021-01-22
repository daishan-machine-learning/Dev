#include<iostream>
#include<GLFW/glfw3.h>
//要在相应的平台，添加对应的include文件，和lib文件
int main() {
	int a = glfwInit();
	std::cout << a << std::endl;
	std::cin.get();
}
