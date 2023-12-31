#include<iostream>
using namespace std;

//继承方式一共有三种


//私有继承

//class Base1
//{
//public:
//	int m_A;
//
//protected:
//	int m_B;
//
//private:
//	int m_C;
//
//};
//
////公共继承
//
//class son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中的公共权限内容在子类中依旧是公共权限内容
//		m_B = 20;//父类中的保护权限内容在子类中依旧是保护权限内容
//		//m_C = 30;//父类中的私有权限成员在子类中访问不到
//	}
//
//};
//
////保护继承
//class Base2
//{
//public:
//	int m_A;
//
//protected:
//	int m_B;
//
//private:
//	int m_C;
//
//};
//
//class son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中公共成员到子类中变为保护权限
//		m_B = 10;//父类中保护权限内容在子类中变为保护权限内容
//		m_C = 10;//子类访问不到
//	}
//
//
//};
//
//
//class Base3
//{
//public:
//	int m_A;
//
//protected:
//	int m_B;
//
//private:
//	int m_C;
//
//};
//
//class son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 10;//父类中公共成员到子类中变为私有成员
//		m_B = 100;//父类中保护成员到子类中变为私有成员
//		//m_C = 100;//父类中私有成员 子类访问不到
//	}
//
//};
//
//void test01()
//{
//	son1 s1;
//	s1.m_A = 100;
//	s1.m_B = 100;//到son1中 m_B是保护权限 类外访问不到
//}
//
//class GrandSon3 :public son3
//{
//public:
//	void func()
//	{
//		//m_A = 100;
//		//m_B = 100;
//		//m_C = 100;
//	}
//};
//
//void test02()
//{
//	son2 s1;
//	//s1.m_A = 100;//到son2中 m_A变为保护权限 类外访问不到
//	//s1.m_B = 100;//到son2中 m_B是保护权限 类外访问不到
//}
//
//void test03()
//{
//	son3 s1;
//	//s1.m_A = 100;//到son3中 m_A变为私有权限 类外访问不到
//	//s1.m_B = 100;//到son3中 m_B是私有权限 类外访问不到
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}