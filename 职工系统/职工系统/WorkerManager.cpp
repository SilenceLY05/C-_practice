#include "WorkerManager.h"


WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1.����ļ�������
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	//2.�ļ����� ����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ�գ�" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	//3.�ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	//cout << "ְ������Ϊ��" << num << endl;
	this->m_EmpNum = num;

	//����ְ�����������飬���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];

	//���ļ��е����ݴ浽������
	this->init_Emp();
	
}

void WorkerManager::Show_Menu()
{
	cout << "************************************" << endl;
	cout << "*****  ��ӭʹ��ְ������ϵͳ��  *****" << endl;
	cout << "*********  0.�˳�����ϵͳ  *********" << endl;
	cout << "*********  1.����ְ����Ϣ  *********" << endl;
	cout << "*********  2.��ʾְ����Ϣ  *********" << endl;
	cout << "*********  3.ɾ����ְԱ��  *********" << endl;
	cout << "*********  4.�޸�ְ����Ϣ  *********" << endl;
	cout << "*********  5.����ְ����Ϣ  *********" << endl;
	cout << "*********  6.���ձ������  *********" << endl;
	cout << "*********  7.��������ĵ�  *********" << endl;
	cout << "************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�˳�����
}

int WorkerManager::IsExit(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}


void WorkerManager::Add_Emp()
{
	int addnum = 0;
	cout << "��������Ҫ��ӵ�ְ������" << endl;
	cin >> addnum;

	if (addnum > 0)
	{
		//��������¿ռ�Ĵ�С
		int newSize = this->m_EmpNum + addnum;

		//�����¿ռ�
		Worker** newSpace = new Worker*[newSize];

		//��ԭ���ռ������Ų���¿ռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//�������������
		for (int i = 0; i < addnum; i++)
		{
			int id;
			string name;
			int dSelect;
			cout << "������� " << i + 1 << " ����Ա���ı��:" << endl;

			while (1)
			{
				cin >> id;
				int ret = this->IsExit(id);

				if (ret != -1)
				{
					cout << "�Ѵ��ڸ�ְ����ţ�����������" << endl;
				}
				else
				{
					break;
				}
			}

			cout << "������� " << i + 1 << " ����Ա��������:" << endl;
			cin >> name;
			cout << "������� " << i + 1 << " ����Ա����ְλ:" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
			
		}

		delete[] this->m_EmpArray;//�ͷ����� ��Ҫ��������
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		this->m_FileEmpty = false;
		cout << "�ɹ����" << addnum << "��ְ��" << endl;
		this->save();

	}
	else
	{
		cout << "�����������" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DepId << endl;
	}
	ofs.close();
}

int WorkerManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		num++;
	}
	ifs.close();
	return num;
}

void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;
	int Index = 0;

	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;
		if (dId == 1)
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			worker = new Manager(id, name, dId);
		}
		else
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[Index] = worker;
		Index++;
	}
	ifs.close();
}

void WorkerManager::Show_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Del_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		int id = 0;
		cout << "��������Ҫɾ����Ա����ţ�" << endl;
		cin >> id;

		int ret = IsExit(id);
		if (ret == -1)
		{
			cout << "ɾ��ʧ�ܣ�û���ҵ��ñ�ŵ�Ա��" << endl;
		}
		else
		{
			for (int i = ret; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this -> m_EmpNum--;
			this->save();

			cout << "ɾ���ɹ���" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		int id = 0;
		cout << "��������Ҫ�޸ĵ�Ա����ţ�" << endl;
		cin >> id;

		int ret = IsExit(id);
		if (ret == -1)
		{
			cout << "�޸�ʧ�ܣ�û���ҵ��ñ�ŵ�Ա��" << endl;
		}
		else
		{
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newname;
			int dSelect = 0;

			cout << "���ҵ���" << newId << "��ְ�����������µ�ְ����" << endl;

			while (1)
			{
				cin >> newId;
				int ret = this->IsExit(newId);

				if (ret != -1)
				{
					cout << "�Ѵ��ڸ�ְ����ţ�����������" << endl;
				}
				else
				{
					break;
				}
			}

			cout << "�������µ�����:" << endl;
			cin >> newname;
			cout << "�������µ�ְλ:" << endl;
			cout << "1.��ͨԱ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newname, 1);
				break;
			case 2:
				worker = new Manager(newId, newname, 2);
				break;
			case 3:
				worker = new Boss(newId, newname, 3);
				break;
			default:
				break;
			}
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ���" << endl;
			this->save();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Clear_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.ȡ��" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//ȷ������ļ�
		//��ģʽ ios::trunc ������� ɾ���ļ������´���
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i] != NULL)
				{
					delete this->m_EmpArray[i];
				}
			}
			
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileEmpty = true;
		}

	}
	system("pause");
	system("cls");
}

void WorkerManager::Find_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��������Ҫ���ҵķ�ʽ" << endl;
		cout << "1������ְ����Ų���" << endl;
		cout << "2������ְ����������" << endl;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			int id;
			cout << "������Ҫ���ҵ�ְ�����" << endl;
			cin >> id;
			int ret = IsExit(id);

			if (ret == -1)
			{
				cout << "����ʧ�ܣ�û���ҵ��ñ�ŵ�Ա��" << endl;
			}
			else
			{
				cout << "���ҳɹ�����Ա����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "������Ҫ����Ա����������" << endl;
			cin >> name;
			bool flag = false;

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��" << this->m_EmpArray[i]->m_Id << "����Ϣ���£�" << endl;
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				//����ʧ��
				cout << "���޴��ˣ�����ʧ��" << endl;
			}
		}
		else
		{
			cout << "����ѡ����������������" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��������Ҫ����ķ�ʽ" << endl;
		cout << "1������ְ���������" << endl;
		cout << "2������ְ����Ž���" << endl;

		int select = 0;

		cin >> select;

		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i; j < this->m_EmpNum; j++)
			{
				if (select == 1)
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
				this->m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "����ɹ��������Ľ��Ϊ��" << endl;
		this->save();
		this->Show_Emp();
	}
	
	
}


WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i] != NULL)
			{
				delete this->m_EmpArray[i];
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
 	}
}