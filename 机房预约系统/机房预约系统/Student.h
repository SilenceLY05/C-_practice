#pragma once
#include<iostream>
using namespace std;
#include "identity.h"
#include <vector>
#include "computerRoom.h"
#include <fstream>
#include "GlobalFIle.h"
#include"OrderFIle.h"


class Student:public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι���
	Student(int Id, string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void ShowMyOrder();

	//�鿴����ԤԼ
	void ShowAllOrder();

	//ȡ��ԤԼ
	void CancelOrder();

	//��������
	vector<ComputerRoom>vCom;

	//ѧ��ѧ��
	int m_Id;


	~Student();
};



	