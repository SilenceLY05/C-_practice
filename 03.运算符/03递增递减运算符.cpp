#include<iostream>
using namespace std;

int main3()
{
	////1、前置递增
	//int a = 12;
	//++a;
	//cout << "a=" << a << endl;
	////2、后置递增
	//int b = 12;
	//b++;
	//cout << "b=" << b << endl;
	//3、前置和后置
	//前置递增 先让变量+1，再进行表达式的运算；后置递增 先进行表达式的运算再让变量+1
	int a1 = 10;
	int b1 = a1++ *10;

	cout << "a1=" << a1 << endl;
	
	cout << "b1=" << b1 << endl;

	system("pause");
	return 0;
}