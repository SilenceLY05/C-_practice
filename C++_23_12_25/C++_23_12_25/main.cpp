#include "connect.h"




//struct Student
//{
//	string name;
//	int score;
//};
//
//struct Teacher
//{
//	string Tname;
//	struct Student Sarr[5];
//};


//void PrintStudent(Student stu)
//{
//	cout << "�Ӻ����� ������" << stu.name << "  ���䣺" << stu.age << "  ������" << stu.score << endl;
//}
//
//void PrintStudent(struct Student* stu)
//{
//	stu->age = 25;
//	stu->name = "����";
//	stu->score = 88;
//}


//void allocateSpaec(struct Teacher Tarr[], int len)
//{
//	
//	string nameseed = "ABCDEF";
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		Tarr[i].Tname = "Teacher_";
//		Tarr[i].Tname += nameseed[i];
//
//		for (int j = 0; j < 5; j++)
//		{
//			Tarr[i].Sarr[j].name = "Student_";
//			Tarr[i].Sarr[j].name += nameseed[j];
//			int random = rand() % 60 +41;
//			Tarr[i].Sarr[j].score =random;
//		}
//	}
//}
//
//void PrintMessage(const struct Teacher Tarr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ������ " << Tarr[i].Tname << endl;
//		int size = sizeof(Tarr[i].Sarr) / sizeof(Tarr[i].Sarr[0]);
//		for (int j = 0; j < size; j++)
//		{
//			cout << "          ����ѧ�������� " << Tarr[i].Sarr[j].name << "  ������" << Tarr[i].Sarr[j].score << endl;
//		}
//		
//		
//	}
//}


//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};


//int main()
//{
	//struct Student stu;

	//stu.age = 23;
	//stu.name = "����";
	//stu.score = 98;

	//PrintStudent(stu);
	//PrintStudent(&stu);
	//PrintStudent(stu);

	//srand((unsigned int)time(0));
	////����3����ʦ������
	//struct Teacher Tarr[3];

	////ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	//int len = sizeof(Tarr) / sizeof(Tarr[1]);
	//allocateSpaec(Tarr, len);

	////��ӡ������ʦ��ѧ����Ϣ
	//PrintMessage(Tarr, len);

	//struct Hero Harr[5] =
	//{
	//	{"����",23,"��"},
	//	{"����",22,"��"},
	//	{"�ŷ�",20,"��"},
	//	{"����",21,"��"},
	//	{"����",19,"Ů"},
	//};


	/*int len = sizeof(Harr) / sizeof(Harr[0]);
	for (int i = 0; i < len; i++)
	{
		cout << "������" << Harr[i].name << "  ���䣺" << Harr[i].age << "  �Ա�" << Harr[i].sex << endl;
	}

	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			struct Hero temp;
			if (Harr[j].age > Harr[j + 1].age)
			{
				temp = Harr[j];
				Harr[j] = Harr[j + 1];
				Harr[j + 1] = temp;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < len; i++)
	{
		cout << "������" << Harr[i].name << "  ���䣺" << Harr[i].age << "  �Ա�" << Harr[i].sex << endl;
	}


	system("pause");
	return 0;
}*/


void Menu(void)
{
	cout << "************************************************" << endl;
	cout << "*******************  ͨѶ¼  *******************" << endl;
	cout << "********  1�������ϵ��   2.��ʾ��ϵ��  ********" << endl;
	cout << "********  3��ɾ����ϵ��   4.������ϵ��  ********" << endl;
	cout << "********  5���޸���ϵ��   6.�����ϵ��  ********" << endl;
	cout << "***************  0�� �˳�ͨѶ¼  ***************" << endl;
}



int main()
{
	AddressBook abs;
	abs.m_Size = 0;

	int choice = 0;

	do
	{
		Menu();
		cin >> choice;

		switch (choice)
		{
		case 0:
			cout << "��ӭ�´�ʹ�ã�" << endl;
			break;
		case 1:
			addPerson(&abs);
			break;
		case 2:
			ShowPerson(&abs);
			break;
		case 3:
			DeletePerson(&abs);
			break;
		case 4:
			FindPersion(&abs);
			break;
		case 5:
			ModifyPerson(&abs);
			break;
		case 6:
			CleanPerson(&abs);
			break;
			
		default:
			cout << "����������������룡";
			break;
		}
	} while (choice);
	
	system("pause");
	return 0;
}