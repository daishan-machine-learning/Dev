#include<iostream>
namespace Inheritance {
	class Entity {
	public:
		float X, Y;
		void Move(float xa, float ya) {
			X += xa;
			Y += ya;
		}

	};

	class Player :public Entity {   // Player 继承了Entity的所有东西，实际上Player是两个类型，Player和Entity,所以我们可以基于此实现多态，因为只要是Entity可以使用的地方，Player都可以使用
	public:
		const char* playerName;
		void PrintName() {

			std::cout << playerName << std::endl;
		}

	};


	int main_inheritance() {
		// 打印Entity和Player的大小
		std::cout << sizeof(Entity) << std::endl;
		std::cout << sizeof(Player) << std::endl;
		std::cin.get();
		return 0;
	}
}