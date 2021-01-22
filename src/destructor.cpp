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
		e.~Entity();  // 产生了内存泄露  memory leak,但这里我们没有任何内存资源，所以没事
	}
	int main_dstr() {
		func();
		std::cin.get();
		return 0;
	}
}