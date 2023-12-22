#include<iostream>
using namespace std;

int main5()
{
	//穿件三只小猪的体重变量
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;

	//让用户输入三只小猪的重量
	cout << "请输入小猪A的重量" << endl;
	cin >> pig1;

	cout << "请输入小猪B的重量" << endl;
	cin >> pig2;

	cout << "请输入小猪C	的重量" << endl;
	cin >> pig3;

	//显示用户输入的三只小猪重量
	cout << "小猪A的重量为:" << pig1 << endl;
	cout << "小猪B的重量为:" << pig2 << endl;
	cout << "小猪C的重量为:" << pig3 << endl;

	//判断哪只最重
	if (pig1 > pig2)//A比B重
	{
		if (pig1 > pig3)//A比C重
		{
			if(pig2>pig3)
			{
				cout << "三只小猪中最重的为A：" << pig1 << endl;
				cout << "三只小猪中第二重的为B：" << pig2 << endl;
				cout << "三只小猪中最轻的为C：" << pig3 << endl;
			}
			else
			{
				cout << "三只小猪中最重的为A：" << pig1 << endl;
				cout << "三只小猪中第二重的为C：" << pig3 << endl;
				cout << "三只小猪中最轻的为B：" << pig2 << endl;
			}
		}
		else
		{
			cout << "三只小猪中最终的为C：" << pig3 << endl;
		}
	}
	else//B比A重
	{
		if (pig2 > pig3)
		{
			cout << "三只小猪中最重的为B：" << pig2 << endl;
		}
		else
		{
			cout << "三只小猪中最重的为C：" << pig3 << endl;
		}
	}
	system("pause");
	return 0;
}