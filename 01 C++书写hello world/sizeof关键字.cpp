#include<iostream>
using namespace std;

int main3()
{
	// 整形：short(2) in(4) long(4)   long long(8)
	//可以利用sizeof求出数据类型占用内存大小
	//语法：sizeof(数据类型/变量)

	short num1 = 10;
	
	cout << "short占用内存空间为: " << sizeof(num1) << endl;

	int num2 = 19;
	cout << "int占用内存空间为: " << sizeof(num2) << endl;

	long num3 = 12;
	cout << "long占用内存空间为: " << sizeof(num3) << endl;

	long long num4 = 12;
	cout << "long long占用内存空间为: " << sizeof(num4) << endl;
	system("pause");

	return 0;

}