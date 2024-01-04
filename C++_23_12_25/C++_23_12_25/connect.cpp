#include "connect.h"

void addPerson(struct AddressBook* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，请先删除再添加！" << endl;
		return;
	}
	else
	{
		string name;
		cout << "1.请输入你要添加的联系人姓名:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		int sex = 0;
		cout << "2.请输入你要添加的联系人性别:" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入！" << endl;
			}
		}
		
		

		int age;
		cout << "3.请输入你要添加的联系人年龄:" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		string phone;
		cout << "4.请输入你要添加的联系人电话:" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		string addr;
		cout << "5.请输入你要添加的联系人地址:" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;

		cout << "添加成功！" << endl;
		system("pause");
		system("cls");
	}
}


void ShowPerson(AddressBook* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "通讯录为空，清先添加联系人！" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";

			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ?  "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话号码：" << abs->personArray[i].m_Phone << "\t";
			cout << "地址：" << abs->personArray[i].m_Addr << endl;
			cout << endl;
		}
	}
	system("pause");
	system("cls");
}


int IsExit(AddressBook* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}


void DeletePerson(AddressBook* abs)
{
	cout << "请输入要删除的联系人姓名" << endl;
	string name;
	cin >> name;

	int ret = IsExit(abs, name);
	if (ret == -1)
	{
		cout << "未查找到该联系人" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功！" << endl;
	}
}


void FindPersion(AddressBook* abs)
{
	cout << "请输入你要查找的联系人" << endl;
	string name;
	cin >> name;

	int ret = IsExit(abs, name);

	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";

		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话号码：" << abs->personArray[ret].m_Phone << "\t";
		cout << "地址：" << abs->personArray[ret].m_Addr << endl;
		cout << endl;
	}
	else
	{
		cout << "未查找到该联系人" << endl;
	}
	system("pause");
	system("cls");
}


void ModifyPerson(AddressBook* abs)
{

	cout << "请输入你要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = IsExit(abs, name);

	if (ret != -1)
	{
		string name;
		cout << "1.请输入你要修改的联系人姓名:" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		int sex = 0;
		cout << "2.请输入你要修改的联系人性别:" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入！" << endl;
			}
		}



		int age;
		cout << "3.请输入你要修改的联系人年龄:" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string phone;
		cout << "4.请输入你要修改的联系人电话:" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		string addr;
		cout << "5.请输入你要修改的联系人地址:" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		abs->m_Size++;

		cout << "修改成功！" << endl;
	}
	else
	{
		cout << "未查找到该联系人" << endl;
	}
	system("pause");
	system("cls");
}

void CleanPerson(AddressBook* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;//将当前记录联系人数量记为0，做逻辑清空操作
	system("pause");
	system("cls");
}