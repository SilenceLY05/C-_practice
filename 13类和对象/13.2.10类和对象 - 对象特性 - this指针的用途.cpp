#include<iostream>
using namespace std;

//用途：1、当形参和成员变量同名时，可用this指针来区分

//2、在类的非静态成员中返回对象本身，可用return *this	

//class person
//{
//public:
//	person(int age)
//	{
//		//this指针指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	person& personaddage(person& p)
//	{
//		this->age += p.age;
//
//		//this 指向P2的指针，*this指向的是p2 这个对象的本体
//		return *this;
//	}
//	int age;
//
//};
//
//void test01()
//{
//	person p1(19);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
//void test02()
//{
//	person p1(10);
//	person p2(20);
//
//	//链式编程思想 
//	p2.personaddage (p1).personaddage(p1). personaddage(p1);
//	cout << "p2的年龄为：" << p2.age << endl;
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