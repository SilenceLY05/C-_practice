#include<iostream>
using namespace std;

//��̬��Ա�ͷǾ�̬��Ա����ͬ�� ����ʽһ��

//��������ͬ����Ա ֱ�ӷ��ʼ���
//���ʸ���ͬ����Ա ��Ҫ��������

//class Base
//{
//public:
//
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base - static func()����" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base - static func(int a)����" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class son :public Base
//{
//public:
//
//	static int m_A;
//	static void func()
//	{
//		cout << "son - static func()����" << endl;
//	}
//	
//};
//
//int son::m_A = 200;
//
////ͬ����̬��Ա����
//void test01()
//{
//	//1��ͨ�������������
//	cout << "ͨ��������ʣ�" << endl;
//	son s;
//	cout << "son m_A = " << s.m_A << endl;
//	cout << "Base m_A = " << s.Base::m_A << endl;
//
//	//2��ͨ��������������
//	cout << "ͨ���������ʣ�" << endl;
//	cout << "son m_A = " << son::m_A << endl;
//	//��һ��::����ͨ�������ķ�ʽ���� �ڶ���::������ʸ������������
//	cout << "Base m_A = " << son::Base::m_A << endl;
//
//}
//
////ͬ����̬��Ա����
//void test02()
//{
//	//1��ͨ�������������
//	cout << "ͨ��������ʣ�" << endl;
//	son s;
//	s.func();
//	s.Base::func();
//	//2��ͨ��������������
//	cout << "ͨ���������ʣ�" << endl;
//	son::Base::func();
//	son::func();
//
//	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ��������е�ͬ����Ա���� �������ʸ����б����ص�ͬ����Ա ��Ҫ��������
//	son::Base::func(100);
//}
//
//
//int main()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}