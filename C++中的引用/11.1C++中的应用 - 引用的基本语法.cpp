#include<iostream>
using namespace std;

//���õ����ã������������
//�﷨���������� &���� = ԭ��

int main0()
{
	int a = 10;
	int& b = a;
	cout << a << endl;
	cout << b << endl;

	cout << (int)&a << endl;
	cout << (int)&b << endl;

	b = 20;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}