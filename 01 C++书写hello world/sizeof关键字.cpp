#include<iostream>
using namespace std;

int main3()
{
	// ���Σ�short(2) in(4) long(4)   long long(8)
	//��������sizeof�����������ռ���ڴ��С
	//�﷨��sizeof(��������/����)

	short num1 = 10;
	
	cout << "shortռ���ڴ�ռ�Ϊ: " << sizeof(num1) << endl;

	int num2 = 19;
	cout << "intռ���ڴ�ռ�Ϊ: " << sizeof(num2) << endl;

	long num3 = 12;
	cout << "longռ���ڴ�ռ�Ϊ: " << sizeof(num3) << endl;

	long long num4 = 12;
	cout << "long longռ���ڴ�ռ�Ϊ: " << sizeof(num4) << endl;
	system("pause");

	return 0;

}