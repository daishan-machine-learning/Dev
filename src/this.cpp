#include<iostream>
namespace This {
	// this: pointer to the current object instance
	// this: �� type* const this;  this�ǳ�ָ�룬���ܸı�ָ��ġ�
	class Entity {
	public:
		int x, y;
		Entity(int x, int y) {   // Entity(Entity* const this,int x,int yS)
			//x = x;  
			//y = y; //������û��Ч���ģ����е�x,y���ᱻ��ֵ
			this->x = x;
			this->y = y;
		}

	};
	int main_this() {
		Entity e(12, 23);
		std::cin.get();
		return 0;
	}
}