#include<iostream>
namespace Destructor {
	class Entity {
	public:
		Entity() {
			std::cout << "create Entity!" << std::endl;
		}

		~Entity() {
			std::cout << "destroy Entity!" << std::endl;
		}

	};
	void func() {
		Entity e;
		e.~Entity();  // �������ڴ�й¶  memory leak,����������û���κ��ڴ���Դ������û��
	}
	int main_dstr() {
		func();
		std::cin.get();
		return 0;
	}
}