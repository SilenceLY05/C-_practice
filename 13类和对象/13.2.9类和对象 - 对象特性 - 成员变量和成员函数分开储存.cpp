#include<iostream>
using namespace std;

//在C++中，类内的成员变量和成员函数分开存储   只有非静态成员变量才属于类的对象上

//class person
//{
//
//
//	int m_A;//非静态成员变量  属于类的对象上的
//
//
//	static int m_B;//静态成员变量 不属于类对象上
//
//	void func(){}//非静态成员函数  不属于类的对象上
//
//	static void func2() {}//静态成员函数  不属于类的对象上
//};
//
//int person::m_B = 0;
//
//void test01()
//{
//	person p;
//	//空对象占用内存空间为：1
//	//C++编译器会给每个空对象分配一个字节的空间是为了区分空对象占内存的位置
//	//每个空对象也应该有个独一无二的内存地址
//
//	cout << "sizeof p=" << sizeof(p) << endl;
//}
//
//void test02()
//{
//	person p;
//	cout << "sizeof p=" << sizeof(p) << endl;
//}
//
//int main()
//{
//
//
//	//test01();
//	test02();
//	
//	system("pause");
//	return 0;
//}