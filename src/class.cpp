#include<iostream>

// class 就是一堆数据和函数的集合
struct Player {
	int x, y;
	int speed;

	void Move(int x, int y) {
		x += x * speed;
		y += y * speed;
	}
};
// struct 的使用方法
struct vec2 
{
	double x, y;
};

int main_class() {
	Player player;  //生成了一个对象object
	player.x = 5;
	player.y = 10;
	player.speed = 12;
	player.Move(1, -1);

	vec2 position;
	position.x = 100;
	position.y = 10.2;

	std::cin.get();
	return 0;
}