#include<iostream>
using namespace std;

////静态成员就是在	成员变量和成员函数前加上关键字static，称为静态成员
//
//class person
//{
//public:
//
//	//1、所有对象都共享同一份数据   2、在编译阶段就分配了内存   3、类内声明，类外初始化操作
//	static int m_A;
//
//	//静态成员变量也是有访问权限的
//private:
//	static int m_B;
//
//};
//
//int person :: m_A = 100;
//int person :: m_B = 200;
//
//
////void test01()
////{
////	person p;
////	cout << p.m_A << endl;
////
////	person p2;
////	p2.m_A = 200;
////	cout << p2.m_A << endl;
////}
//
//void test02()
//{
//	//静态成员变量不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//	//1、通过对象进行访问
//	//person p;
//	//cout << p.m_A << endl;
//	
//	//2、通过类名进行访问
//	cout << person::m_A << endl;
//	//cout << person::m_B << endl;类外访问不到私有静态成员变量
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}

//class person
//{
//public:
//	//静态成员函数
//	static void func()
//	{
//		m_A = 100;//静态成员函数可以访问 静态成员变量
//		//m_B = 200;静态成员函数不可以访问非静态成员变量  无法区分到底是哪个对象的m_B属性
//		cout << "static void func调用" << endl;
//	}
//
//	static int m_A;//静态成员变量
//	int m_B;//非静态成员变量
//
//	//静态成员函数也是有访问权限的
//private:
//	static void func2()
//	{
//		cout << "static void func2调用" << endl;
//	}
//};
//
//int person::m_A = 0;
//
////有两种访问方式
//
//void test01()
//{
//	//1、通过对象访问
//	person p;
//	p.func();
//
//	//2、通过类名访问
//	person::func();
//
//	//person::func2();类外访问不到私有静态成员函数
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}