#include<iostream>
#include<string>
namespace pureVirtualFunction {
	class Printable {
	public:
		virtual std::string PrintClassName() = 0;  //ȷ���������ʵ�ָú����������ʵ�֣���ô������޷�ʵ���������麯��û�д�����
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