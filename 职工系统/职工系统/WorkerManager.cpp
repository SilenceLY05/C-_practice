#include "WorkerManager.h"


WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//1.如果文件不存在
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	//2.文件存在 数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空！" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileEmpty = true;
		ifs.close();
		return;
	}

	//3.文件存在，并且记录数据
	int num = this->get_EmpNum();
	//cout << "职工人数为：" << num << endl;
	this->m_EmpNum = num;

	//根据职工数创建数组，开辟空间
	this->m_EmpArray = new Worker * [this->m_EmpNum];

	//将文件中的数据存到数组中
	this->init_Emp();
	
}

void WorkerManager::Show_Menu()
{
	cout << "************************************" << endl;
	cout << "*****  欢迎使用职工管理系统！  *****" << endl;
	cout << "*********  0.退出管理系统  *********" << endl;
	cout << "*********  1.增加职工信息  *********" << endl;
	cout << "*********  2.显示职工信息  *********" << endl;
	cout << "*********  3.删除离职员工  *********" << endl;
	cout << "*********  4.修改职工信息  *********" << endl;
	cout << "*********  5.查找职工信息  *********" << endl;
	cout << "*********  6.按照编号排序  *********" << endl;
	cout << "*********  7.清空所有文档  *********" << endl;
	cout << "************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);//退出程序
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
	cout << "请输入你要添加的职工数：" << endl;
	cin >> addnum;

	if (addnum > 0)
	{
		//计算添加新空间的大小
		int newSize = this->m_EmpNum + addnum;

		//开辟新空间
		Worker** newSpace = new Worker*[newSize];

		//将原来空间的数据挪到新空间
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//批量添加新数据
		for (int i = 0; i < addnum; i++)
		{
			int id;
			string name;
			int dSelect;
			cout << "请输入第 " << i + 1 << " 个新员工的编号:" << endl;

			while (1)
			{
				cin >> id;
				int ret = this->IsExit(id);

				if (ret != -1)
				{
					cout << "已存在该职工编号，请重新输入" << endl;
				}
				else
				{
					break;
				}
			}

			cout << "请输入第 " << i + 1 << " 个新员工的姓名:" << endl;
			cin >> name;
			cout << "请输入第 " << i + 1 << " 个新员工的职位:" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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

		delete[] this->m_EmpArray;//释放数组 需要加中括号
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		this->m_FileEmpty = false;
		cout << "成功添加" << addnum << "名职工" << endl;
		this->save();

	}
	else
	{
		cout << "您输入的有误" << endl;
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
		cout << "文件不存在或者记录为空！" << endl;
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
		cout << "文件不存在或者记录为空！" << endl;
	}
	else
	{
		int id = 0;
		cout << "请输入你要删除的员工编号：" << endl;
		cin >> id;

		int ret = IsExit(id);
		if (ret == -1)
		{
			cout << "删除失败，没有找到该编号的员工" << endl;
		}
		else
		{
			for (int i = ret; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this -> m_EmpNum--;
			this->save();

			cout << "删除成功！" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Mod_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或者记录为空！" << endl;
	}
	else
	{
		int id = 0;
		cout << "请输入你要修改的员工编号：" << endl;
		cin >> id;

		int ret = IsExit(id);
		if (ret == -1)
		{
			cout << "修改失败，没有找到该编号的员工" << endl;
		}
		else
		{
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newname;
			int dSelect = 0;

			cout << "查找到：" << newId << "号职工，请输入新的职工号" << endl;

			while (1)
			{
				cin >> newId;
				int ret = this->IsExit(newId);

				if (ret != -1)
				{
					cout << "已存在该职工编号，请重新输入" << endl;
				}
				else
				{
					break;
				}
			}

			cout << "请输入新的姓名:" << endl;
			cin >> newname;
			cout << "请输入新的职位:" << endl;
			cout << "1.普通员工" << endl;
			cout << "2.经理" << endl;
			cout << "3.老板" << endl;
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
			cout << "修改成功！" << endl;
			this->save();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Clear_File()
{
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.取消" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//确认清空文件
		//打开模式 ios::trunc 如果存在 删除文件并重新创建
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
		cout << "文件不存在或者记录为空！" << endl;
	}
	else
	{
		cout << "请输入你要查找的方式" << endl;
		cout << "1、按照职工编号查找" << endl;
		cout << "2、按照职工姓名查找" << endl;

		int select = 0;

		cin >> select;

		if (select == 1)
		{
			int id;
			cout << "请输入要查找的职工编号" << endl;
			cin >> id;
			int ret = IsExit(id);

			if (ret == -1)
			{
				cout << "查找失败，没有找到该编号的员工" << endl;
			}
			else
			{
				cout << "查找成功，该员工信息如下：" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "请输入要查找员工的姓名：" << endl;
			cin >> name;
			bool flag = false;

			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					cout << "查找成功，职工编号为：" << this->m_EmpArray[i]->m_Id << "的信息如下：" << endl;
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				//查找失败
				cout << "查无此人，查找失败" << endl;
			}
		}
		else
		{
			cout << "输入选项有误，请重新输入" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::Sort_Emp()
{
	if (this->m_FileEmpty)
	{
		cout << "文件不存在或者记录为空！" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请输入你要排序的方式" << endl;
		cout << "1、按照职工编号升序" << endl;
		cout << "2、按照职工编号降序" << endl;

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
		cout << "排序成功，排序后的结果为：" << endl;
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