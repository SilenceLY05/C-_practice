#include<iostream>
using namespace std;

int main4()
{
	//1.������  float 
	//2,˫����  double
	//Ĭ������� ���һ��С������ʾ��6λ��Ч����

	float f1 = 3.141592657f;
	cout << "f1 = " << f1 << endl;

	double d1 = 3.141592657;
	cout << "d1 = " << d1 << endl;

	//ͳ��float �� double ռ�õ��ڴ�ռ�Ϊ����
	cout << "floatռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;

	cout << "doubleռ�õ��ڴ�ռ�Ϊ: " << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2; //3*10^2

	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2;

	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;

}