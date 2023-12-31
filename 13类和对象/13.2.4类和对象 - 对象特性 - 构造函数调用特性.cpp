#include<iostream>
using namespace std;

//构造函数的调用规则

//1、创建一个类C++编译器会给每个类添加至少3个函数
//默认构造（空实现）

//析构函数（空实现）

//拷贝构造（值拷贝）

//2、如果我们写了有参构造函数 编译器就不再提供默认构造依然提供拷贝构造
//如果我们写了拷贝构造函数 编译器就不提供其他构造函数


//
//class person
//{
//public:
//	/*person()
//	{
//		cout << "person的默认构造函数调用" << endl;
//	}*/
//
//	//person(int age)
//	//{
//	//	cout << "person的有参构造函数调用" << endl;
//	//	m_age = age;
//	//}
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
//
//
//};

//void test01()
//{
//	person p(28);
//	p.m_age = 18;
//
//	person p2(p);
//
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}

//void test02()
//{
//	person p;
//	
//	
//
//}

//int main11()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}