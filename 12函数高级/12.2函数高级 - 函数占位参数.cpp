#include<iostream>
using namespace std;

//C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法：返回值类型 函数名（数据类型）{}
//占位参数 还可以有默认参数

void func(int a, int )
{
	cout << "this is func" << endl;
}


int main1()
{
	func(10,10);

	system("pause");
	return 0;
}