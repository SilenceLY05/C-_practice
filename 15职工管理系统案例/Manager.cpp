#include "Manager.h"

//���캯��
Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Manager::ShowInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< "\t ְ�������� " << this->m_Name
		<< "\t ְ����λ�� " << this->getDeptName()
		<< "\t ��λְ�� ����ϰ��������񣬲��·������Ա��" << endl;
}

string Manager::getDeptName()
{
	return string("����");
}