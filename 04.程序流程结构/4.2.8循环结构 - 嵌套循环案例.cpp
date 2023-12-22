#include<iostream>
using namespace std;

int main15()
{
	//乘法口诀表
	
	//打印行数
	for (int j = 1; j <=9 ; j++)
	{
		for (int i = 1; i<=j; i++)//打印列数
		{
			cout << i << "*" << j << "=" << j * i <<" ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}