#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"Worker.h"
#include"Employee.h"
#include"Manager.h"
#include"Boss.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkManager
{
public:
	//���캯��
	WorkManager();


	//չʾ�˵�����
	void Show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker ** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	// ����ְ������ж�ְ���Ƿ���ڣ������ڷ���ְ����������λ�ã������ڷ��� - 1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();



	//��������
	~WorkManager();
};