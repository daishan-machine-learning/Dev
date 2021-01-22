#include<iostream>
//lifetime ：栈内存中的对象生命周期就是scope的范围，堆的生命周期是创建到手动销毁的
namespace Lifetime {
	class Entity {
	private:
		int x;
	public:
		Entity() {
			std::cout << "Constructor" << std::endl;
		}
		~Entity() {
			std::cout << "Destroyed  Entity!" << std::endl;
		}
	};

	int* IntegerArray() {
		int arr[50];
		return arr;  // error ,一位内arr是栈内存，返回的时候，arr已经自动销毁了。
	}

	//最简单的智能指针
	class ScopedPtr {
	private:
		Entity* m_Ptr;
	public:
		ScopedPtr(Entity* ptr)
			:m_Ptr(ptr) {

		}
		~ScopedPtr() {
			delete m_Ptr;
		}

	};

	int main_lifetime() {
		int* arr = IntegerArray();


		std::cout << arr[0] << std::endl;
		{
			//Entity *e = new Entity;  // 不会自动释放
			ScopedPtr e = new Entity; // implicit conversion,虽然Entity生成的对象是在堆空间中，但是ScopedPtr是在栈空间中，所以会自动free掉堆中的内存
		}
		std::cin.get();
		return 0;
	}
}