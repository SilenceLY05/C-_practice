#include<iostream>
using namespace std;

//class person
//{
//public:
//	person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//���ظ�ֵ�����
//	person& operator=(person& p)
//	{
//		//�������ṩ��ǳ����
//		//m_Age = p.m_Age;
//
//
//		//Ӧ�����ж��Ƿ��������ڶ���������Ӧ���ͷŸɾ���Ȼ�������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		m_Age = new int(*p.m_Age);//�������
//
//		//���ض�����
//		return *this;
//	}
//
//	int* m_Age;
//
//private:
//
//};
//
//void test01()
//{
//	person p1(18);
//	person p2(20);
//
//	person p3(30);
//
//	p3 = p2 = p1;//��ֵ�������
//	
//
//	cout << "p1������Ϊ��  " << *p1.m_Age << endl;
//	cout << "p2������Ϊ��  " << *p2.m_Age << endl;
//	cout << "p3������Ϊ��  " << *p3.m_Age << endl;
//
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}