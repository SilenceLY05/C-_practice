#include<iostream>
using namespace std;

//���ñ����ʼ������ʼ���󣬲����Ըı�

int main1()
{
	int a = 10;
	//int& b;//�������ñ����ʼ��
	int& b = a;

	int c = 20;
	b = c;//��ֵ���� ���Ǹ�������
	
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;

	system("pause");
	return 0;
}