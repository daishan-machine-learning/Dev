#include<iostream>
enum Example : unsigned char  //ָ����������
{

	A,B,C
};

int main_enum() {

	Example a = B;  //enum �������ȡ��ֵֻ���Ƕ����еļ���
	if (a == B) {
		// do some thing 
	
	}
	std::cin.get();
	return 0;
}