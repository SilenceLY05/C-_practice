#pragma once
#include<iostream>
using namespace std;
#include <string>

class Worker
{
public:
	//��ʾ������Ϣ
	virtual void ShowInfo() = 0;

	//��ȡ��λ����
	virtual string getDeptName() = 0;

	//ְ��ID
	int m_Id;
	
	//ְ������
	string m_Name;
	
	//ְ����λ
	int m_DeptId;
};