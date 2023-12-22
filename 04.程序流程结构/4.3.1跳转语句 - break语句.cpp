#include<iostream>
using namespace std;

int main16()
{
	//break使用的时机：
	////1、出现在Switch条件语句中，作用是终止case并跳出Switch
	//cout << "请选择副本的难度" << endl;
	//cout << "1、普通难度" << endl;
	//cout << "2、困难难度" << endl;
	//cout << "3、地狱难度" << endl;

	//int select = 0;//创建用户选择的结果变量
	//cin >> select;//等待用户输入

	//switch (select)
	//{
	//	case 1:
	//		cout << "您选择的为普通难度" << endl;
	//		break;//退出Switch语句
	//	case 2:
	//		cout << "您选择的为困难难度" << endl;
	//		break;
	//	case 3:
	//		cout << "您选择的为地狱难度" << endl;
	//		break;
	//}
	//2、出现在循环语句中，作用是跳出当前的循环
	//for (int i = 0; i < 10; i++)
	//{
	//	//如果i等于5，退出循环，不再打印
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}
	
	//3、出现在嵌套循环中，跳出最近的内层循环语句
	for (int j = 1; j < 10; j++)
	{
		for (int i = 1; i <10; i++)
		{
			if (i == 6)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
		
	}
	
	system("pause");
	return 0;
}