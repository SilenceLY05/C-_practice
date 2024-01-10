#include<iostream>
using namespace std;
#include <string>
#include "WorkerManager.h"
#include"Employee.h"
#include"Manager.h"
#include "Boss.h"

int main()
{
	WorkerManager wm;

	int choice = 0;

	while (true)
	{
		wm.Show_Menu();

		cout << "请输入您的选择： " << endl;

		cin >> choice;

		switch (choice)
		{
		case 0://退出系统
			wm.exitSystem();
			break;

		case 1://添加职工
			wm.Add_Emp();
			break;

		case 2://显示职工
			wm.Show_Emp();
			break;

		case 3://删除离职
			wm.Del_Emp();
			break;


		case 4://修改职工
			wm.Mod_Emp();
			break;

		case 5://查看职工
			wm.Find_Emp();
			break;

		case 6://编号排序
			wm.Sort_Emp();
			break;

		case 7://清空数据
			wm.Clean_File();
			break;

		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}