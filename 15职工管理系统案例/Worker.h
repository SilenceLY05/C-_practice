#pragma once
#include<iostream>
using namespace std;
#include <string>

class Worker
{
public:
	//显示个人信息
	virtual void ShowInfo() = 0;

	//获取岗位名称
	virtual string getDeptName() = 0;

	//职工ID
	int m_Id;
	
	//职工姓名
	string m_Name;
	
	//职工岗位
	int m_DeptId;
};