#include<iostream>

// new 1.��heap�Ϸ���ռ�  2.����constructor
namespace New {
	class Entity {
	private:
		std::string m_name;
	public:
		Entity() {

		}

		Entity(const std::string& name) {
			m_name = name;
		}
		const std::string& GetName()const {

			return m_name;
		}

	};
	int main_new() {

		Entity* e = new Entity("Cherno"); // new����������пռ䣬Ȼ�����Entity�Ĺ��캯��
		Entity* p = (Entity*)malloc(sizeof(Entity));  // maloc��newΨһ��������ǣ�malloc�����ķ����ڴ棬new���������ڴ棬������construcotr
		Entity* es = new Entity[20];  // Ҫ��Entity�������Ĭ�Ϲ��캯���������޷����á�

		delete[] es;
		delete p;
		delete e;
		std::cin.get();
		return 0;
	}
}