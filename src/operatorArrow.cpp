#include<iostream>
namespace Arrow {
	class Entity {
	public:
		void Print()const {  // const����ָ�룬���ã�ֻ�ܵ���const��Ա����

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
	// Arrow�ĵڶ����÷�����ȡ������offset
	struct Vec3 {
		float x, y, z;
	};
	int main_arrow() {

		const ScopedPtr ptr = new Entity();
		ptr->Print();

		int offset = (int)&(((Vec3*)nullptr)->z);  // ��ȡ������ƫ�Ƶ�ַ
		std::cout << offset << std::endl;
		std::cin.get();
		return 0;
	}
}