#include<iostream>
using namespace std;

//�������������

//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//
//public:
//	person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//
//private:
//
//	//���ó�Ա����������  ���������  p.operator<<(cout) �򻯰汾 p <<cout
//	//�������ó�Ա��������<<���������Ϊ�޷�ʵ��cout �����
//	void operator+(person& p)
//	{
//
//	}
//
//	int m_A;
//	int m_B;
//
//
//
//
//};
//
////ֻ������ȫ�������������������
//ostream & operator<<(ostream &cout,person p)//���� operator<<(cout,p) �� cout << p
//{
//	cout << "m_A=  " << p.m_A << "   m_B= " << p.m_B ;
//	return cout;
//}
//
//void test01()
//{
//	person p(10,10);
//	
//
//	cout << p << endl;
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}