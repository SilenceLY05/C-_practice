#include<iostream>
using namespace std;

int main1()
{
	//选择结构 单行if语句
	//用户输入分数，若输入大于600，则视为考上1本大学在屏幕上输出

	//1、用户输入分数 2、打印用户输入分数 3、判断分数是否大于600
	int score = 0;
	cout << "请输入一个分数：" << endl;
	cin >> score;

	cout << "您输入的分数为：" << score << endl;

	//if 条件语句后面不要加入分号
	if (score >= 600) 
	{
		cout << "恭喜您考入一本大学：" << endl;
	}
	system("pause");
	return 0;
}