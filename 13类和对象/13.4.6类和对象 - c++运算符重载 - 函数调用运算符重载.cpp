#include<iostream>
using namespace std;
#include <string>

//函数调用运算符（）也可以重载，重载后使用方式非常像函数调用，称为仿函数

//class Myprint
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//};
//
//void test01()
//{
//	Myprint myprint;
//
//	myprint("hello world");//hello world传入 string test中的 test 后打印输出
//	
//
//}
//
////仿函数非常灵活，没有固定的写法
////加法类
//class Myadd
//{
//public:
//
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	Myadd myadd;
//	int ret = myadd(12, 20);
//	cout << "相加结果为：" << ret << endl;
//
//	//匿名函数对象
//	cout << Myadd()(100, 12) << endl;
//
//}
//
//int main()
//{
//
//	test02();
//	system("pause");
//	return 0;
//}