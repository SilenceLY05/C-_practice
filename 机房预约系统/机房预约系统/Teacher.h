#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "identity.h"
#include"OrderFIle.h"
#include <vector>

class Teacher :public Identity
{
public:
	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int empId, string name, string pwd);

	//�����˵�
	virtual void operMenu();

	//�鿴����ԤԼ
	void ShowAllOrder();

	//���ԤԼ
	void ValidOrder();


	//ְ�����
	int m_EmpId;

	//��������
	~Teacher();
};