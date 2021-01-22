#include<iostream>
namespace Visibility {
	class Entity {
	protected:
		float X;
		void Print() {
		
		}
	public:
		Entity() {


		}
	};

	class Player : public Entity {
	public:
		Player() {
			X = 0.2;
			Print();
		}

	};

	int main_visibility() {
		Player p;
		/*p.X = 2;
		p.Print();*/
		std::cin.get();
		return 0;
	}
}