#include "Boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Boss::ShowInfo()
{
	cout << "职工编号： " << this->m_Id
		<< "\t 职工姓名： " << this->m_Name
		<< "\t 职工岗位： " << this->getDeptName()
		<< "\t 职工职责： 管理公司所有事务" << endl;

}

string Boss::getDeptName()
{
	return string("老板");
}