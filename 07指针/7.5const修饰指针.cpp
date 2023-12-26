#include<iostream>
using namespace std;

int main3()
{
	//const修饰的是指针 - 常量指针
	int a = 10;
	int b = 10;

	const int* p = &a;
	//指针指向的值不可以改，指针的指向可以改
	//*p = 19;错误 指针指向的值不可以改
	p = &b;//正确

	//const修饰的是常量 - 指针常量
	int* const p2 = &a;
	//指针指向的值可以改，指针的指向不可以改
	*p2 = 100;//正确
	//p2 = &b; 错误指针的指向不可以改

	//const修饰的是指针和常量
	const int* const p3 = &a;
	//*p3=b;
	//p3 = &b;


	system("pause");
	return 0;
}