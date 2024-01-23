#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Worker.h"
#include "Boss.h"
#include "employee.h"
#include "Manager.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	WorkerManager();

	void Show_Menu();

	void ExitSystem();

	//���Ա��
	void Add_Emp();

	//ְ������Ƿ����
	int IsExit(int id);

	//�����ļ�
	void save();

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//��������ĵ�
	void Clear_File();

	//�޸�ְ������
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����
	void Sort_Emp();

	~WorkerManager();

	//��¼ְ������
	int m_EmpNum;

	//��¼ְ������
	Worker** m_EmpArray;

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileEmpty;
};