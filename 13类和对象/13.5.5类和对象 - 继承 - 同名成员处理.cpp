#include<iostream>
using namespace std;

//��������ͬ����Ա ֱ�ӷ��ʼ���
//���ʸ���ͬ����Ա ��Ҫ��������

//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	int m_A;
//
//	void func()
//	{
//		cout << "Base - func()����" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)����" << endl;
//	}
//};
//
//class son :public Base
//{
//public:
//	son()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//
//	void func()
//	{
//		cout << "son - func()����" << endl;
//	}
//
//
//};
//
////ͬ����Ա���Դ���ʽ
//void test01()
//{
//	son s;
//	cout << "son  m_A = " << s.m_A << endl;
//	cout << "Base m_A = " << s.Base::m_A << endl;//����ͬ����Ա����
//}
//
////ͬ����Ա��������ʽ
//void test02()
//{
//	son s;
//	
//	s.func();//ֱ�ӵ��� ���õ��������е�ͬ����Ա
//
//	//��ε��ø����е�ͬ����Ա����
//	s.Base::func();
//	
//	//��������г����˺͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص����������е�ͬ����Ա����
//	//����뷴�ʵ������б����ص�ͬ����Ա���� ��Ҫ��������
//	s.Base::func(100);
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}