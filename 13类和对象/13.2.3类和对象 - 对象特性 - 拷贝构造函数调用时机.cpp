#include<iostream>
using namespace std;


//class person 
//{
//public:
//
//	person()
//	{
//		cout << "person的默认构造函数调用" << endl;
//	}
//
//	person(int age)
//	{
//		m_age = age;
//		cout << "person的有参构造函数调用" << endl;
//	}
//
//	person(const person& p)
//	{
//		cout << "person的拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//	}
//
//	~person()
//	{
//		cout << "person的析构函数调用" << endl;
//	}
//
//	int m_age;
//};
//
////拷贝构造函数的调用时机
//
////1、使用一个已经创建完毕的对象来初始化一个对象
//void test01()
//{
//	person p1(20);
//	person p2(p1);
//
//	cout << "p2的年龄：  " << p2.m_age << endl;
//}
//
////2、值传递的方式给函数传值
//
//void doWork(person p)
//{
//
//}
//
//void test02()
//{
//	person p;
//	doWork(p); 
//}
//
////3、用值的方式来返回局部对象
//
//person doWork2()
//{
//	person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	person p = doWork2();
//	cout << (int*)&p << endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}