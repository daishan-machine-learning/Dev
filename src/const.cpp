#include<iostream>
namespace Const {
	class Entity {
	private:
		float* x, * y;  // 如果通过,连续声明变量，要注意指针的连续声明每个变量前需加上*
		mutable float  var;  // mutable修饰的变量，即使在const函数中也依然可以修改
	public:
		float* getX()const {  //1.传入的对象是 Entity* const this,函数加上const之后是 const Entity* const this; 2.const对象只能调用const函数
			var = 100;
			return x;

		}
		/*void setX(float x) {
			this->x = x;
		}*/
	};

	void  printFunction(const Entity& e) {  //e是const对象，只能调用const函数
		//e = nullptr;  // cosnt Entity* e,我们可以把指针设为空

		std::cout << e.getX() << std::endl;
	}
	int main_const() {
		const int MAX_AGE = 90;  // 声明了一个常量

		// 指针 1.修改指向地址里面的内容   2.修改指针指向的地址
		//const修饰指针的两种做法，1.const 在*前面，修饰内容  2.const在*后面，修饰指针本身
		//const int*  p = new int;   // 不能修改内容
		//int* cont p = new int;     // 不能改变指针指向的地址
		// const int* cont p = new int;  // 不能改变内容，也不能修改指针指向的地址
		int* p = new int;
		*p = 12;
		p = (int*)&MAX_AGE;  //把指针指向一个常量
		std::cout << *p << std::endl;

		std::cin.get();
		return 0;
	}
}