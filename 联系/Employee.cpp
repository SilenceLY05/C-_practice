#include"Employee.h"


Employee::Employee(int id, string name, int dId)
{

	this->m_Id = id;

	this->m_Name = name;

	this->m_Dept = dId;
}

void Employee::ShowInfo()
{
	cout << "职工编号为：" << this->m_Id
		<< "\t 职工姓名为： " << this->m_Name
		<< "\t 职工岗位为： " << this->m_Dept
		<< "\t 岗位职责为:  完成经理交给的任务" << endl;
}

string Employee::getDeptName()
{
	return string("员工");
}