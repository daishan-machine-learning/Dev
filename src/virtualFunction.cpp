#include<iostream>
#include<string>
namespace VirtualFucntion {
	class Entity {
	public:
		virtual std::string GetName() { return "Entity"; }  // virtual ���߱�����Ϊ�ú�������������������д�ˣ����
	};

	class Player :public Entity {
	private:
		std::string m_name;
	public:
		Player(std::string name) :m_name(name) {

		}
		std::string GetName() override { return m_name; }
	};
	void PrintName(Entity* entity) {
		std::cout << entity->GetName() << std::endl;
	}
	int main_virtual() {
		Entity* e = new Entity();
		Player* p = new Player("cherno");
		PrintName(e);
		PrintName(p);
		std::cin.get();
		return 0;
	}
}