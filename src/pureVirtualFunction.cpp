#include<iostream>
#include<string>
namespace pureVirtualFunction {
	class Printable {
	public:
		virtual std::string PrintClassName() = 0;  //确保子类必须实现该函数，如果不实现，那么子类就无法实例化，纯虚函数没有传递性
	};

	class Entity :public Printable {
	public:
		std::string PrintClassName()override {
			return "entity";
		}
	};

	class Player :public Printable {
	public:
		std::string PrintClassName() {
			return "Player";
		}

	};
	int main_pureVirtualFunction() {
		Entity* e = new Entity();
		Player* p = new Player();
		std::cin.get();
		return 0;
	}
}