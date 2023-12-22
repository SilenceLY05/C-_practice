#include<iostream>
using namespace std;

int main6()
{
	//三目运算符

	//创建三个变量 a b c			
	//讲a和b做比较，讲变量大的值赋值给c

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "请输入A的变量值：" << endl;
	cin >> a;

	cout << "请输入B的变量值：" << endl;
	cin >> b;

	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	//在C++中三目运算符返回的是变量，可以继续赋值
	cout << "可对c继续进行赋值："  << endl;
	cin >> (a > b ? a : b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}