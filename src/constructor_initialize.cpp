#include<iostream>
#include<string>
namespace Initialize {
	class Example {
	public:
		/*Example() {
			std::cout << "Example Constructor" << std::endl;
		}*/

		Example(int x) {
			std::cout << "Example:" << x << std::endl;
		}

	};
	// initialize list
	class Entity {
	private:
		int m_score;
		int x;
		std::string m_Name;
		Example example;
	public:
		Entity()     // 初始化列表最应该注意的就是类对象了，如果类对象没有默认构造函数，那我们必须在初始化列表中将其初始化，如果有，那么可以采用在类内赋值的方法
			:m_Name("UnKnown"), x(100), m_score(x), example(10) //初始化列表，注意，初始化的顺序是按照我们定义这些变量的顺序，而不是初始列表的顺序，但是我们应该按照定义的顺序，来初始化变量，不然可能引起依赖问题
		{
			//m_Name = "UnKnown";   //这个操作导致m_Name被初始化两次，一次是string的默认构造函数，另一次是根据Unknown产生string，然后将其赋值给m_Name
		}

		Entity(std::string& name)
			:m_Name(name), example(12)
		{
			//m_Name = name;
		}
		const std::string& GetName()const {
			return m_Name;
		}
	};

	int main() {
		std::string name = "cherno";
		Entity e(name);
		std::cout << e.GetName() << std::endl;
		std::cin.get();
		return 0;
	}
}