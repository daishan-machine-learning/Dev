#include<iostream>
#include<string>
namespace Instantiate {
	// ��ʼ�����������ַ���:1.stack   2.heap   ˵���˾�������󵽵�ռ������Ŀռ䡣
	// stack�ϵĶ���������scope������ʱ�򣬾ͻ��Զ��ͷţ�heap�ϵĶ�����Ҫ�����ֶ��ͷ�,��ջ�ϴ���������ڶ��ϴ����������
	//��Ҫ��heap�ϴ������������:
	//1. ����̫��ջ�Ŀռ䱾���������Կ����޷����ض���
	//2. ������Ҫ������scope����
	using String = std::string;
	class Entity {
	private:
		String m_Name;
		char* name = new char[1024 * 1024 * 1024];  // ���ɶ����ݵ�ʱ�򣬻��ڶѵ��ײ���ס�ѵĴ�С���Ա�δ���ͷ�
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
		//�������ϣ�������Ķ����ܹ���scope��������Ǿ�Ӧ���ڶ��ϴ�������
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