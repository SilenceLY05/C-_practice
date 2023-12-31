#include<iostream>
using namespace std;

//访问子类同名成员 直接访问即可
//访问父类同名成员 需要加作用域

//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	int m_A;
//
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//};
//
//class son :public Base
//{
//public:
//	son()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//
//	void func()
//	{
//		cout << "son - func()调用" << endl;
//	}
//
//
//};
//
////同名成员属性处理方式
//void test01()
//{
//	son s;
//	cout << "son  m_A = " << s.m_A << endl;
//	cout << "Base m_A = " << s.Base::m_A << endl;//父类同名成员调用
//}
//
////同名成员函数处理方式
//void test02()
//{
//	son s;
//	
//	s.func();//直接调用 调用的是子类中的同名成员
//
//	//如何调用父类中的同名成员函数
//	s.Base::func();
//	
//	//如果子类中出现了和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员函数
//	//如果想反问道父类中被隐藏的同名成员函数 需要加作用域
//	s.Base::func(100);
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}