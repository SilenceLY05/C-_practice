#include<iostream>
using namespace std;

//����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������

//class person
//{
//public:
//
//	person()
//	{
//		cout << "person�޲ι��캯������" << endl;
//	}
//
//	person(int age,int height)
//	{
//		m_age = age;
//		m_height = new int(height);
//		cout << "peron�вι��캯������" << endl;
//
//		
//	}
//
//	//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
//	person(const person& p)
//	{
//		cout << "person�������캯���ĵ���" << endl;
//		//m_height = p.m_height;  ������Ĭ��ʵ�־������д���
//		m_age = p.m_age;
//
//		//�������
//		m_height = new int(*p.m_height);
//	}
//
//
//	~person()
//	{
//		//�������룬�����������������ͷŲ���
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//
//		cout << "person������������" << endl;
//	}
//
//	//ǳ�������򵥵ĸ�ֵ��������
//
//	//������ڶ�����������ռ䣬���п�������
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
//	cout << "p1�����䣺" << p1.m_age << endl;
//	cout << "p1����ߣ�" << *p1.m_height << endl;
//
//	person p2(p1);
//	cout << "p2�����䣺" << p2.m_age << endl;
//	cout << "p2����ߣ�" << *p2.m_height << endl;
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