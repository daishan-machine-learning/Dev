#include<iostream>
#include<GLFW/glfw3.h>
//Ҫ����Ӧ��ƽ̨����Ӷ�Ӧ��include�ļ�����lib�ļ�
//��Ӷ�̬����Ҫע�����㣬ͬ������Ҫ���dll.lib��̬�ļ�,Ȼ����Ҫ��exe�ļ����ҵ���Ӧ��.dll�ļ�
int main() {
	int a = glfwInit();
	std::cout << a << std::endl;
	std::cin.get();
}
