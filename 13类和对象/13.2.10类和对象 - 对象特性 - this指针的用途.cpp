#include<iostream>
using namespace std;

//��;��1�����βκͳ�Ա����ͬ��ʱ������thisָ��������

//2������ķǾ�̬��Ա�з��ض���������return *this	

//class person
//{
//public:
//	person(int age)
//	{
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//
//	person& personaddage(person& p)
//	{
//		this->age += p.age;
//
//		//this ָ��P2��ָ�룬*thisָ�����p2 �������ı���
//		return *this;
//	}
//	int age;
//
//};
//
//void test01()
//{
//	person p1(19);
//	cout << "p1������Ϊ��" << p1.age << endl;
//}
//
//void test02()
//{
//	person p1(10);
//	person p2(20);
//
//	//��ʽ���˼�� 
//	p2.personaddage (p1).personaddage(p1). personaddage(p1);
//	cout << "p2������Ϊ��" << p2.age << endl;
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