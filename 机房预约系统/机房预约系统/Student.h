#pragma once
#include<iostream>
using namespace std;
#include "identity.h"
#include <vector>
#include "computerRoom.h"
#include <fstream>
#include "GlobalFIle.h"
#include"OrderFIle.h"


class Student:public Identity
{
public:
	//默认构造
	Student();

	//有参构造
	Student(int Id, string name, string pwd);

	//菜单界面
	virtual void operMenu();

	//申请预约
	void applyOrder();

	//查看我的预约
	void ShowMyOrder();

	//查看所有预约
	void ShowAllOrder();

	//取消预约
	void CancelOrder();

	//机房容量
	vector<ComputerRoom>vCom;

	//学生学号
	int m_Id;


	~Student();
};



	