#include<iostream>
using namespace std;

//����ӷ�����
//�������嵽ʱ��num1��num2��û����ʵ���ݣ�ֻ��һ����ʽ�ϵĲ��� ����β�
int add1(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main1()
{
	//main�����е���add����
	int a = 10;
	int b = 10;

	//�������õ��﷨���������ƣ�������
	//a��b��Ϊʵ�ʲ��� ���ʵ��
	//�����ú�����ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c =add1(a, b);
	cout << "c= " << c << endl;

	system("pause");
	return 0;
}