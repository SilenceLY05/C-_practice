#include<iostream>
using namespace std;

//�̳з�ʽһ��������


//˽�м̳�

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
////�����̳�
//
//class son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�������������������ǹ���Ȩ������
//		m_B = 20;//�����еı���Ȩ�������������������Ǳ���Ȩ������
//		//m_C = 30;//�����е�˽��Ȩ�޳�Ա�������з��ʲ���
//	}
//
//};
//
////�����̳�
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
//		m_A = 10;//�����й�����Ա�������б�Ϊ����Ȩ��
//		m_B = 10;//�����б���Ȩ�������������б�Ϊ����Ȩ������
//		m_C = 10;//������ʲ���
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
//		m_A = 10;//�����й�����Ա�������б�Ϊ˽�г�Ա
//		m_B = 100;//�����б�����Ա�������б�Ϊ˽�г�Ա
//		//m_C = 100;//������˽�г�Ա ������ʲ���
//	}
//
//};
//
//void test01()
//{
//	son1 s1;
//	s1.m_A = 100;
//	s1.m_B = 100;//��son1�� m_B�Ǳ���Ȩ�� ������ʲ���
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
//	//s1.m_A = 100;//��son2�� m_A��Ϊ����Ȩ�� ������ʲ���
//	//s1.m_B = 100;//��son2�� m_B�Ǳ���Ȩ�� ������ʲ���
//}
//
//void test03()
//{
//	son3 s1;
//	//s1.m_A = 100;//��son3�� m_A��Ϊ˽��Ȩ�� ������ʲ���
//	//s1.m_B = 100;//��son3�� m_B��˽��Ȩ�� ������ʲ���
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}