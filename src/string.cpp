#include<iostream>
#include<string>
#include<boost\bind.hpp>
#include<exception>
namespace String {
	void PrintString(const std::string& string) {
		std::cout << string << std::endl;
	}
	//class Hello {
	//public:
	//	void say(std::string name){
	//	std::cout << name << " say :hello,world!" << std::endl;
	//	}
	//};
	int f(int a, int b) {

		return a + b;
	}
	int main() {
		std::string name = "cherno"; // ��׼��c����ַ�������cherno���ǹ̶����ַ��������ܱ��޸ģ����Ա��븳ֵ��const char*
		name += ",Hello";
		//bool contains = name.find("no") != std::string::npos; // �ҵ�ĳ������
		PrintString(name);
		std::string test = "���ѽ";
		char c;
		try {
			c = test.at(10);  //at �б߽��飬���Խ�磬�ͻᱨ�쳣����ȫ�Ը���
		}
		catch (std::exception e) {

			std::cerr << "Խ���쳣��" << e.what() << std::endl;
		}
		test.assign("Hello,world");
		//c = test[10];  //operatorû��Խ����
		//Hello h;
		//auto func = boost::bind(&Hello::say,&h,"zhangsan");
		//func();
		c = test.back();
		std::cout << test.max_size() << std::endl;  //����max_size()�Ǹ��ݲ���ϵͳ��ͬ�ģ�32λ����20��
		test.resize(5);  // ����ռ䣬С�˽ضϣ�������չ
		test.reserve(20);  // Ԥ���㹻�Ŀռ䣬����(n*16-1)��ԭ��
		std::cout << test << std::endl;

		// operation
		test.clear();
		test.assign("Hello,World");
		test.push_back('!');
		test.insert(test.begin() + 5, 'a');
		test.erase(test.begin() + 5);
		bool start = test.starts_with("Hello");
		bool end = test.ends_with("!");
		test.append("nice");
		std::cout << test.capacity() << std::endl;
		test.replace(test.begin(), test.begin() + 5, "good");
		std::string sub_str = test.substr(5, 5);
		std::string world = "  world";
		test.swap(world);
		int pos = test.find_first_not_of(" ");
		std::string num = "12.3nice";
		float i = std::stof(num);
		std::string s = std::to_string(233.3);
		for (auto i = test.begin(); i != test.end(); i++) {
			std::cout << *i << std::endl;
		}
		std::cin.get();
		return 0;
	}
}