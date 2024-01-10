#include "Boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;

	this->m_Name = name;

	this->m_Dept = dId;
}

void Boss::ShowInfo()
{
	cout << "职工编号为： " << this->m_Id
		<< "\t 职工姓名为： " << this->m_Name
		<< "\t 职工岗位为： " << this->m_Dept
		<< "\t 岗位职责为： 管理公司所有事物" << endl;
}

string Boss::getDeptName()
{
	return string ("老板");
}