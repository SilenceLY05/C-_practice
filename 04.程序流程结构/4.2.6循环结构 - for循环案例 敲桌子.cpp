#include<iostream>
using namespace std;

//案例描述:从1开始数到100，如果如果数字各位和十位有7或者是7的倍数，打印敲桌子，其余数字直接打印
int main13()
{
	//敲桌子
	//1、先输出1~100数字
	for (int a = 1; a <= 100; a++)
	{
		//2、从100个数中找出特殊数字，打印敲桌子 
		if (a % 7 == 0|| a % 10 == 7 || a / 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << a << endl;
		}
		
	}
	

	system("pause");
	return 0;
}