#include"WorkerManager.h"

WorkerManager::WorkerManager()
{
	//1���ļ������ڵ����
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ�

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;

		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}


	//2���ļ����� ����Ϊ��
	char ch;
	ifs >> ch;

	if (ifs.eof())
	{
		cout << "�ļ�Ϊ�գ�" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}
	 
	 //3���ļ����� ����Ҳ����
	int num = this->get_EmpNum();

	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];//����ְ������������ ���ٿռ�

	this->init_Emp();//���ļ��е����ݴ浽������

	
	////��ʼ������
	//this->m_EmpNum = 0;

	////��ʼ������ָ��
	//this->m_EmpArray = NULL;
}

//��ʾ�˵�
void WorkerManager::Show_Menu()
{
	cout << "*****************************************" << endl;
	cout << "********* ��ӭʹ��ְ������ϵͳ! *********" << endl;
	cout << "************ 0���˳�����ϵͳ ************" << endl;
	cout << "************ 1������ְ����Ϣ ************" << endl;
	cout << "************ 2����ʾְ����Ϣ ************" << endl;
	cout << "************ 3��ɾ����ְԱ�� ************" << endl;
	cout << "************ 4���޸�ְ����Ϣ ************" << endl;
	cout << "************ 5���鿴ְ����Ϣ ************" << endl;
	cout << "************ 6�����ձ������ ************" << endl;
	cout << "************ 7����������ĵ� ************" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

//�˳�ϵͳ����ʵ��
void WorkerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

//�������ְ��
void WorkerManager::Add_Emp()
{
	cout << "���������ְ�������� " << endl;
	int addNum = 0;//�����û�����������
	cin >> addNum;

	if (addNum > 0)
	{

		//������ӵ��¿ռ�
		int newSize = this->m_EmpNum + addNum;//�¿ռ��С = ԭ��¼���� + ��������

		Worker** newSpace = new Worker * [newSize];//�����¿ռ�

		//��ԭ�������ݿ������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		for (int i = 0; i < addNum ; i++)
		{
			int id;//����ְ����

			string name;//����ְ������

			int dSelect;//���벿��ѡ��


			cout << "�������" << i + 1 << "����Ա���ı�ţ�" << endl;
			while (1)
			{
				cin >> id;
				int ret = this->IsExist(id);
				if (ret != -1)
				{
					cout << "����ظ�������������" << endl;
				}
				else
				{
					break;
				}
			}

			cout << "�������" << i + 1 << "����Ա����������" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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

			//��������ְ��ָ�뱣����������
			newSpace[this->m_EmpNum + i] = worker;
		}
		//�ͷ�ԭ���Ŀռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "��ϲ����ӳɹ�" << addNum << "����ְ��" << endl;

		//�������ݵ��ļ���
		this->save();
	}
	else
	{
		cout << "��������" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//������ķ�ʽ���ļ� ---д�ļ�

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_Dept << endl;
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
		//��¼����
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

	int index = 0;

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

		//�����������
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();


}

//��ʾְ��
void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			this->m_EmpArray[i]->ShowInfo();
		}
	}
	system("pause");
	system("cls");
}


//ɾ��ְ��
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		//����ְ�����ɾ��Ա��
		cout << "��������Ҫɾ����ְ�����" << endl;

		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];

			}
			this->m_EmpNum--;
			this->save();

			cout << "ɾ���ɹ���" << endl;
		}
		else
		{
			cout << "ɾ��ʧ��" << endl;
		}
	}
	system("pause");
	system("cls");
}


//�ж�ְ���Ƿ����
int WorkerManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum ; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;

		int id;
		cin >> id;

		int ret = this->IsExist(id);

		if (ret != -1)
		{
			//���ҵ�ְ�����
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = " ";
			int dSelect = 0;

			cout << "���ҵ���" << id << "��ְ�����������µ�ְ�����" << endl;

			while (1)
			{
				cin >> newId;
				int ret = this->IsExist(newId);
				if (ret != -1)
				{
					cout << "����ظ�������������" << endl;
				}
				else
				{
					break;
				}
			}
			cout << "�������µ�����" << endl;
			cin >> newName;

			cout << "�������µĸ�λ" << endl;
			cout << "1����ͨԱ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;

			case 2:
				worker = new Manager(newId, newName, dSelect);
				break;

			case 3:
				worker = new Boss(newId, newName, dSelect);
				break;
			default:
				break;
			}
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ���" << endl;

			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ�δ�鵽��Ա��" << endl;
		}

	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��ѡ����ҷ�ʽ" << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2����ְ����������" << endl;

		int select = 0;
		cin >> select;


		if (select == 1)
		{
			int id;
			cout << "������Ҫ���ҵ�ְ����ţ�" << endl;

			cin >> id;
			int ret = IsExist(id);

			if (ret != -1)
			{
				cout << "���ҳɹ�����Ա����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "������Ҫ���ҵ�ְ��������" << endl;

			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if(this->m_EmpArray[i]->m_Name==name)
				{ 
					cout << "���ҳɹ���ְ�����Ϊ��"
						<< m_EmpArray[i]->m_Id
						<< "�ŵ���Ϣ���£�" << endl;

					flag = true;
					this->m_EmpArray[i]->ShowInfo();
				}
			}
			if (flag == false)
			{
				cout << "���޴��ˣ�����ʧ��" << endl;
			}
		}
		else
		{
			cout << "����ѡ������" << endl;
		}
	}
	system("pause");
	system("cls");
}


//����ְ��
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ�����Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "����������ʽ��" << endl;
		cout << "1�����ս�������" << endl;
		cout << "2��������������" << endl;

		int select = 0;
		cin >> select;

		for (int i = 0; i < this->m_EmpNum; i++)
		{
			int minOrMax = i;
			for (int j = i + 1; j < this->m_EmpNum; j++)
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

//����ļ�
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2��ȡ��" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;

		}
		cout << "����ɹ�" << endl;
	}
	system("pause");
	system("cls");
}



WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;

	}
}