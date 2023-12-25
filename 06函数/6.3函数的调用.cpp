#include<iostream>
using namespace std;

//定义加法函数
//函数定义到时候，num1和num2并没有真实数据，只是一个形式上的参数 简称形参
int add1(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main1()
{
	//main函数中调用add函数
	int a = 10;
	int b = 10;

	//函数调用的语法：函数名称（参数）
	//a和b称为实际参数 简称实参
	//当调用函数的时候，实参的值会传递给形参
	int c =add1(a, b);
	cout << "c= " << c << endl;

	system("pause");
	return 0;
}