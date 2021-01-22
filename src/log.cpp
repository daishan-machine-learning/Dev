#include<iostream>
#include"Log.h"
void Log(const char* message) {
// 当调式到这个位置时，我们还没执行函数，但是此时函数的栈帧已经建立
	std::cout << message << std::endl;

}