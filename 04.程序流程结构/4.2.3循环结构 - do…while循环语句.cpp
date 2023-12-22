#include<iostream>
using namespace std;

int main10()
{
	//do...while循环语句
	//在屏幕中输出 0 到 9 这十个数字
	int num = 0;

	do 
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	//do...while和while循环的区别在于，do...while会先执行一次循环

	system("pause");
	return 0;
}