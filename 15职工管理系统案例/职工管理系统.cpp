#include<iostream>
using namespace std;
#include<string>
#include "workManager.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"

int main()
{
	////���Դ���
	//Worker* worker = NULL;
	//worker = new Employee(1, "����", 1);
	//worker->ShowInfo();
	//delete worker;

	//worker = new Manager(2, "����", 2);
	//worker->ShowInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->ShowInfo();
	//delete worker;

	//ʵ���������߶���
	WorkManager wm;

	int choice = 0;//�����洢�û�ѡ��

	while (true)
	{
		wm.Show_Menu();//���ò˵�����

		cout << "����������ѡ��" << endl;

		cin >> choice;//�����û�ѡ��

		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.exitSystem();
			break;

		case 1://���ְ��
			wm.Add_Emp();
			break;

		case 2://��ʾְ��
			wm.Show_Emp();
			break;

		case 3://ɾ����ְ
			wm.Del_Emp();
			break;

		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;

		case 5://�鿴ְ��
			wm.Find_Emp();
			break;

		case 6://�������
			wm.Sort_Emp();
			break;

		case 7://����б�
			wm.Clean_File();
			break;

		default:
			system("cls");//����
			break;
		}
	}

	

	system("pause");
	return 0;
}
