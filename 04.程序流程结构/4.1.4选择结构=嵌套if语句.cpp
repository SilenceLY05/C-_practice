#include<iostream>
using namespace std;

int main4()
{
	int score = 0;
	cout << ("请输入您的高考成绩：") << endl;
	cin >> score;

	cout << "您输入的高考分数为：" << score << endl;

	if (score > 600)
	{
		if (score > 700)
		{
			cout << "恭喜您考上北京大学" << endl;
		}
		else if (score > 670)
		{
			cout << "恭喜您考上清华大学" << endl;
		}
		else if (score > 650)
		{
			cout << "恭喜您考上中央人民大学" << endl;
		}
		else
		{
			cout << "恭喜您考上一本大学" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜您考上二本大学" << endl;
	}
	else if(score>400)
	{
		cout << "恭喜您考上三本大学" << endl;
	}
	else
	{
		cout << "很遗憾您未考上大学" << endl;
	}
	system("pause");
	return 0;
}