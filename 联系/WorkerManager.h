#pragma once
#include<iostream>
using namespace std;
#include <string>
#include"Worker.h"
#include "Manager.h"
#include "Employee.h"
#include "Boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//构造函数
	WorkerManager();

	//显示功能栏
	void Show_Menu();

	//退出系统函数实现
	void exitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;
	

	//添加职工函数实现
	void Add_Emp();

	//保存文件
	void save();

	

	
	//标志文件是否为空
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();


	//删除职工
	void Del_Emp();

	//按照职工编号判断职工是否存在，若存在返回职工在数组中的位置，若不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();


	//析构函数
	~WorkerManager();
};
