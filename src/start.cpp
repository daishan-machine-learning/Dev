#include<iostream>  // Ԥ������䣬include���ֻ�ǰ�iostream�е�����copy����ǰ�ļ�
#include"Log.h"

// void log(const char* message);

  // ����
//static ��������ʾ�ú���ֻ�ڵ�ǰ�ļ�/translation unit��Χ��ʹ��
static int Multiply(int a, int b) {
	Log("Hello,World!");
	return a * b;
}
// main�����ǲ���Ҫreturn�ģ������return���ͻ᷵��0

int main1() {
	//char ,short ,int,long,long long �����������������
	short a = 65;
	std::cout << a << std::endl;
	unsigned int variable = 8;// signed int -2b -> 2b
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;
	float var = 5.5f;
	double var1 = 5.2;
	bool t = true;
	std::cout << t << std::endl;
	std::cout << sizeof(double) << std::endl;
	//std::cout << "hello,world!" << std::endl;  // <<����������д�ĺ���
	//std::cout << multiply(2, 5) << std::endl;  
	//std::cin.get();  // �ȴ�enter�ַ�
	std::cin.get();
	return 0;
}
int main2() {
	// function
	//ʵ���ϴ�x=6��ʼ����std::cin.get()֮��Ĵ��룬�����ڱ����ʱ��ȥ������Ϊconstant folding�Ĵ���
	//���ǿ��Ա��Ż��Ĵ���
	/*int x = 6;
	const char* message = "Hello";*/
	//if (message == "hello") {
	//	log(message);
	//}
	//else if(message){   // c++�в�������ν��else if �ؼ��ʣ�ֻ��else and if
	//	log("message is not null");
	//}
	//else {
	//	log("message is null");
	//}

	// ѭ�� for(initial;conditions;increment)
	for (int i = 0; i < 5; ++i) {
		if (i % 2 == 0)
			continue;
		Log("Hello,World!!");
		std::cout << i << std::endl;
		continue;   //continueֻ������loop�У�������˼�ǲ�ִ����������ݣ�ֱ��������һ��ѭ��
	}
	Log("=========================");
	int i = 0;
	while (i < 5) {
		Log("Hello,World!");
		if (i > 2)
			break; // ֱ������ѭ��
		++i;
	}
	Log("=========================");
	//do-while ����ִ��һ��
	i = 0;
	do {
		Log("Hello,World!!");
		i++;
	} while (i < 5);

	std::cin.get();
	return 0;
}
#define LOG(x) std::cout<<x<<std::endl;

int main3(){
	int var = 8;
	int* ptr = &var; // nullptr����0����0��ַ�ǷǷ��ģ����ܶ�����д
	*ptr = 10; // *ptr���Ƿ���ptr�洢�ĵ�ַ�е��ڴ����˼��int��ʾ����Ҫ���ʵ���4�ֽ�
	LOG(var)
	char* buff = new char[8]; //allocate 8bytes
	memset(buff, 0, 8); // �Է���Ŀռ丳ֵ
	char** pptr = &buff;  //����ָ��

	
	delete[] buff; // ���ڴ�ռ����
	std::cin.get();
	return 0;
}
void Increment(int& value) {
	value++;
}
int main4() {
	//reference :������ָ�������
	//���ú�ָ��Ĳ�ͬ�����ñ���ָ��һ���Ѿ����ڵĶ��󣬶�������reference�Ǳ����ı��������ԣ�ֻ�ܳ�ʼ��һ�Σ������ڶ�����������ʼ���ˡ�
	int a = 5;
	int& ra = a;
	ra = 10;
	Increment(a);
	LOG(a);
	std::cin.get();
	return 0;
}