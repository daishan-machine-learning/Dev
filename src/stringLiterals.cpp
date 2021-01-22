#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std::string_literals;
int main_stringliterals() {
	
	std::u32string name0 = U"Hello"s + U"World";  //后面加上s相当于定义了string


	//char name[] = "Cherno";  // "Cherno"还是在read-only内存上，但是我们创建了name变量，并将"CHerno"拷贝到了name里面
	const char* name = "Cherno";
	std::cout << name << std::endl;

	const char* example = R"(line1    //可以方便的写多行内容
line2  
line4)";
	const char* ex = "nice\n"
		"world\n"
		"hello\n";
	std::cout << ex << std::endl;
	std::cout << example << std::endl;
	const wchar_t* name2 = L"Cherno";  // wchar_t 的大小由编译器决定，windows是2字节，linux是4字节
	const char16_t* name3 = u"CHerno";
	const char32_t* name4 = U"Cherno";
	std::cin.get();
	return 0;
}