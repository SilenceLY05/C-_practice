#include<iostream>
using namespace std;
//time系统时间头文件包含
#include <ctime>

int main9()
{
	//添加随机数种子 作用：利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统要先生成一个随机数字
	int num = rand() % 100 + 1;  //生成一个0~99的随机数
	//cout << num << endl;

	//2、玩家进行猜测
	int val = 0;//玩家输入的数据
	while (1)
	{
		cin >> val;

		//3、判断玩家的猜测是否正确
		if (val > num)//猜错 提示猜的过大或过小 从新返回第二步
		{
			cout << "您输入的过大" << endl;
		}
		else if (val < num)
		{
			cout << "您输入的过小" << endl;
		}
		else//猜对 退出
		{
			cout << "恭喜您猜对了" << endl;
			break;//在循环中，可以利用该关键字来跳出当前循环
		}
	}
	

	
	system("pause");
	return 0;
}