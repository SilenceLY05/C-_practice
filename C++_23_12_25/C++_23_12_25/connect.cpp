#include "connect.h"

void addPerson(struct AddressBook* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼����������ɾ������ӣ�" << endl;
		return;
	}
	else
	{
		string name;
		cout << "1.��������Ҫ��ӵ���ϵ������:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		int sex = 0;
		cout << "2.��������Ҫ��ӵ���ϵ���Ա�:" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;

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
				cout << "�����������������룡" << endl;
			}
		}
		
		

		int age;
		cout << "3.��������Ҫ��ӵ���ϵ������:" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;

		string phone;
		cout << "4.��������Ҫ��ӵ���ϵ�˵绰:" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		string addr;
		cout << "5.��������Ҫ��ӵ���ϵ�˵�ַ:" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;

		cout << "��ӳɹ���" << endl;
		system("pause");
		system("cls");
	}
}


void ShowPerson(AddressBook* abs)
{
	if (abs->m_Size == 0)
	{
		cout << "ͨѶ¼Ϊ�գ����������ϵ�ˣ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";

			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ?  "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰���룺" << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ��" << abs->personArray[i].m_Addr << endl;
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
	cout << "������Ҫɾ������ϵ������" << endl;
	string name;
	cin >> name;

	int ret = IsExit(abs, name);
	if (ret == -1)
	{
		cout << "δ���ҵ�����ϵ��" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
}


void FindPersion(AddressBook* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = IsExit(abs, name);

	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";

		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰���룺" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ַ��" << abs->personArray[ret].m_Addr << endl;
		cout << endl;
	}
	else
	{
		cout << "δ���ҵ�����ϵ��" << endl;
	}
	system("pause");
	system("cls");
}


void ModifyPerson(AddressBook* abs)
{

	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = IsExit(abs, name);

	if (ret != -1)
	{
		string name;
		cout << "1.��������Ҫ�޸ĵ���ϵ������:" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		int sex = 0;
		cout << "2.��������Ҫ�޸ĵ���ϵ���Ա�:" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;

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
				cout << "�����������������룡" << endl;
			}
		}



		int age;
		cout << "3.��������Ҫ�޸ĵ���ϵ������:" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		string phone;
		cout << "4.��������Ҫ�޸ĵ���ϵ�˵绰:" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		string addr;
		cout << "5.��������Ҫ�޸ĵ���ϵ�˵�ַ:" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		abs->m_Size++;

		cout << "�޸ĳɹ���" << endl;
	}
	else
	{
		cout << "δ���ҵ�����ϵ��" << endl;
	}
	system("pause");
	system("cls");
}

void CleanPerson(AddressBook* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;//����ǰ��¼��ϵ��������Ϊ0�����߼���ղ���
	system("pause");
	system("cls");
}