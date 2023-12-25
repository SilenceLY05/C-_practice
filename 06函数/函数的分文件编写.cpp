#include<iostream>
using namespace std;
#include"swap.h"

//函数的分文件编写：让代码结构更加清晰

//实现两个数字交换的函数
//函数的声明
//void swap(int a, int b);
////函数的定义
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}

//函数份文件编写可分为4个步骤：
// 1、创建后缀名为.h的头文件
//2、创建后缀名为.cpp的源文件
//3、在头文件中写函数的声明
// 4、在源文件中写函数的定义

int main()
{
	int a = 110;
	int b = 19;
	swap(a, b);
	system("pause");
	return 0;
}