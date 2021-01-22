#include<iostream>
namespace Arrow {
	class Entity {
	public:
		void Print()const {  // const对象，指针，引用，只能调用const成员函数

			std::cout << "Hello" << std::endl;
		}

	};
	class ScopedPtr {
	private:
		Entity* m_Obj;
	public:
		ScopedPtr(Entity* ptr)
			:m_Obj(ptr) {

		}
		~ScopedPtr() {
			delete m_Obj;
		}
		Entity* operator->() {
			return m_Obj;
		}

		const Entity* operator->()const {
			return m_Obj;

		}
	};
	// Arrow的第二种用法，获取变量的offset
	struct Vec3 {
		float x, y, z;
	};
	int main_arrow() {

		const ScopedPtr ptr = new Entity();
		ptr->Print();

		int offset = (int)&(((Vec3*)nullptr)->z);  // 获取变量的偏移地址
		std::cout << offset << std::endl;
		std::cin.get();
		return 0;
	}
}