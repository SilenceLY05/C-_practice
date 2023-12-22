#include<iostream>
using namespace std;

int main17()
{
	//continue语句作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环

	for (int i = 0; i <= 100; i++)
	{
		//如果是奇数输出，偶数不输出
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}