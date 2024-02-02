#pragma once
#include<iostream>
using namespace std;
#include "identity.h"
#include<string>
#include <fstream>
#include "GlobalFIle.h"
#include <vector>
#include"Student.h"
#include "Teacher.h"
#include<algorithm>
#include"computerRoom.h"


class Manager :public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void operMenu();

	//����˺�
	void AddPerson();

	//�鿴�˺�
	void ShowPerson();

	//�鿴������Ϣ
	void ShowComputer();

	//���ԤԼ��¼
	void CleanFile();

	//�ж��Ƿ����ظ�ID
	bool CheckRepeat(int id, int type);

	//Ҫȥ���ظ��˺ţ�����Ҫ��ѧ������ʦ���˺���Ϣ��ȡ�������У����ɼ��
	//��ʼ������
	void InitVector();

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//��������
	vector<ComputerRoom> vCom;

	//��������
	~Manager();

};
