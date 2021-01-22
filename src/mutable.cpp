#include<iostream>
#include<string>
namespace Mutable {
	class Entity {
	private:
		std::string m_Name;
		mutable int DebugName = 0;  // mutable means can be changed ,���ǵ�һ���÷���Ҳ����õ�һ��
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
		auto func = [=]() mutable {   // mutable�ĵڶ����÷�����lambda������ɿɱ��lambda����
			x++;
			std::cout << x << std::endl;
		};
		func();
		std::cout << x << std::endl;

		std::cin.get();
		return 0;
	}
}