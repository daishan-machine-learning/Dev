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
		std::string name = "cherno"; // 标准的c风格字符串，“cherno“是固定的字符串，不能被修改，所以必须赋值给const char*
		name += ",Hello";
		//bool contains = name.find("no") != std::string::npos; // 找到某个内容
		PrintString(name);
		std::string test = "你好呀";
		char c;
		try {
			c = test.at(10);  //at 有边界检查，如果越界，就会报异常，安全性更高
		}
		catch (std::exception e) {

			std::cerr << "越界异常：" << e.what() << std::endl;
		}
		test.assign("Hello,world");
		//c = test[10];  //operator没有越界检查
		//Hello h;
		//auto func = boost::bind(&Hello::say,&h,"zhangsan");
		//func();
		c = test.back();
		std::cout << test.max_size() << std::endl;  //这里max_size()是根据操作系统不同的，32位就是20亿
		test.resize(5);  // 分配空间，小了截断，大了拓展
		test.reserve(20);  // 预留足够的空间，按照(n*16-1)的原则
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