#include<iostream>
using namespace std;
#include<string>
#include <vector>
#include"GlobalFIle.h"
#include "identity.h"
#include "Manager.h"
#include "Student.h"
#include "Teacher.h"
#include <fstream>


//�ֱ����������ʹ�øó���ѧ������ - ����ʹ�û���   ��ʦ - ���ѧ����ԤԼ����  ����Ա - ��ѧ����ʦ�����˺�
//������飺1�Ż��� - �������20��  2�Ż��� - �������50��  3�Ż��� - �������100�� 
//�����飺����Ķ���ÿ���ɹ���Ա������գ�ѧ������ԤԼδ��һ���ڵĻ���ʹ�ã�ԤԼ������Ϊ��һ�����壬
//          ԤԼʱ��η�Ϊ��������磬��ʦ�������ԤԼ������ʵ��������ԤԼͨ�����߲�ͨ��
//ϵͳ�����������Ƚ����¼���棬��ѡ��¼����У�ѧ��������ʦ������Ա���˳�
//ÿ����ݶ���Ҫ������֤��ѧ����Ҫ��ѧ�š���������¼����   ��ʦ��ְ���š���������¼����   ����Ա������������
//ѧ�����ܣ�����ԤԼ���鿴ԤԼ���鿴����ԤԼ��ȡ��ԤԼ���˳���¼
//��ʦ���鿴����ԤԼ�����ԤԼ���˳���¼
//����Ա������˺š��鿴�˺š��鿴���������ԤԼ���˳���¼
//ԤԼ״̬������С�ԤԼ�ɹ���ԤԼʧ�ܡ�ȡ����ԤԼ
//������Ϣ��������š��������
//

//����Ա�Ӳ˵�
void ManagerMenu(Identity* &manager)
{
	while (true)
	{
		manager->operMenu();

		Manager* man = (Manager*)manager;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			cout << "����˺�" << endl;
			man->AddPerson();
		}
		else if (select == 2)
		{
			cout << "�鿴�˺�" << endl;
			man->ShowPerson();
		}
		else if (select == 3)
		{
			cout << "�鿴������Ϣ" << endl;
			man->ShowComputer();
		}
		else if (select == 4)
		{
			cout << "���ԤԼ��¼" << endl;
			man->CleanFile();
		}
		else
		{
			delete manager;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}


//ѧ���Ӳ˵�
void StudentMenu(Identity* &student)
{
	while (true)
	{
		student->operMenu();

		Student* stu = (Student*)student;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			cout << "����ԤԼ" << endl;
			stu->applyOrder();
		}
		else if (select == 2)
		{
			cout << "�鿴�ҵ�ԤԼ" << endl;
			stu->ShowMyOrder();
		}
		else if (select == 3)
		{
			cout << "�鿴����ԤԼ" << endl;
			stu->ShowAllOrder();
		}
		else if (select == 4)
		{
			cout << "ȡ��ԤԼ" << endl;
			stu->CancelOrder();
		}
		else
		{
			//ע����¼
			delete student;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}


//��ʦ�Ӳ˵�
void TeacherMenu(Identity* &teacher)
{
	while (true)
	{
		teacher->operMenu();

		Teacher* tea = (Teacher*)teacher;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			cout << "�鿴����ԤԼ" << endl;
			tea->ShowAllOrder();
		}
		else if (select == 2)
		{
			cout << "���ԤԼ" << endl;
			tea->ValidOrder();
		}
		else
		{
			//ע����¼
			delete teacher;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}


//��¼������װ
void LoginIn(string filename, int type)//filename �������ļ���  type��¼��� 1ѧ�� 2��ʦ 3����Ա
{
	//����ָ�룬����ָ���������
	Identity* person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(filename, ios::in);

	//�ж��ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//׼�������û���Ϣ
	int id = 0;
	string name;
	string pwd;

	if (type == 1)
	{
		cout << "������ѧ�ţ�" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "������ְ���ţ�" << endl;
		cin >> id;
	}

	cout << "�������û�����" << endl;
	cin >> name;

	cout << "���������룺" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ����¼��֤
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{

				cout << "ѧ����֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);

				//����ѧ������Ӳ˵�
				StudentMenu(person);

				return;
			}
		}
		
	}
	else if (type == 2)
	{
		//��ʦ��¼��֤
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (id == fId && name == fName && pwd == fPwd)
			{

				cout << "��ʦ��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);

				//������ʦ����Ӳ˵�
				TeacherMenu(person);

				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա��֤
		string fName;
		string fPwd;

		while (ifs >> fName && ifs >> fPwd)
		{
			if (name == fName && pwd == fPwd)
			{

				cout << "����Ա��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);

				//�������Ա����Ӳ˵�
				ManagerMenu(person);


				return;
			}
		}
	}

	cout << "��֤��¼ʧ�ܣ�" << endl;


	system("pause");
	system("cls");
	return;

}

int main()
{

	int select = 0;
	while (true)
	{
		cout << "==============================  ��ӭʹ�ô��ǲ��ͻ���ԤԼϵͳ ==============================" << endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t ------------------------------------ \n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t|            1.ѧ������              |\n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t|            2.��    ʦ              |\n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t|            3.�� �� Ա              |\n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t|            0.��    ��              |\n";
		cout << "\t\t|                                    |\n";
		cout << "\t\t ------------------------------------ \n";
		cout << "����������ѡ��";


		cin >> select;

		switch (select)
		{
		case 1://ѧ��
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://��ʦ
			LoginIn(TEACHER_FILE, 2);
			break; 
		case 3://����Ա
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0://�˳�
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�����������������룡" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	

	system("pause");
	return 0;
}