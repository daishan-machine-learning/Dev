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
		explicit Entity(std::string name)   // 使用explicit 禁止构造函数的隐式转换
			:m_name(name), m_age(-1) {

		}

	};

	void testPrint(const Entity& e) {


	}
	int main_Explicit() {
		// implicitly conversion  隐式转换
		//Entity e = std::string("Cherno");
		//Entity s = 23;
		//testPrint(23);    //隐式转换
		//testPrint(std::string("Cherno"));
		Entity e = (Entity)22;  // explicit 不能禁止这种形式的强制转换
		std::cin.get();
		return 0;
	}
}