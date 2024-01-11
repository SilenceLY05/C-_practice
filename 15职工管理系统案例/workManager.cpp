#include "workManager.h"


WorkManager::WorkManager()
{

	//1���ļ����������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ�

	if ( !ifs.is_open())
	{
		cout << "�ļ�������" << endl;//�������
		this->m_EmpNum = 0;//��ʼ����¼����
		
		this->m_EmpArray = NULL;//��ʼ������ָ��

		this->m_FileIsEmpty = true;//��ʼ���ļ��Ƿ�Ϊ�ձ�־
		ifs.close();//�ر��ļ�
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

	//cout << "ְ��������Ϊ�� " << num << endl;

	this->m_EmpNum = num;

	//����ְ������������ ���ٿռ�
	this->m_EmpArray = new Worker * [this->m_EmpNum];

	//���ļ��е����ݴ浽������
	this->init_Emp();

	//���Դ���
	/*for (int i = 0; i < m_EmpNum; i++)
	{
		cout << "ְ���ţ� " << this->m_EmpArray[i]->m_Id
			<< "ְ�������� " << this->m_EmpArray[i]->m_Name
			<< "ְ��ְλ�� " << this->m_EmpArray[i]->m_DeptId << endl;
	}*/

}



//չʾ�˵�
void WorkManager::Show_Menu()
{
	cout << "*****************************************" << endl;
	cout << "********* ��ӭʹ��ְ������ϵͳ! *********" << endl;
	cout << "***********  0���˳��������  ***********" << endl;
	cout << "***********  1������ְ����Ϣ  ***********" << endl;
	cout << "***********  2����ʾְ����Ϣ  ***********" << endl;
	cout << "***********  3��ɾ����ְְ��  ***********" << endl;
	cout << "***********  4���޸�ְ����Ϣ  ***********" << endl;
	cout << "***********  5���鿴ְ����Ϣ  ***********" << endl;
	cout << "***********  6�����ձ������  ***********" << endl;
	cout << "***********  7����������ĵ�  ***********" << endl;
	cout << "*****************************************" << endl;
	cout  << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	
	
}

//�˳�ϵͳ����ʵ��
void WorkManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);//�˳�����
}

void WorkManager::Add_Emp()
{
	cout << "���������ְ�������� " << endl;

	int addNum = 0;//�����û�����������
	cin >> addNum;

	if (addNum > 0)
	{
		//���

		//��������µĿռ��С
		int newSize = this->m_EmpNum + addNum;//�¿ռ��С = ԭ����¼����+��������

		//�����¿ռ�
		Worker ** newSpace  = new Worker * [newSize];

		//��ԭ���ռ������ݿ������¿ռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}
		
		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;//ְ�����
			string name;//ְ������
			int dSelect;//����ѡ��

			cout << "�������" << i + 1 << "λ��Ա����ţ�" << endl;
			//cin >> id;
			while (1)
			{
				cin >> id;
				int ret = this->IsExist(id);
				if (ret != -1)
				{
					cout << "�Ѵ��ڸ�ְ����� ����������" << endl;

				}
				else {
					break;
				}

			}

			cout << "�������" << i + 1 << "λ��Ա��������" << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ" <<  endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dSelect;

			Worker * worker = NULL;
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
		//�ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����ְ��" << endl;

		//�������ݵ��ļ���
		this->save();

	}
	else
	{
		cout << "������������" << endl;
	}
	system("pause");
	system("cls");
}

//�����ļ�
void WorkManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//������ķ�ʽ���ļ� --- д�ļ�
	
	//��ÿ��������д���ļ���
	for (int i = 0; i < this->m_EmpNum; i++ )
	{
		ofs << this->m_EmpArray[i]->m_Id << "  "
			<< this->m_EmpArray[i]->m_Name << "  "
			<< this->m_EmpArray[i]->m_DeptId << endl;

	}
	//�ر��ļ�
	ofs.close();

}


int WorkManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ��

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

//��ʼ��Ա��
void WorkManager::init_Emp()
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
		//���ݲ�ͬ�Ĳ���ID������ͬ�Ķ���
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
void WorkManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < m_EmpNum; i++)
		{
			//���ö�̬���ýӿ�
			this->m_EmpArray[i]->ShowInfo();
		}
	}
	system("pause");
	system("cls");
}

//ɾ��ְ��
void WorkManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		//����ְ�����ɾ��ְ��
		cout << "��������Ҫɾ����ְ�����" << endl;

		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)//˵��ְ������ ����Ҫɾ����indexλ���ϵ�ְ��
		{
			//����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;//���������м�¼����Ա����
			//ͬ�����µ��ļ���
			this->save();

			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}
	system("pause");
	system("cls");
}

//ְ���Ƿ����
int WorkManager::IsExist(int id)
{
	int index = -1;

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;
			break;
		}
	}
	return index;
}

//�޸�ְ��
void WorkManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;

		int ret = this->IsExist(id);
			
		if (ret != -1)
		{
			//���ҵ����ְ��
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = " ";
			int dSelect = 0;

			cout << "���ҵ���" << id << "��ְ�����������µ�ְ����" << endl;
			//������ID������Ƿ����Ѵ��ڵ�ID�ظ�
			while (1)
			{
				cin >> newId;
				int ret = this->IsExist(newId);
				if (ret != -1)
				{
					cout << "����ظ� ����������" << endl;

				}
				else {
					break;
				}
				
			}

			cout << "�������µ�������" << endl;
			cin >> newName;

			cout << "�������µ�ְλ��" << endl;
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

			//�������ݵ�������
			this->m_EmpArray[ret] = worker;

			cout << "�޸ĳɹ���" << endl;

			//���浽�ļ���
			this->save();

		}
		else
		{
			cout << "�޸�ʧ�ܣ�δ�ҵ���Ա��" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫ���ҵķ�ʽ��" << endl;
		cout << "1������ְ����Ų���" << endl;
		cout << "2������ְ����������" << endl;

		int select = 0;
		cin >> select;
		

		if (select == 1)//���յ�һ�ַ�ʽ����
		{
			int id;
			cout << "��������ҵ�ְ�����" << endl;

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
		else if (select == 2)//���յڶ��ַ�������
		{
			string name;
			cout << "��������ҵ�ְ������" << endl;

			cin >> name;
			bool flag = false;//���ҵ��ı�־
			for (int i = 0; i < m_EmpNum; i++)
			{
				if (m_EmpArray[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ" <<
						m_EmpArray[i]->m_Id <<
						"�ŵ���Ϣ���£�" << endl;

					flag = true;

					this->m_EmpArray[i]->ShowInfo();
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
			cout << "����ѡ������" << endl;
		}
	}
	system("pause");
	system("cls");
}


//����ְ��
void WorkManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
		system("pause");
		system("cls");
		
	}
	else
	{
		cout << "����������ʽ��" << endl;
		cout << "1������ְ���Ž�����������" << endl;
		cout << "2������ְ���Ž��н�������" << endl;

		int select = 0;
		cin >> select;
		
		for (int i = 0; i < m_EmpNum; i++)
		{
			int minOrMax = i;//������Сֵ�����ֵ�±�
			for (int j = i + 1; j < this->m_EmpNum; j++)
			{
				if (select == 1)//����
				{
					if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
				else //����
				{
					if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
					{
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax)
			{
				Worker * temp = this->m_EmpArray[i];

				this->m_EmpArray[i] = this->m_EmpArray[minOrMax];

				this->m_EmpArray[minOrMax] = temp;
			}
		}

		cout << "����ɹ����������Ϊ��" << endl;
		this->save();
		this->Show_Emp();
	}
	
}


//����ļ�
void WorkManager::Clean_File()
{
	cout << "ȷ�������" << endl;
	cout << "1�����" << endl;
	cout << "2��ȡ��" << endl;

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
				
					delete this->m_EmpArray[i];
					this->m_EmpArray[i] = NULL;
				
			}
		
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "����ɹ���" << endl;

	}
	//else if (select == 2)
	//{
	//	//ȡ������ļ�
	//	return;

	//}
	//else
	//{
	//	cout << "����ѡ������" << endl;
	//}
	system("pause");
	system("cls");
}

WorkManager::~WorkManager()
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
