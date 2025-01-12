#include "Teacher.h"

//默认构造
Teacher::Teacher()
{

}

//有参构造
Teacher::Teacher(int empId, string name, string pwd)
{
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//操作菜单
void Teacher::operMenu()
{
	cout << "欢迎老师代表：" << this->m_Name << "登录！" << endl;
	cout << "\t\t ------------------------------------ \n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|            1.查看所有预约          |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|            2.审核预约              |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|            0.注销登录              |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t ------------------------------------ \n";
	cout << "请输入您的选择：" << endl;
}

//查看所有预约
void Teacher::ShowAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + i << "、";
		cout << "预约日期： 周" << of.m_orderData[i]["data"];
		cout << "时段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
		cout << "学号：" << of.m_orderData[i]["stuId"];
		cout << "姓名：" << of.m_orderData[i]["stuName"];
		cout << "机房：" << of.m_orderData[i]["roomId"];
		string status = "状态：";//0取消的预约 1审核中 2已预约 -1预约失败
		if (of.m_orderData[i]["status"] == "1")
		{
			status += "审核中";
		}
		else if (of.m_orderData[i]["status"] == "2")
		{
			status += "预约成功";
		}
		else if (of.m_orderData[i]["status"] == "-1")
		{
			status += "审核未通过，预约失败";
		}
		else
		{
			status += "预约已取消";
		}
		cout << status << endl;

	}

	system("pause");
	system("cls");
}

//审核预约
void Teacher::ValidOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "待审核预约记录如下：" << endl;
	vector<int> v;
	int index = 1;

	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_orderData[i]["status"] == "1" )
		{
			v.push_back(i);
			cout << index++ << "、";
			cout << "预约日期： 周" << of.m_orderData[i]["data"];
			cout << "时段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
			cout << "机房：" << of.m_orderData[i]["roomId"];
			string status = "状态：";//0取消的预约 1审核中 2已预约 -1预约失败
			if (of.m_orderData[i]["status"] == "1")
			{
				status += "审核中";
			}

			cout << status << endl;
		}

		
	}
	cout << "请输入要审核的记录，0代表返回" << endl;
	int select = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "请输入是否通过" << endl;
				cout << "1.通过" << endl;
				cout << "2.未通过" << endl;
				int pass = 0;
				cin >> pass;
				if (pass == 1)
				{
					of.m_orderData[v[select - 1]]["status"] = "2";
					
				}
				else if (pass == 2)
				{
					of.m_orderData[v[select - 1]]["status"] = "-1";
				}
				of.UpdateOrder();
				cout << "审核完毕" << endl;
				break;
			}
		}
		cout << "输入错误，请重新输入：" << endl;
	}
	system("pause");
	system("cls");
}


//析构函数
Teacher::~Teacher()
{

}