#include <iostream>
using namespace std;


////函数的默认参数：函数的形参列表中的形参是可以有默认值的
////如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值
//int func(int a, int b = 10, int c = 10)
//{
//	return a + b + c;
//}
//
//
////如果某个位置形参有默认值，那么从这个位置往后，从左到右必须都要有默认值
////如果函数声明有默认值，函数实现的时候就不能有默认参数,声明和实现只能有一个有默认参数
//int func2(int a = 20, int b = 10);
//
//int func2(int a = 10, int b = 20)
//{
//	return a + b;
//}
//
//int main()
//{
//	int ref = func(10, 20);
//	cout << ref << endl;
//
//	system("pause");
//	return 0;
//}


////函数占位参数：函数的形参列表里可以有占位参数，用来做占位，调用函数时，必须填补该位置
////占位参数还可以有默认参数
////语法：返回值类型 函数名（数据类型）{}
//
//void func(int a, int = 10)
//{
//	cout << "this is func" << endl;
//}
//
//
//int main()
//{
//	func(10);  //占位参数必须填补,如果占位参数有默认值，则不需要填补
//
//	system("pause");
//	return 0;
//}


////函数重载概述：函数名可以相同，提高复用性
////函数重载满足条件：同一个作用域下，函数名称相同，函数参数类型不同或者个数不同或者顺序不同
////注：函数的返回值不可以作为函数重载的条件
//
//
////在同一个作用域下
//void func(int a, int b)
//{
//	cout << "func1的调用" << endl;
//}
//
//void func(int a, int b,int c)
//{
//	cout << "func2的调用" << endl;
//}
//
//int main()
//{
//	func(1, 2, 3);
//
//	system("pause");
//	return 0;
//}


//函数重载引用注意事项：引用作为重载条件   
void func(int& a) //int &a = 10;不能通过，不合法的
{
	cout << "func(int&a)调用" << endl;
}


void func(const int& a) //const int&a = 10;合法
{
	cout << "func(const int&a)调用" << endl;
}



//函数重载碰到函数默认参数
void func2(int a,int b = 10)
{
	cout << "func2(int a,int b)" << endl;
}

void func2(int a)
{
	cout << "func2(int a)" << endl;
}


int main()
{
	//int a = 10;
	//func(a);

	//func(10);
	func2(10);//当函数重载碰到默认参数，出现二义性,报错，尽量避免这种情况

	system("pause");
	return 0;
}