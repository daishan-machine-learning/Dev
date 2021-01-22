#pragma once
#include<iostream>
//如果我们这样声明，当文件被多个cpp文件包含时，就会导致重定义错误，我们可以使用static来确定该
//函数只存在"当前文件"
//static void Log(const char* message) {
//	std::cout << message << std::endl;
//}
void Log(const char* message);