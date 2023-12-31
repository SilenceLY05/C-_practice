#include<iostream>
using namespace std;

//成员函数后加const称为常函数
//声明对象前加const称为常对象 

//class person
//{
//public:
//
//	//this指针的本质是指针常量 指针的指向是不可以修改的
//	//const person* const this;
//	//在成员函数后面加const，修饰的是this指针，让指针指向的值也不可以修改
//	void showPerson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this  = NULL; this 指针不可以修改指针的指向
//	}
//
//	void func()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中也可以修饰这个值,加关键字 mutable
//
//};
//
//void test01()
//{
//	person p;
//	p.showPerson();
//}
//
////常对象
//void test02()
//{
//	const person p;//在对象前加const，变为常对象
//	//p.m_A = 100;
//	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}