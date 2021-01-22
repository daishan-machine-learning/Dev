#include<iostream>
#include<string>
namespace Mutable {
	class Entity {
	private:
		std::string m_Name;
		mutable int DebugName = 0;  // mutable means can be changed ,这是第一种用法，也是最常用的一种
	public:
		const std::string& GetName() const {
			DebugName++;
			return m_Name;
		}
	};
	int main_mutable() {
		const Entity e;
		e.GetName();
		int x = 10;
		auto func = [=]() mutable {   // mutable的第二种用法，将lambda函数变成可变的lambda函数
			x++;
			std::cout << x << std::endl;
		};
		func();
		std::cout << x << std::endl;

		std::cin.get();
		return 0;
	}
}