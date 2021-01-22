#include<iostream>
//lifetime ��ջ�ڴ��еĶ����������ھ���scope�ķ�Χ���ѵ����������Ǵ������ֶ����ٵ�
namespace Lifetime {
	class Entity {
	private:
		int x;
	public:
		Entity() {
			std::cout << "Constructor" << std::endl;
		}
		~Entity() {
			std::cout << "Destroyed  Entity!" << std::endl;
		}
	};

	int* IntegerArray() {
		int arr[50];
		return arr;  // error ,һλ��arr��ջ�ڴ棬���ص�ʱ��arr�Ѿ��Զ������ˡ�
	}

	//��򵥵�����ָ��
	class ScopedPtr {
	private:
		Entity* m_Ptr;
	public:
		ScopedPtr(Entity* ptr)
			:m_Ptr(ptr) {

		}
		~ScopedPtr() {
			delete m_Ptr;
		}

	};

	int main_lifetime() {
		int* arr = IntegerArray();


		std::cout << arr[0] << std::endl;
		{
			//Entity *e = new Entity;  // �����Զ��ͷ�
			ScopedPtr e = new Entity; // implicit conversion,��ȻEntity���ɵĶ������ڶѿռ��У�����ScopedPtr����ջ�ռ��У����Ի��Զ�free�����е��ڴ�
		}
		std::cin.get();
		return 0;
	}
}