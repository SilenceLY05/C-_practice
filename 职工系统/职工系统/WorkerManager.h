#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Worker.h"
#include "Boss.h"
#include "employee.h"
#include "Manager.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	WorkerManager();

	void Show_Menu();

	void ExitSystem();

	//添加员工
	void Add_Emp();

	//职工编号是否存在
	int IsExit(int id);

	//保存文件
	void save();

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//清空所有文档
	void Clear_File();

	//修改职工函数
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序
	void Sort_Emp();

	~WorkerManager();

	//记录职工数量
	int m_EmpNum;

	//记录职工数组
	Worker** m_EmpArray;

	//标志文件是否为空
	bool m_FileEmpty;
};