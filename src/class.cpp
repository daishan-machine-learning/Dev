#include<iostream>

// class ����һ�����ݺͺ����ļ���
struct Player {
	int x, y;
	int speed;

	void Move(int x, int y) {
		x += x * speed;
		y += y * speed;
	}
};
// struct ��ʹ�÷���
struct vec2 
{
	double x, y;
};

int main_class() {
	Player player;  //������һ������object
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