#include<iostream>
using namespace std;

int main7()
{
	/*
	switch(表达式)
	{
	     case结果1:执行语句;break;
		 case结果2:执行语句;break;
		 …
	     default:执行语句;break;
	}
	*/

	//给电影进行打分：10~9分 经典   8~7分 非常好 6~5分 一般  5分一下 烂片

	//1、提示用户给电影打分
	cout << "请给电影进行打分" << endl;
	//2、用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;
	//3、根据用户输入的分数来提示用户最后的结果
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 7:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 6:
		cout << "您认为是一般电影" << endl;
		break;
	case 5:
		cout << "您认为是一般电影" << endl;
		break;
	default:
		cout << "您认为是一部烂片" << endl;
		break;
	}

	//if 和 switch的区别
	//switch的缺点：判断的时候只能是整形或字符型，不可以是一个区间
	//        优点：结构清晰，执行效率高
	system("pause");
	return 0;
}