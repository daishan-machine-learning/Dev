#include<iostream>  // 预处理语句，include语句只是把iostream中的内容copy到当前文件
#include"Log.h"

// void log(const char* message);

  // 声明
//static 声明，表示该函数只在当前文件/translation unit范围内使用
static int Multiply(int a, int b) {
	Log("Hello,World!");
	return a * b;
}
// main函数是不需要return的，如果不return它就会返回0

int main1() {
	//char ,short ,int,long,long long 五个整数的数据类型
	short a = 65;
	std::cout << a << std::endl;
	unsigned int variable = 8;// signed int -2b -> 2b
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;
	float var = 5.5f;
	double var1 = 5.2;
	bool t = true;
	std::cout << t << std::endl;
	std::cout << sizeof(double) << std::endl;
	//std::cout << "hello,world!" << std::endl;  // <<操作符是重写的函数
	//std::cout << multiply(2, 5) << std::endl;  
	//std::cin.get();  // 等待enter字符
	std::cin.get();
	return 0;
}
int main2() {
	// function
	//实际上从x=6开始，到std::cin.get()之间的代码，都会在编译的时候被去掉，因为constant folding的存在
	//这是可以被优化的代码
	/*int x = 6;
	const char* message = "Hello";*/
	//if (message == "hello") {
	//	log(message);
	//}
	//else if(message){   // c++中不存在所谓的else if 关键词，只有else and if
	//	log("message is not null");
	//}
	//else {
	//	log("message is null");
	//}

	// 循环 for(initial;conditions;increment)
	for (int i = 0; i < 5; ++i) {
		if (i % 2 == 0)
			continue;
		Log("Hello,World!!");
		std::cout << i << std::endl;
		continue;   //continue只出现在loop中，它的意思是不执行下面的内容，直接跳到下一轮循环
	}
	Log("=========================");
	int i = 0;
	while (i < 5) {
		Log("Hello,World!");
		if (i > 2)
			break; // 直接跳出循环
		++i;
	}
	Log("=========================");
	//do-while 至少执行一次
	i = 0;
	do {
		Log("Hello,World!!");
		i++;
	} while (i < 5);

	std::cin.get();
	return 0;
}
#define LOG(x) std::cout<<x<<std::endl;

int main3(){
	int var = 8;
	int* ptr = &var; // nullptr就是0，而0地址是非法的，不能读或者写
	*ptr = 10; // *ptr就是访问ptr存储的地址中的内存的意思，int表示我们要访问的是4字节
	LOG(var)
	char* buff = new char[8]; //allocate 8bytes
	memset(buff, 0, 8); // 对分配的空间赋值
	char** pptr = &buff;  //二重指针

	
	delete[] buff; // 将内存空间清除
	std::cin.get();
	return 0;
}
void Increment(int& value) {
	value++;
}
int main4() {
	//reference :引用是指针的掩饰
	//引用和指针的不同：引用必须指向一个已经存在的对象，而且由于reference是变量的别名，所以，只能初始化一次，不能在对其它变量初始化了。
	int a = 5;
	int& ra = a;
	ra = 10;
	Increment(a);
	LOG(a);
	std::cin.get();
	return 0;
}