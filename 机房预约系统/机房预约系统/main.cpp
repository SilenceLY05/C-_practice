#include<iostream>
using namespace std;
#include<string>
#include <vector>
#include"GlobalFIle.h"
#include "identity.h"
#include "Manager.h"
#include "Student.h"
#include "Teacher.h"
#include <fstream>


//分别有三种身份使用该程序：学生代表 - 申请使用机房   教师 - 审核学生的预约申请  管理员 - 给学生老师创建账号
//机房简介：1号机房 - 最大容量20人  2号机房 - 最大容量50人  3号机房 - 最大容量100人 
//申请简介：申请的订单每周由管理员进行清空，学生可以预约未来一周内的机房使用，预约的日期为周一到周五，
//          预约时间段分为上午和下午，教师负责审核预约，依据实际情况审核预约通过或者不通过
//系统具体需求：首先进入登录界面，可选登录身份有：学生代表、老师、管理员、退出
//每个身份都需要进行验证，学生需要：学号、姓名、登录密码   老师：职工号、姓名、登录密码   管理员：姓名、密码
//学生功能：申请预约、查看预约、查看所有预约、取消预约、退出登录
//老师：查看所有预约、审核预约、退出登录
//管理员：添加账号、查看账号、查看机房、清空预约、退出登录
//预约状态：审核中、预约成功、预约失败、取消的预约
//机房信息：机房编号、最大容量
//

//管理员子菜单
void ManagerMenu(Identity* &manager)
{
	while (true)
	{
		manager->operMenu();

		Manager* man = (Manager*)manager;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			cout << "添加账号" << endl;
			man->AddPerson();
		}
		else if (select == 2)
		{
			cout << "查看账号" << endl;
			man->ShowPerson();
		}
		else if (select == 3)
		{
			cout << "查看机房信息" << endl;
			man->ShowComputer();
		}
		else if (select == 4)
		{
			cout << "清空预约记录" << endl;
			man->CleanFile();
		}
		else
		{
			delete manager;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}


//学生子菜单
void StudentMenu(Identity* &student)
{
	while (true)
	{
		student->operMenu();

		Student* stu = (Student*)student;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			cout << "申请预约" << endl;
			stu->applyOrder();
		}
		else if (select == 2)
		{
			cout << "查看我的预约" << endl;
			stu->ShowMyOrder();
		}
		else if (select == 3)
		{
			cout << "查看所有预约" << endl;
			stu->ShowAllOrder();
		}
		else if (select == 4)
		{
			cout << "取消预约" << endl;
			stu->CancelOrder();
		}
		else
		{
			//注销登录
			delete student;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}


//老师子菜单
void TeacherMenu(Identity* &teacher)
{
	while (true)
	{
		teacher->operMenu();

		Teacher* tea = (Teacher*)teacher;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			cout << "查看所有预约" << endl;
			tea->ShowAllOrder();
		}
		else if (select == 2)
		{
			cout << "审核预约" << endl;
			tea->ValidOrder();
		}
		else
		{
			//注销登录
			delete teacher;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}


//登录函数封装
void LoginIn(string filename, int type)//filename 操作的文件名  type登录身份 1学生 2老师 3管理员
{
	//父类指针，用于指向子类对象
	Identity* person = NULL;

	//读文件
	ifstream ifs;
	ifs.open(filename, ios::in);

	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}

	//准备接收用户信息
	int id = 0;
	string name;
	string pwd;

	if (type == 1)
	{
		cout << "请输入学号：" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "请输入职工号：" << endl;
		cin >> id;
	}

	cout << "请输入用户名：" << endl;
	cin >> name;

	cout << "请输入密码：" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//学生登录验证
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{

				cout << "学生验证登录成功！" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);

				//进入学生身份子菜单
				StudentMenu(person);

				return;
			}
		}
		
	}
	else if (type == 2)
	{
		//老师登录验证
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{

				cout << "老师验证登录成功！" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);

				//进入老师身份子菜单
				TeacherMenu(person);

				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员验证
		string fName;
		string fPwd;

		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd)
			{

				cout << "管理员验证登录成功！" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);

				//进入管理员身份子菜单
				ManagerMenu(person);


				return;
			}
		}
	}

	cout << "验证登录失败！" << endl;


	system("pause");
	system("cls");
	return;

}

int main()
{

	int select = 0;
	while (true)
	{
		cout << "==============================  欢迎使用传智播客机房预约系统 ==============================" << endl;
		cout << endl << "请输入您的身份" << endl;
		cout << "\t\t ------------------------------------ \n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t|            1.学生代表              |\n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t|            2.老    师              |\n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t|            3.管 理 员              |\n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t|            0.退    出              |\n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t ------------------------------------ \n";
		cout << "请输入您的选择：";


		cin >> select;

		switch (select)
		{
		case 1://学生
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://老师
			LoginIn(TEACHER_FILE, 2);
			break; 
		case 3://管理员
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0://退出
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	

	system("pause");
	return 0;
}