#include<iostream>
namespace Const {
	class Entity {
	private:
		float* x, * y;  // ���ͨ��,��������������Ҫע��ָ�����������ÿ������ǰ�����*
		mutable float  var;  // mutable���εı�������ʹ��const������Ҳ��Ȼ�����޸�
	public:
		float* getX()const {  //1.����Ķ����� Entity* const this,��������const֮���� const Entity* const this; 2.const����ֻ�ܵ���const����
			var = 100;
			return x;

		}
		/*void setX(float x) {
			this->x = x;
		}*/
	};

	void  printFunction(const Entity& e) {  //e��const����ֻ�ܵ���const����
		//e = nullptr;  // cosnt Entity* e,���ǿ��԰�ָ����Ϊ��

		std::cout << e.getX() << std::endl;
	}
	int main_const() {
		const int MAX_AGE = 90;  // ������һ������

		// ָ�� 1.�޸�ָ���ַ���������   2.�޸�ָ��ָ��ĵ�ַ
		//const����ָ�������������1.const ��*ǰ�棬��������  2.const��*���棬����ָ�뱾��
		//const int*  p = new int;   // �����޸�����
		//int* cont p = new int;     // ���ܸı�ָ��ָ��ĵ�ַ
		// const int* cont p = new int;  // ���ܸı����ݣ�Ҳ�����޸�ָ��ָ��ĵ�ַ
		int* p = new int;
		*p = 12;
		p = (int*)&MAX_AGE;  //��ָ��ָ��һ������
		std::cout << *p << std::endl;

		std::cin.get();
		return 0;
	}
}