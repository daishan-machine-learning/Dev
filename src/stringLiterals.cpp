#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std::string_literals;
int main_stringliterals() {
	
	std::u32string name0 = U"Hello"s + U"World";  //�������s�൱�ڶ�����string


	//char name[] = "Cherno";  // "Cherno"������read-only�ڴ��ϣ��������Ǵ�����name����������"CHerno"��������name����
	const char* name = "Cherno";
	std::cout << name << std::endl;

	const char* example = R"(line1    //���Է����д��������
line2  
line4)";
	const char* ex = "nice\n"
		"world\n"
		"hello\n";
	std::cout << ex << std::endl;
	std::cout << example << std::endl;
	const wchar_t* name2 = L"Cherno";  // wchar_t �Ĵ�С�ɱ�����������windows��2�ֽڣ�linux��4�ֽ�
	const char16_t* name3 = u"CHerno";
	const char32_t* name4 = U"Cherno";
	std::cin.get();
	return 0;
}