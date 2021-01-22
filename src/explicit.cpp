#include<iostream>
namespace Explicit {
	class Entity {
	private:
		std::string m_name;
		int m_age;
	public:
		explicit Entity(int age)
			:m_age(age), m_name("UnKnown") {

		}
		explicit Entity(std::string name)   // ʹ��explicit ��ֹ���캯������ʽת��
			:m_name(name), m_age(-1) {

		}

	};

	void testPrint(const Entity& e) {


	}
	int main_Explicit() {
		// implicitly conversion  ��ʽת��
		//Entity e = std::string("Cherno");
		//Entity s = 23;
		//testPrint(23);    //��ʽת��
		//testPrint(std::string("Cherno"));
		Entity e = (Entity)22;  // explicit ���ܽ�ֹ������ʽ��ǿ��ת��
		std::cin.get();
		return 0;
	}
}