#include<iostream>
using namespace std;

int main11()
{
	//1、先打印所有三位数
	int num = 100;

	do
	{
		//2、从所有三位数中找到水仙花数
		int a = 0;//各位
		int b = 0;//十位
		int c = 0;//百位

		a = num % 10;//获取数字个位数
		b = (num / 10) % 10;//获取数字十位数
		c = num / 100;//获取数字百位数
		if (a * a * a + b * b * b + c * c * c ==num)//如果是水仙花数才打印
		{
			cout << num << endl;
		}
		
		num++;
		
		
	} while (num < 1000);

	system("pause");
	return 0;
}