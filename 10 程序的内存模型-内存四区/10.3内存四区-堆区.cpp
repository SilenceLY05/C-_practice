#include<iostream>
using namespace std;

//�������г���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����

int* func1()
{
	//����new�ؼ��� ���Խ����ݿ��ٵ�����
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10);
	return p;
}

int main3()
{
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}