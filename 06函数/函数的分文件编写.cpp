#include<iostream>
using namespace std;
#include"swap.h"

//�����ķ��ļ���д���ô���ṹ��������

//ʵ���������ֽ����ĺ���
//����������
//void swap(int a, int b);
////�����Ķ���
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}

//�������ļ���д�ɷ�Ϊ4�����裺
// 1��������׺��Ϊ.h��ͷ�ļ�
//2��������׺��Ϊ.cpp��Դ�ļ�
//3����ͷ�ļ���д����������
// 4����Դ�ļ���д�����Ķ���

int main()
{
	int a = 110;
	int b = 19;
	swap(a, b);
	system("pause");
	return 0;
}