#include"Employee.h"


Employee::Employee(int id, string name, int dId)
{

	this->m_Id = id;

	this->m_Name = name;

	this->m_Dept = dId;
}

void Employee::ShowInfo()
{
	cout << "ְ�����Ϊ��" << this->m_Id
		<< "\t ְ������Ϊ�� " << this->m_Name
		<< "\t ְ����λΪ�� " << this->m_Dept
		<< "\t ��λְ��Ϊ:  ��ɾ�����������" << endl;
}

string Employee::getDeptName()
{
	return string("Ա��");
}