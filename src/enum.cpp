#include<iostream>
enum Example : unsigned char  //指定数据类型
{

	A,B,C
};

int main_enum() {

	Example a = B;  //enum 对象可以取的值只能是定义中的几个
	if (a == B) {
		// do some thing 
	
	}
	std::cin.get();
	return 0;
}