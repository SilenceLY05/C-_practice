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
//	cout << "子函数中 姓名：" << stu.name << "  年龄：" << stu.age << "  分数：" << stu.score << endl;
//}
//
//void PrintStudent(struct Student* stu)
//{
//	stu->age = 25;
//	stu->name = "李四";
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
//		cout << "教师姓名： " << Tarr[i].Tname << endl;
//		int size = sizeof(Tarr[i].Sarr) / sizeof(Tarr[i].Sarr[0]);
//		for (int j = 0; j < size; j++)
//		{
//			cout << "          所带学生姓名： " << Tarr[i].Sarr[j].name << "  分数：" << Tarr[i].Sarr[j].score << endl;
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
	//stu.name = "张三";
	//stu.score = 98;

	//PrintStudent(stu);
	//PrintStudent(&stu);
	//PrintStudent(stu);

	//srand((unsigned int)time(0));
	////创建3名老师的数组
	//struct Teacher Tarr[3];

	////通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	//int len = sizeof(Tarr) / sizeof(Tarr[1]);
	//allocateSpaec(Tarr, len);

	////打印所有老师及学生信息
	//PrintMessage(Tarr, len);

	//struct Hero Harr[5] =
	//{
	//	{"刘备",23,"男"},
	//	{"关羽",22,"男"},
	//	{"张飞",20,"男"},
	//	{"赵云",21,"男"},
	//	{"貂蝉",19,"女"},
	//};


	/*int len = sizeof(Harr) / sizeof(Harr[0]);
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << Harr[i].name << "  年龄：" << Harr[i].age << "  性别：" << Harr[i].sex << endl;
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
		cout << "姓名：" << Harr[i].name << "  年龄：" << Harr[i].age << "  性别：" << Harr[i].sex << endl;
	}


	system("pause");
	return 0;
}*/


void Menu(void)
{
	cout << "************************************************" << endl;
	cout << "*******************  通讯录  *******************" << endl;
	cout << "********  1、添加联系人   2.显示联系人  ********" << endl;
	cout << "********  3、删除联系人   4.查找联系人  ********" << endl;
	cout << "********  5、修改联系人   6.清空联系人  ********" << endl;
	cout << "***************  0、 退出通讯录  ***************" << endl;
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
			cout << "欢迎下次使用！" << endl;
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
			cout << "输入错误，请重新输入！";
			break;
		}
	} while (choice);
	
	system("pause");
	return 0;
}