#include<iostream>
using namespace std;

//��̳��﷨ class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2��

//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//
//};
//
//class son :public Base1,public Base2
//{
//public:
//	son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	son s;
//	cout << "size of son = " << sizeof(s) << endl;
//	//�������г�����ͬ���ĳ�Ա����Ҫ������������
//	cout << "m_A = " << s.Base2::m_A << endl;
//}
//
//int main()
//{
//	
//	test01();
//	system("pause");
//	return 0;
//}