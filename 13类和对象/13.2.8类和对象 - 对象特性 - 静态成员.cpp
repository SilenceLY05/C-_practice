#include<iostream>
using namespace std;

////��̬��Ա������	��Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
//
//class person
//{
//public:
//
//	//1�����ж��󶼹���ͬһ������   2���ڱ���׶ξͷ������ڴ�   3�����������������ʼ������
//	static int m_A;
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static int m_B;
//
//};
//
//int person :: m_A = 100;
//int person :: m_B = 200;
//
//
////void test01()
////{
////	person p;
////	cout << p.m_A << endl;
////
////	person p2;
////	p2.m_A = 200;
////	cout << p2.m_A << endl;
////}
//
//void test02()
//{
//	//��̬��Ա����������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//	//1��ͨ��������з���
//	//person p;
//	//cout << p.m_A << endl;
//	
//	//2��ͨ���������з���
//	cout << person::m_A << endl;
//	//cout << person::m_B << endl;������ʲ���˽�о�̬��Ա����
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//
//	system("pause");
//	return 0;
//}

//class person
//{
//public:
//	//��̬��Ա����
//	static void func()
//	{
//		m_A = 100;//��̬��Ա�������Է��� ��̬��Ա����
//		//m_B = 200;��̬��Ա���������Է��ʷǾ�̬��Ա����  �޷����ֵ������ĸ������m_B����
//		cout << "static void func����" << endl;
//	}
//
//	static int m_A;//��̬��Ա����
//	int m_B;//�Ǿ�̬��Ա����
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static void func2()
//	{
//		cout << "static void func2����" << endl;
//	}
//};
//
//int person::m_A = 0;
//
////�����ַ��ʷ�ʽ
//
//void test01()
//{
//	//1��ͨ���������
//	person p;
//	p.func();
//
//	//2��ͨ����������
//	person::func();
//
//	//person::func2();������ʲ���˽�о�̬��Ա����
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}