#include"Manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;

	this->m_Name = name;

	this->m_Dept = dId;
}

void Manager::ShowInfo()
{
	cout << "职工编号为： " << this->m_Id
		<< "\t 职工姓名为： " << this->m_Name
		<< "\t 职工岗位为： " << this->m_Dept
		<< "\t 岗位职责为： 完成老板分配的任务，并下发任务给员工" << endl;
}

string Manager::getDeptName()
{
	return string ("经理");
}