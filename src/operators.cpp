#include<iostream>
namespace Operator {
	struct Vec2 {
		float x, y;
		Vec2(float x, float y)
			:x(x), y(y) {

		}
		Vec2& operator+(const Vec2& other) {
			this->x += other.x;
			this->y += other.y;
			return *this;
		}
		Vec2& operator*(const Vec2& other) {
			this->x *= other.x;
			this->y *= other.y;
			return *this;
		}
		bool operator==(const Vec2& other)const {
			return (this->x == other.x && this->y == other.y);
		}

		bool operator!=(const Vec2& other)const {
			return !(*this == other);
		}
	};
	// ÖØÐ´operator ²Ù×÷·û
	std::ostream& operator<<(std::ostream& stream, Vec2& vec) {
		stream << "(" << vec.x << "," << vec.y << ")";
		return stream;
	}
	int main_operator() {
		Vec2 position(1.0f, 2.0f);
		Vec2 speed(2.3f, 4.3f);
		Vec2 powerup(1.2f, 1.4f);
		Vec2 result = position + speed * powerup;
		if (position == speed) {
			std::cout << "position is equal to speed" << std::endl;
		}
		else
			std::cout << result << std::endl;
		std::cin.get();
		return 0;
	}
}