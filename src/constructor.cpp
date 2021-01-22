#include<iostream>
namespace Constructor {
	class Entity {
	public:
		Entity() {
			X = 0.0f;
			Y = 0.0f;
		}
		Entity(float a, float b) {
			X = a;
			Y = b;
		}
		float X, Y;
		void Print() {

			std::cout << X << " , " << Y << std::endl;
		}
	};
	int main_cstr() {
		Entity e(2.3, 3.4);
		std::cout << e.X << " , " << e.Y << std::endl;
		e.Print();
		std::cin.get();
		return 0;
	}
}