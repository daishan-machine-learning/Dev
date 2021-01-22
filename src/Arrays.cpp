#include<iostream>
#include<array>
namespace Arrays {
	class Entity {
	public:
		int* example = new int[5];    // �ڴ�ָ�����⣬ջ����ֱ�Ӵ洢���ݣ������Ǵ洢ָ�룬ָ��ָ����ϵ��ڴ�
		Entity() {
			for (int i = 0; i < 5; i++)
				example[i] = 2;
		}
		~Entity() {
			delete[] example;
		}

	};
	int main_array() {
		constexpr int Size = 5;  //��������
		std::array<int, Size> other;
		for (int i = 0; i < other.size(); i++)
			other[i] = 2;
		Entity e;
		std::cout << sizeof(e) << std::endl;
		int example[5];
		example[0] = 2;
		example[4] = 1;
		int* ptr = example;  // example ��������ָ�룬ָ��������׵�ַ
		for (int i = 0; i < 5; i++)
			example[i] = 2;
		example[2] = 5;
		*(ptr + 2) = 66; // ������Ȼָ��ֻ�Ǽ���2.����ʵ����ָ��ӵ������Ǹ���ָ����������ģ�����ʵ���ϼ���2�����ͣ�Ҳ����2*4���ֽ�
		*(int*)((char*)ptr + 8) = 10; //�������ǰ�ָ��ת����char�ͼ���8���ֽڣ����������ͼ�2��������һ���ģ�ָ�붼�ƶ���8���ֽ�

		// ���ǻ�������heap�ϴ�������
		int* another = new int[5]; // �������������example����Ч��һ�������Ǵ���5�����ͱ����������������ڲ�һ����example��ջ�ϣ�another�ڶ���
		for (int i = 0; i < 5; i++) // ����������ں������淵������Ļ����ͱ���ʹ�ö��ϵ����顣
			another[i] = 2;         //��ջ�ϵ��������ǿ��Լ��㳤�ȣ���������������뺯���������κ�ԭ����ָ�룬��ô��û�취�����ˣ���������ʹ�ñ�׼�������
		delete[] another;  // ʹ��new������heap���飬��Ҫ��delete[]���������
		std::cin.get();
		return 0;
	}
}