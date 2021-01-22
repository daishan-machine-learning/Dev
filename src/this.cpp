#include<iostream>
namespace This {
	// this: pointer to the current object instance
	// this: 是 type* const this;  this是常指针，不能改变指向的。
	class Entity {
	public:
		int x, y;
		Entity(int x, int y) {   // Entity(Entity* const this,int x,int yS)
			//x = x;  
			//y = y; //这样是没有效果的，类中的x,y不会被赋值
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