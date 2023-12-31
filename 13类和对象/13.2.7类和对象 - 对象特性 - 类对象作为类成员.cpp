#include<iostream>
using namespace std;
#include <string>

//C++类中的成员可以是另外一个类的对象，我们称该成员为对象成员
//手机类
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		cout << "Phone的构造函数调用" << endl;
//		m_PName = pName; 
//		
//
//	}
//
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//	//手机品牌名称
//	string m_PName;
//
//};
//
////人类
//class person
//{
//public:
//
//	//Phone m_Phone = pName; 隐式转换法
//	person(string name, string pName):m_Name(name),m_Phone(pName)
//	{
//		cout << "person的构造函数调用" << endl;
//	}
//
//	~person()
//	{
//		cout << "person的析构函数调用" << endl;
//	}
//
//	//姓名
//	string m_Name;
//	//手机
//	Phone m_Phone;
//};
//
////当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构的顺序与构造相反
//
//void test01()
//{
//	person p("张三", "苹果");
//	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
//}
//
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}