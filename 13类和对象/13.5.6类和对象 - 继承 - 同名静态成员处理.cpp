#include<iostream>
using namespace std;

//静态成员和非静态成员出现同名 处理方式一致

//访问子类同名成员 直接访问即可
//访问父类同名成员 需要加作用域

//class Base
//{
//public:
//
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base - static func()调用" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base - static func(int a)调用" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class son :public Base
//{
//public:
//
//	static int m_A;
//	static void func()
//	{
//		cout << "son - static func()调用" << endl;
//	}
//	
//};
//
//int son::m_A = 200;
//
////同名静态成员属性
//void test01()
//{
//	//1、通过对象访问数据
//	cout << "通过对象访问：" << endl;
//	son s;
//	cout << "son m_A = " << s.m_A << endl;
//	cout << "Base m_A = " << s.Base::m_A << endl;
//
//	//2、通过类名访问数据
//	cout << "通过类名访问：" << endl;
//	cout << "son m_A = " << son::m_A << endl;
//	//第一个::代表通过类名的方式访问 第二个::代表访问父类的作用域下
//	cout << "Base m_A = " << son::Base::m_A << endl;
//
//}
//
////同名静态成员函数
//void test02()
//{
//	//1、通过对象访问数据
//	cout << "通过对象访问：" << endl;
//	son s;
//	s.func();
//	s.Base::func();
//	//2、通过类名访问数据
//	cout << "通过类名访问：" << endl;
//	son::Base::func();
//	son::func();
//
//	//子类出现和父类同名静态成员函数，也会隐藏父类中所有的同名成员函数 如果想访问父类中被隐藏的同名成员 需要加作用域
//	son::Base::func(100);
//}
//
//
//int main()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}