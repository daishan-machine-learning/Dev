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
		Entity()     // ��ʼ���б���Ӧ��ע��ľ���������ˣ���������û��Ĭ�Ϲ��캯���������Ǳ����ڳ�ʼ���б��н����ʼ��������У���ô���Բ��������ڸ�ֵ�ķ���
			:m_Name("UnKnown"), x(100), m_score(x), example(10) //��ʼ���б�ע�⣬��ʼ����˳���ǰ������Ƕ�����Щ������˳�򣬶����ǳ�ʼ�б��˳�򣬵�������Ӧ�ð��ն����˳������ʼ����������Ȼ����������������
		{
			//m_Name = "UnKnown";   //�����������m_Name����ʼ�����Σ�һ����string��Ĭ�Ϲ��캯������һ���Ǹ���Unknown����string��Ȼ���丳ֵ��m_Name
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