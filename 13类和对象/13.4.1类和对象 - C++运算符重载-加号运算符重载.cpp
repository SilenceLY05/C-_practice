#include<iostream>
using namespace std;

//�Ӻ�������������ã�ʵ�������Զ�������������ӵ�����

//class person
//{
//public:
//
//	//1����Ա��������+��
//	/*person operator+(person& p)
//	{
//		person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//
//	int m_A;
//	int m_B;
//
//};
//
////2��ȫ�ֺ�������+��
//person operator+(person& p1, person& p2)
//{
//	person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//
//}
//
////�������صİ汾
//person operator+(person& p1, int num)
//{
//	person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//void test01()
//{
//	person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//
//	person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//��Ա�������ر��ʵ���
//	//person p3 = p1.operator+(p2);
//
//	//ȫ�ֺ������ر��ʵ���
//	//person p3 = operator+(p1 + p2);
//
//	person p3 = p1 + p2;
//	//���������Ҳ���Է�����������
//	person p4 = p1 + 100;//person +int
//
//	
//	cout << "p3.m_A=" << p3.m_A << endl;
//	cout << "p3.m_B=" << p3.m_B << endl;
//	cout << "p4.m_A=" << p4.m_A << endl;
//	cout << "p4.m_B=" << p4.m_B << endl;
//}
//
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}