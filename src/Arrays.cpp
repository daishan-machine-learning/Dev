#include<iostream>
#include<array>
namespace Arrays {
	class Entity {
	public:
		int* example = new int[5];    // 内存指向问题，栈上是直接存储数据，堆上是存储指针，指针指向堆上的内存
		Entity() {
			for (int i = 0; i < 5; i++)
				example[i] = 2;
		}
		~Entity() {
			delete[] example;
		}

	};
	int main_array() {
		constexpr int Size = 5;  //声明常量
		std::array<int, Size> other;
		for (int i = 0; i < other.size(); i++)
			other[i] = 2;
		Entity e;
		std::cout << sizeof(e) << std::endl;
		int example[5];
		example[0] = 2;
		example[4] = 1;
		int* ptr = example;  // example 就是整型指针，指向数组的首地址
		for (int i = 0; i < 5; i++)
			example[i] = 2;
		example[2] = 5;
		*(ptr + 2) = 66; // 这里虽然指针只是加了2.但是实际上指针加的数据是根据指针的类型来的，这里实际上加了2个整型，也就是2*4个字节
		*(int*)((char*)ptr + 8) = 10; //这是我们把指针转换成char型加上8个字节，和上面整型加2个整型是一样的，指针都移动了8个字节

		// 我们还可以在heap上创建数组
		int* another = new int[5]; // 这个代码和上面的example代码效果一样，都是创建5个整型变量，但是生命周期不一样，example在栈上，another在堆上
		for (int i = 0; i < 5; i++) // 如果我们像在函数里面返回数组的话，就必须使用堆上的数组。
			another[i] = 2;         //在栈上的数组我们可以计算长度，但是如果把它传入函数，或者任何原因变成指针，那么就没办法计算了，所以我们使用标准库的数组
		delete[] another;  // 使用new创建的heap数组，就要用delete[]把它消灭掉
		std::cin.get();
		return 0;
	}
}