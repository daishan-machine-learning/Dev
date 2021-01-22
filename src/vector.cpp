#include<iostream>
#include<vector>
namespace Vector {
	// vector:dynamic 
	// ͨ����˵������ѡ����vector�д洢���󣬶�����ָ�룬��Ϊ�����ڷ��ʵ�ʱ��vecotr�е����������ģ�����cache�Ϳ��԰������ǣ��Ӷ�������������ٶ�
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
		std::vector<Vec3> vecs;  //std::vector<Vec3> vecs(3); ������������ĳ��Թ�������Vec3���󣬵����ǲ���Ҫ���ɶ��󣬿���ʹ��reserve
		vecs.reserve(3);
		vecs.emplace_back(1, 2, 3);
		vecs.emplace_back(2, 5, 3);
		vecs.emplace_back(3, 4, 6);
		vecs.push_back(Vec3(10, 2, 3));
		std::cin.get();
		return 0;
	}
}