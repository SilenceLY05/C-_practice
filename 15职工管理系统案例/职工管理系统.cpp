#include<iostream>
using namespace std;
#include<string>
#include "workManager.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	////测试代码
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->ShowInfo();
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->ShowInfo();
	//delete worker;

	//worker = new Boss(3, "王五", 3);
	//worker->ShowInfo();
	//delete worker;

	//实例化管理者对象
	WorkManager wm;

	int choice = 0;//用来存储用户选择

	while (true)
	{
		wm.Show_Menu();//调用菜单函数

		cout << "请输入您的选择：" << endl;

		cin >> choice;//接收用户选项

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

		case 7://清空列表
			wm.Clean_File();
			break;

		default:
			system("cls");//清屏
			break;
		}
	}

	

	system("pause");
	return 0;
}
