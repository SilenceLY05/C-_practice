#include<iostream>
using namespace std;

//���ã�ͨ�����ص����������ʵ���Լ�����������
//���õ�������ֵ ǰ�õ�����������

//�Զ�������
//class Myinteger
//{
//	friend ostream& operator<<(ostream& cout, Myinteger myint);
//
//public:
//	Myinteger()
//	{
//		m_Num = 0;
//	}
//
//	//����ǰ��++�����  ����������Ϊ��һֱ��һ�����ݽ��е�������
//	Myinteger& operator++()
//	{
//		//�Ƚ���++���� �ٽ�������з���
//		m_Num++;
//		return *this;
//	}
//
//	//���غ���++�����  int �������ռλ���� ������������ǰ�úͺ��õ���
//	Myinteger operator++(int)
//	{
//		//�ȼ�¼��ʱ��� �ٽ����е��� ��󽫼�¼�Ľ������
//		Myinteger temp = *this;
//		m_Num++;
//		return temp;
//	}
//
//
//private:
//	int m_Num;
//
//};
//
////�����������
//ostream& operator<<(ostream& cout, Myinteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	Myinteger myint;
//
//	cout << ++myint << endl;
//	
//
//}
//
//void test02()
//{
//	Myinteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//
//	//test01();
//
//	test02();
//	system("pause");
//	return 0;
//}