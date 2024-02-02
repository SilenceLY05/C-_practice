#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "identity.h"
#include"OrderFIle.h"
#include <vector>

class Teacher :public Identity
{
public:
	//默认构造
	Teacher();

	//有参构造
	Teacher(int empId, string name, string pwd);

	//操作菜单
	virtual void operMenu();

	//查看所有预约
	void ShowAllOrder();

	//审核预约
	void ValidOrder();


	//职工编号
	int m_EmpId;

	//析构函数
	~Teacher();
};