#include<iostream>
using namespace std;


//class person 
//{
//public:
//
//	person()
//	{
//		cout << "person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	person(int age)
//	{
//		m_age = age;
//		cout << "person���вι��캯������" << endl;
//	}
//
//	person(const person& p)
//	{
//		cout << "person�Ŀ������캯������" << endl;
//		m_age = p.m_age;
//	}
//
//	~person()
//	{
//		cout << "person��������������" << endl;
//	}
//
//	int m_age;
//};
//
////�������캯���ĵ���ʱ��
//
////1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������
//void test01()
//{
//	person p1(20);
//	person p2(p1);
//
//	cout << "p2�����䣺  " << p2.m_age << endl;
//}
//
////2��ֵ���ݵķ�ʽ��������ֵ
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
////3����ֵ�ķ�ʽ�����ؾֲ�����
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