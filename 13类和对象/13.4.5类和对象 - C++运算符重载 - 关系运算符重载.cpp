#include<iostream>
using namespace std;

//class person
//{
//public:
//	person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//
//	}
//
//	//重载关系运算符 ==
//	bool operator==(person &p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	bool operator!=(person& p)
//	{
//		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_Name;
//	int m_Age;
//	
//};
//
//void test01()
//{
//	person p1("tom", 18);
//
//	person p2("tom", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1 和 p2是相等 " << endl;
//	}
//	else
//	{
//		cout << "p1 和 p2是不等 " << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1 和 p2是不相等 " << endl;
//	}
//	else
//	{
//		cout << "p1 和 p2是相等 " << endl;
//	}
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