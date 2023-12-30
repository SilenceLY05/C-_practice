#include<iostream>
using namespace std;

//C++中，函数的形参列表中的形参可以有默认值
//语法：返回值类型 函数名 （参数 = 默认值）{}


//如果自己传入了数据，就用自己的数据，如果没有用默认值
int func(int a, int b = 10, int c = 20)
{
	return a + b + c;
}

//注意事项：1、如果某个位置已经有了默认参数，那么从这个位置往后从左到右都必须有默认值
//int func2(int a, int b = 10, int c)
//{
//	return a + b + c;
//}

//2、如果函数的声明有了默认参数，函数实现就不能有默认参数
//声明和实现只能有一个有默认参数
//int func3(int a = 10, int b = 10);




int main0()
{
	cout << func(10) << endl;
	cout << func(10,30) << endl;

	//cout << func2(10) << endl;

	//cout << func3(10, 10) << endl;

	system("pause");
	return 0;
}

//int func3(int a =10, int b = 10)
//{
//	return a + b;
//}