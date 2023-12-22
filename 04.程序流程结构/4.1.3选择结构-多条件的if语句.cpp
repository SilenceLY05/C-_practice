#include<iostream>
using namespace std;

int main3()
{
	//选择结构 - 多条件if语句
	//输入一个考试分数，若大于600分，则考上一本大学在屏幕上输出
	//大于500分，则考上二本大学在屏幕输出
	//大于400分，则考上三本大学在屏幕输出

	//输入考试分数
	int score = 0;
	cout << "请输入您的考试分数：" << endl;
	cin >> score;

	//提示用户输入的分数
	cout << "您输入的分数为：" << score <<endl;

	//判断用户输入的分数是否大于600分
	if (score > 600)
	{
		cout << "恭喜您考入一本大学" << endl;
	}

	//判断用户输入的分数是否大于500分
	else if (score > 500)
	{
		cout << "恭喜您考上二本大学" << endl;
	}

	//判断用户输入的分数是否大于400分
	else if (score > 400)
	{
		cout << "恭喜您考上三本大学" << endl;
	}

	//判断用户输入的分数是否大于300分
	else if (score > 300)
	{
		cout << "恭喜您考上大专" << endl;
	}

	else//不大于300分执行下面大括号内容
	{
		cout << "很遗憾您未考上大学" << endl;
	}
	system("pause");
	return 0;
}