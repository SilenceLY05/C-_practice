#include<iostream>
using namespace std;

//如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题

//class person
//{
//public:
//
//	person()
//	{
//		cout << "person无参构造函数调用" << endl;
//	}
//
//	person(int age,int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "peron有参构造函数调用" << endl;
//
//		
//	}
//
//	//自己实现拷贝构造函数 解决浅拷贝带来的问题
//	person(const person& p)
//	{
//		cout << "person拷贝构造函数的调用" << endl;
//		//m_height = p.m_height;  编译器默认实现就是这行代码
//		m_age = p.m_age;
//
//		//深拷贝操作
//		m_height = new int(*p.m_height);
//	}
//
//
//	~person()
//	{
//		//析构代码，将堆区开辟数据做释放操作
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//
//		cout << "person析构函数调用" << endl;
//	}
//
//	//浅拷贝：简单的赋值拷贝操作
//
//	//深拷贝：在堆区重新申请空间，进行拷贝操作
//
//
//	int m_age;
//	int* m_height;
//};
//
//
//void test01()
//{
//	person p1(18,177);
//	cout << "p1的年龄：" << p1.m_age << endl;
//	cout << "p1的身高：" << *p1.m_height << endl;
//
//	person p2(p1);
//	cout << "p2的年龄：" << p2.m_age << endl;
//	cout << "p2的身高：" << *p2.m_height << endl;
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}