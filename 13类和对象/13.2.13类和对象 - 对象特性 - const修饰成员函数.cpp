#include<iostream>
using namespace std;

//��Ա�������const��Ϊ������
//��������ǰ��const��Ϊ������ 

//class person
//{
//public:
//
//	//thisָ��ı�����ָ�볣�� ָ���ָ���ǲ������޸ĵ�
//	//const person* const this;
//	//�ڳ�Ա���������const�����ε���thisָ�룬��ָ��ָ���ֵҲ�������޸�
//	void showPerson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this  = NULL; this ָ�벻�����޸�ָ���ָ��
//	}
//
//	void func()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ�������Ҳ�����������ֵ,�ӹؼ��� mutable
//
//};
//
//void test01()
//{
//	person p;
//	p.showPerson();
//}
//
////������
//void test02()
//{
//	const person p;//�ڶ���ǰ��const����Ϊ������
//	//p.m_A = 100;
//	p.m_B = 100;//m_B������ֵ���ڳ�������Ҳ�����޸�
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}