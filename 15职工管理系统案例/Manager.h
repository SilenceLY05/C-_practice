#pragma once
#include<iostream>
using namespace std;
#include "Worker.h"


class Manager :public Worker
{
public:

	//���캯��
	Manager(int id, string name, int dId);

	//��ʾ������Ϣ
	void ShowInfo();

	//��ȡ��λ��Ϣ
	string getDeptName();
};