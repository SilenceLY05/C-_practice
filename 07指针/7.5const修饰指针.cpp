#include<iostream>
using namespace std;

int main3()
{
	//const���ε���ָ�� - ����ָ��
	int a = 10;
	int b = 10;

	const int* p = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//*p = 19;���� ָ��ָ���ֵ�����Ը�
	p = &b;//��ȷ

	//const���ε��ǳ��� - ָ�볣��
	int* const p2 = &a;
	//ָ��ָ���ֵ���Ըģ�ָ���ָ�򲻿��Ը�
	*p2 = 100;//��ȷ
	//p2 = &b; ����ָ���ָ�򲻿��Ը�

	//const���ε���ָ��ͳ���
	const int* const p3 = &a;
	//*p3=b;
	//p3 = &b;


	system("pause");
	return 0;
}