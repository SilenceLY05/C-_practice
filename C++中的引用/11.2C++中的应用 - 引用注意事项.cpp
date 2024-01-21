#include<iostream>
using namespace std;

//引用必须初始化，初始化后，不可以改变

int main1()
{
	int a = 10;
	//int& b;//错误，引用必须初始化
	int& b = a;

	int c = 20;
	b = c;//赋值操作 不是更改引用
	
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;

	system("pause");
	return 0;
}