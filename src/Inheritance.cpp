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

	class Player :public Entity {   // Player �̳���Entity�����ж�����ʵ����Player���������ͣ�Player��Entity,�������ǿ��Ի��ڴ�ʵ�ֶ�̬����ΪֻҪ��Entity����ʹ�õĵط���Player������ʹ��
	public:
		const char* playerName;
		void PrintName() {

			std::cout << playerName << std::endl;
		}

	};


	int main_inheritance() {
		// ��ӡEntity��Player�Ĵ�С
		std::cout << sizeof(Entity) << std::endl;
		std::cout << sizeof(Player) << std::endl;
		std::cin.get();
		return 0;
	}
}