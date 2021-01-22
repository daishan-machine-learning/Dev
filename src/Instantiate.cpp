#include<iostream>
#include<string>
namespace Instantiate {
	// 初始化对象有两种方法:1.stack   2.heap   说白了就是类对象到底占了哪里的空间。
	// stack上的对象，在整个scope结束的时候，就会自动释放，heap上的对象需要我们手动释放,在栈上创建对象比在堆上创建对象更快
	//需要在heap上创建对象的理由:
	//1. 对象太大，栈的空间本身并不大，所以可能无法承载对象
	//2. 我们需要对象在scope外存活
	using String = std::string;
	class Entity {
	private:
		String m_Name;
		char* name = new char[1024 * 1024 * 1024];  // 生成堆数据的时候，会在堆的首部记住堆的大小，以便未来释放
	public:
		Entity() :m_Name("Unkown") {}
		Entity(const String& name) { m_Name = name; }
		const String& GetName()const { return m_Name; }
		~Entity() {

			delete[] name;
		}
	};

	int main_Instantiate() {

		// instantiate
		Entity e = Entity("Cherno");
		//std::cout << e.GetName() << std::endl;	
		//如果我们希望创建的对象能够在scope外存活，那我们就应该在堆上创建对象
		Entity* pe;
		{
			Entity instance;
			pe = &instance;

		}
		std::cout << pe->GetName() << std::endl;
		std::cin.get();
		return 0;
	}
}