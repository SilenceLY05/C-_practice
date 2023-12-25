#include<iostream>
using namespace std;

// 函数声明：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义
//函数的声明可以多次，但是函数的定义只有一次
//比较函数，实现两个整形数字进行比较，返回较大的值

//提前告诉编译器函数存在，可以利用函数的声明
//函数的声明
int max(int a, int b);

int main4()
{
	int a = 10;
	int b = 3;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

//定义函数
int max(int a, int b)
{
	return a > b ? a : b;
}