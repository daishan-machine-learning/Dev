//static int variable = 5;  
//static void Function(){
//
//
//}
#include<iostream>

struct Entity {
	static float x, y;  //���ڲ���static���������������ⶨ��
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
		static Singleton s_instance;  //local static ����������������ִ�е�ʱ�䣬ֻ�Ƿ�Χ���޶���local scope
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