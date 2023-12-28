//��װ������ʾ�ý��� ��void showMenu()
//��main�����е��÷�װ�õĺ���
#include<iostream>
using namespace std;
#include <string>
#define MAX 1000

struct Person
{
	string m_Name;//����
	int m_Sex;//�Ա�1.��  2.Ů
	int m_Age;//����
	string m_Phone;//�绰
	string m_Addr;//סַ
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX];//ͨѶ¼�б������ϵ������
	int m_Size;//ͨѶ¼����Ա����

};

//1�������ϵ��
void addPerson(Addressbooks * abs)
{
	//�ж�ͨѶ¼�Ƿ������������˾Ͳ������
	if (abs->m_Size == MAX)
	{
		cout << "��ϵ���������޷��������ϵ��!" << endl;
		return;
	}
	else
	{
		//�����ϵ��

		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;

		while (true)
		{
			//����������1��2�����˳�ѭ�����������������������
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������룡" << endl;
		}
		
		//����
		cout << "��������ϵ�����䣡" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//�绰
		cout << "��������ϵ�˵绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//סַ
		cout << "��������ϵ�˵�ַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		
		//����ͨѶ¼�е�����
		abs->m_Size++;

		cout << "��ӳɹ�!" << endl;

		system("pause");
		system("cls");   //��������
	}
}

//��ʾ������ϵ����Ϣ
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0  ��ʾ��¼Ϊ�� �����Ϊ0 ��ʾ��ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰͨѶ¼��û����ϵ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" :"Ů" ) << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "��ַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}

//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳���ϵ��  *****" << endl;
	cout << "***************************" << endl;
}


//�����ϵ���Ƿ���ڣ�������ڷ�����ϵ�����������еľ���λ�ã��������ڷ���-1
int isExist(Addressbooks * abs, string name)  //����1  ͨѶ¼  ����2   �Ա�����
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//�ҵ��û�����
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1; //���û�ҵ��û�����-1
}

//ɾ��ָ������ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;

	//ret == -1  δ�鵽   ret!= -1 �鵽
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//���ҵ��ˣ�Ҫ����ɾ������
		for (int i = ret ; i<abs->m_Size;i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->m_Size--; //����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�!" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//������ϵ��
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	
	if(ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "��ַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

  //�޸���ϵ��
void modifyPerson(Addressbooks* abs)
{
	cout << "���������޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//�޸�����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�޸��Ա�
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		

		//�޸�����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//�޸ĵ绰
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//�޸ĵ�ַ
		cout << "�������ַ" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ���" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}

//�����ϵ��
void cleanPerson(Addressbooks* abs)
{
	cout << "1---ȷ��" << endl;
	cout << "2---ȡ��" << endl;
	int answer = 0;

	while (true)
	{
		cin >> answer;
		if (answer == 1)
		{
			abs->m_Size = 0;
			cout << "ͨѶ¼�ѱ����" << endl;
			break;
		}
		else if (answer == 2)
		{
			break;
		}
		cout << "������������������" << endl;
	}
	
	system("pause");
	system("cls");
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;//�����û�ѡ������ı���

	while (true)
	{
		//�˵��ĵ���
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: //�����ϵ��
			addPerson(&abs); //���õ�ַ���ݣ������޸�ʵ��
			break;
		case 2: //��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3: //ɾ����ϵ��
		/*{
			cout << "������ɾ����ϵ������" << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ�����" << endl;
			}
		}*/
			deletePerson(&abs);
			break;
		case 4: //������ϵ��
			findPerson(&abs);
			break;
		case 5: //�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6: //�����ϵ��
			cleanPerson(&abs);
			break;
		case 0: //�˳���ϵ��
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;

		}
	}
	

	system("pause");
	return 0;
}