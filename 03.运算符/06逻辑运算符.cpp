#include<iostream>
using namespace std;

int main6()
{
	//�߼������ �� �� ��C++�� ����0 ��Ϊ��

	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	//�߼������ �� &&  ����������Ϊ������Ϊ��
	int a1 = 10;
	int b1 = 10;
	cout << (a1 && b1) << endl;

	a1 = 10;
	b1 = 0;
	cout << (a1 && b1) << endl;

	//�߼������ ��|| ͬ����٣�����Ϊ��
	int a2 = 10;
	int b2 = 10;
	cout << (a2 || b2) << endl;

	a2 = 10;
	b2 = 0;
	cout << (a2 || b2) << endl;

	a2 = 0;
	b2 = 0;
	cout << (a2 || b2) << endl;
	system("pause");
	return 0;
}