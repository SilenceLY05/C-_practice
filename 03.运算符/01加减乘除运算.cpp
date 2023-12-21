#include<iostream>
using namespace std;

int main1()
{
	//加减乘除
	int a1 = 10;
	int b1 = 3;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除，结果依然是整数，将小数部分舍弃
	
	float a2 = 2.4;
	float b2 = 1.6;
	cout << a2 / b2 << endl;
	cout << sizeof(float) << endl;

	system("pause");
	return 0;

}