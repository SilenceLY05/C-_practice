#include<iostream>
using namespace std;

//C++�У��������β��б��е��βο�����Ĭ��ֵ
//�﷨������ֵ���� ������ ������ = Ĭ��ֵ��{}


//����Լ����������ݣ������Լ������ݣ����û����Ĭ��ֵ
int func(int a, int b = 10, int c = 20)
{
	return a + b + c;
}

//ע�����1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ����������Ҷ�������Ĭ��ֵ
//int func2(int a, int b = 10, int c)
//{
//	return a + b + c;
//}

//2�������������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//������ʵ��ֻ����һ����Ĭ�ϲ���
//int func3(int a = 10, int b = 10);




int main0()
{
	cout << func(10) << endl;
	cout << func(10,30) << endl;

	//cout << func2(10) << endl;

	//cout << func3(10, 10) << endl;

	system("pause");
	return 0;
}

//int func3(int a =10, int b = 10)
//{
//	return a + b;
//}