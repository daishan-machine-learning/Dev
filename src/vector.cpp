#include<iostream>
#include<vector>
namespace Vector {
	// vector:dynamic 
	// 通常来说，我们选择在vector中存储对象，而不是指针，因为这样在访问的时候，vecotr中的数据连续的，这样cache就可以包含它们，从而大大提升访问速度
	struct Vec3 {
		float x, y, z;

		Vec3(float x, float y, float z)
			:x(x), y(y), z(z) {

		}

		Vec3(const Vec3& vec)
			:x(x), y(y), z(z) {
			std::cout << "Vec Copy happens" << std::endl;
		}

	};
	std::ostream& operator<<(std::ostream& stream, const Vec3& vec) {
		stream << vec.x << "," << vec.y << "," << vec.z;
		return stream;
	}
	int main_vector() {
		/*std::vector<Vec3> vecs;
		vecs.push_back({ 1,2,3 });
		vecs.push_back({ 2,5,3 });
		for (int i = 0; i < vecs.size(); i++)
			std::cout << vecs[i] << std::endl;
		vecs.erase(vecs.begin() + 1);
		for (Vec3& t : vecs) {
			std::cout << t << std::endl;
		}

		vecs.clear();*/
		// Optimization
		std::vector<Vec3> vecs;  //std::vector<Vec3> vecs(3); 这句代码会真正的尝试构造三个Vec3对象，但我们不想要生成对象，可以使用reserve
		vecs.reserve(3);
		vecs.emplace_back(1, 2, 3);
		vecs.emplace_back(2, 5, 3);
		vecs.emplace_back(3, 4, 6);
		vecs.push_back(Vec3(10, 2, 3));
		std::cin.get();
		return 0;
	}
}