#include"Manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;

	this->m_Name = name;

	this->m_Dept = dId;
}

void Manager::ShowInfo()
{
	cout << "ְ�����Ϊ�� " << this->m_Id
		<< "\t ְ������Ϊ�� " << this->m_Name
		<< "\t ְ����λΪ�� " << this->m_Dept
		<< "\t ��λְ��Ϊ�� ����ϰ��������񣬲��·������Ա��" << endl;
}

string Manager::getDeptName()
{
	return string ("����");
}