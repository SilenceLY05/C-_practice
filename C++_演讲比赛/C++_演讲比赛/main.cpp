#include<iostream>
using namespace std;
#include "speechManager.h"


//比赛规则：共12人参加 比赛共两轮 第一轮为淘汰赛 第二轮为决赛  编号为10001~10012
//分组比赛：每组6人  第一轮分为2组，按选手编号抽签顺序演讲 十个评委打分，去掉最高和最低 平均分为成绩
//淘汰组内后三面 前三名晋级进入下一轮  第二轮为决赛  前三名胜出  每轮比赛过后显示晋级选手信息

//程序功能
//开始比赛：
//查看忘记比赛结果：
//清空比赛记录：
//退出比赛程序


//int main()
//{
//	srand((unsigned int)time(0));
//	speechManager sm;
//
//	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
//	//{
//	//	cout << "编号为：" << (*it).first << "  姓名：" << (*it).second.m_Name << "  分数为：" << (*it).second.m_Score[0] << endl;
//	//}
//
//	int choice = 0;
//
//	while (true)
//	{
//		sm.ShowMenu();
//
//		cout << "请输入您的选择：" << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1://开始比赛
//			sm.StartSpeech();
//			break;
//		case 2://查看记录
//			sm.ShowRecord();
//			break;
//		case 3://清空记录
//			sm.ClearRecord();
//			break;
//		case 0://退出系统
//			sm.ExitSystem();
//			break;
//		default:
//			system("cls");
//			break;
//		}
//	}
//	
//
//	system("pause");
//	return 0;
//}


int main()
{
	SpeechManger sm;

	int choice = 0;

	while (true)
	{
		sm.Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			sm.StartSpeech();
			break;
		case 2:
			sm.ShowRecord();
			break;
		case 3:
			sm.ClearRecord();
			break;
		case 0:
			sm.ExitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}
