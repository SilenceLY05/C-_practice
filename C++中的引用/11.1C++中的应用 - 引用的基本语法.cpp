#include<iostream>
using namespace std;

//引用的作用：给变量起别名
//语法：数据类型 &别名 = 原名

int main0()
{
	int a = 10;
	int& b = a;
	cout << a << endl;
	cout << b << endl;

	cout << (int)&a << endl;
	cout << (int)&b << endl;

	b = 20;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}