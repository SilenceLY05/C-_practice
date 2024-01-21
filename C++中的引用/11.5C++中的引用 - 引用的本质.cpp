#include<iostream>
using namespace std;

//引用的本质：在C++内部实现一个指针常量

//发现是引用，转化为 int* const ref = &a;
void func(int& ref)
{
	ref = 100;//ref是引用，转化为*ref = 100；
}

int main4()
{
	int a = 10;

	//自动转化为int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可改
	int& ref = a;
	ref = 20;//内部发现ref是引用，自动帮我们转化为：*ref 20；

	cout << "a=" << a << endl;
	cout << "ref= " << ref << endl;

	func(a);

	system("pause");
	return 0;
}