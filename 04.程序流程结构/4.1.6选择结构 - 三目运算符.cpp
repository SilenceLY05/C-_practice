#include<iostream>
using namespace std;

int main6()
{
	//��Ŀ�����

	//������������ a b c			
	//��a��b���Ƚϣ����������ֵ��ֵ��c

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "������A�ı���ֵ��" << endl;
	cin >> a;

	cout << "������B�ı���ֵ��" << endl;
	cin >> b;

	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	cout << "�ɶ�c�������и�ֵ��"  << endl;
	cin >> (a > b ? a : b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}