//static int variable = 5;  
//static void Function(){
//
//
//}
#include<iostream>

struct Entity {
	static float x, y;  //类内部的static变量，必须在类外定义
	static void Print() {
		std::cout << x << " , " << y << std::endl;
	}
};
float Entity::x;
float Entity::y;

void function() {
	static int i = 0;  // local static variable
	++i;
	std::cout << i << std::endl;
}

class Singleton {
public:
	
	static Singleton& Get() { 
		static Singleton s_instance;  //local static 的寿命是整个程序执行的时间，只是范围被限定在local scope
		return s_instance;
	}
	void Hello() {
		std::cout << "Hello" << std::endl;
	}
};


int main_static() {
	Singleton::Get().Hello();

	Entity::x = 2;
	Entity::y = 3;

	Entity e1;
	Entity::x = 12;
	Entity::y = 13;

	Entity::Print();
	Entity::Print();
	function();
	function();
	function();
	function();
	std::cin.get();
	return 0;
}