#include<iostream>

// new 1.在heap上分配空间  2.调用constructor
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

		Entity* e = new Entity("Cherno"); // new首先申请空闲空间，然后调用Entity的构造函数
		Entity* p = (Entity*)malloc(sizeof(Entity));  // maloc和new唯一的区别就是，malloc单纯的分配内存，new不仅分配内存，还调用construcotr
		Entity* es = new Entity[20];  // 要求Entity必须存在默认构造函数，否则无法调用。

		delete[] es;
		delete p;
		delete e;
		std::cin.get();
		return 0;
	}
}