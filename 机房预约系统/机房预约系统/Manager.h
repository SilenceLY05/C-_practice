#pragma once
#include<iostream>
using namespace std;
#include "identity.h"
#include<string>
#include <fstream>
#include "GlobalFIle.h"
#include <vector>
#include"Student.h"
#include "Teacher.h"
#include<algorithm>
#include"computerRoom.h"


class Manager :public Identity
{
public:
	//默认构造
	Manager();

	//有参构造
	Manager(string name, string pwd);

	//选择菜单
	virtual void operMenu();

	//添加账号
	void AddPerson();

	//查看账号
	void ShowPerson();

	//查看机房信息
	void ShowComputer();

	//清空预约记录
	void CleanFile();

	//判断是否有重复ID
	bool CheckRepeat(int id, int type);

	//要去除重复账号，首先要将学生和老师的账号信息获取到程序中，方可检测
	//初始化容器
	void InitVector();

	//学生容器
	vector<Student> vStu;

	//教师容器
	vector<Teacher> vTea;

	//机房容器
	vector<ComputerRoom> vCom;

	//析构函数
	~Manager();

};
