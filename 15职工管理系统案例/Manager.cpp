#include "Manager.h"

//构造函数
Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Manager::ShowInfo()
{
	cout << "职工编号： " << this->m_Id
		<< "\t 职工姓名： " << this->m_Name
		<< "\t 职工岗位： " << this->getDeptName()
		<< "\t 岗位职责： 完成老板分配的任务，并下发任务给员工" << endl;
}

string Manager::getDeptName()
{
	return string("经理");
}