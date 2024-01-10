#include"WorkerManager.h"

WorkerManager::WorkerManager()
{
	//1、文件不存在的情况
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//读文件

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;

		this->m_EmpNum = 0;

		this->m_EmpArray = NULL;

		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}


	//2、文件存在 数据为空
	char ch;
	ifs >> ch;

	if (ifs.eof())
	{
		cout << "文件为空！" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;

		ifs.close();
		return;
	}
	 
	 //3、文件存在 数据也存在
	int num = this->get_EmpNum();

	this->m_EmpNum = num;

	this->m_EmpArray = new Worker * [this->m_EmpNum];//根据职工数创建数组 开辟空间

	this->init_Emp();//将文件中的数据存到数组中

	
	////初始化人数
	//this->m_EmpNum = 0;

	////初始化数组指针
	//this->m_EmpArray = NULL;
}

//显示菜单
void WorkerManager::Show_Menu()
{
	cout << "*****************************************" << endl;
	cout << "********* 欢迎使用职工管理系统! *********" << endl;
	cout << "************ 0、退出管理系统 ************" << endl;
	cout << "************ 1、增加职工信息 ************" << endl;
	cout << "************ 2、显示职工信息 ************" << endl;
	cout << "************ 3、删除离职员工 ************" << endl;
	cout << "************ 4、修改职工信息 ************" << endl;
	cout << "************ 5、查看职工信息 ************" << endl;
	cout << "************ 6、按照编号排序 ************" << endl;
	cout << "************ 7、清空所有文档 ************" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

//退出系统函数实现
void WorkerManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

//批量添加职工
void WorkerManager::Add_Emp()
{
	cout << "请输入添加职工数量： " << endl;
	int addNum = 0;//保存用户的输入数量
	cin >> addNum;

	if (addNum > 0)
	{

		//计算添加的新空间
		int newSize = this->m_EmpNum + addNum;//新空间大小 = 原记录人数 + 新增人数

		Worker** newSpace = new Worker * [newSize];//开辟新空间

		//将原来的数据拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		for (int i = 0; i < addNum ; i++)
		{
			int id;//输入职工号

			string name;//输入职工姓名

			int dSelect;//输入部门选择


			cout << "请输入第" << i + 1 << "号新员工的编号：" << endl;
			while (1)
			{
				cin >> id;
				int ret = this->IsExist(id);
				if (ret != -1)
				{
					cout << "编号重复，请重新输入" << endl;
				}
				else
				{
					break;
				}
			}

			cout << "请输入第" << i + 1 << "号新员工的姓名：" << endl;
			cin >> name;

			cout << "请选择该职工岗位" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
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

			//将创建的职工指针保存在数组中
			newSpace[this->m_EmpNum + i] = worker;
		}
		//释放原来的空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的职工人数
		this->m_EmpNum = newSize;

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "恭喜您添加成功" << addNum << "名新职工" << endl;

		//保存数据到文件中
		this->save();
	}
	else
	{
		cout << "输入有误！" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//用输出的方式打开文件 ---写文件

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
		//记录人数
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

		//存放在数组中
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();


}

//显示职工
void WorkerManager::Show_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
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


//删除职工
void WorkerManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		//按照职工编号删除员工
		cout << "请输入您要删除的职工编号" << endl;

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

			cout << "删除成功！" << endl;
		}
		else
		{
			cout << "删除失败" << endl;
		}
	}
	system("pause");
	system("cls");
}


//判断职工是否存在
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

//修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入修改职工的编号：" << endl;

		int id;
		cin >> id;

		int ret = this->IsExist(id);

		if (ret != -1)
		{
			//查找到职工编号
			delete this->m_EmpArray[ret];

			int newId = 0;
			string newName = " ";
			int dSelect = 0;

			cout << "查找到：" << id << "号职工，请输入新的职工编号" << endl;

			while (1)
			{
				cin >> newId;
				int ret = this->IsExist(newId);
				if (ret != -1)
				{
					cout << "编号重复，请重新输入" << endl;
				}
				else
				{
					break;
				}
			}
			cout << "请输入新的姓名" << endl;
			cin >> newName;

			cout << "请输入新的岗位" << endl;
			cout << "1、普通员工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
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

			cout << "修改成功！" << endl;

			this->save();
		}
		else
		{
			cout << "修改失败，未查到该员工" << endl;
		}

	}
	system("pause");
	system("cls");
}

//查找职工
void WorkerManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请选择查找方式" << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按职工姓名查找" << endl;

		int select = 0;
		cin >> select;


		if (select == 1)
		{
			int id;
			cout << "请输入要查找的职工编号：" << endl;

			cin >> id;
			int ret = IsExist(id);

			if (ret != -1)
			{
				cout << "查找成功，该员工信息如下：" << endl;
				this->m_EmpArray[ret]->ShowInfo();
			}
			else
			{
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == 2)
		{
			string name;
			cout << "请输入要查找的职工姓名：" << endl;

			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if(this->m_EmpArray[i]->m_Name==name)
				{ 
					cout << "查找成功，职工编号为："
						<< m_EmpArray[i]->m_Id
						<< "号的信息如下：" << endl;

					flag = true;
					this->m_EmpArray[i]->ShowInfo();
				}
			}
			if (flag == false)
			{
				cout << "查无此人，查找失败" << endl;
			}
		}
		else
		{
			cout << "输入选项有误" << endl;
		}
	}
	system("pause");
	system("cls");
}


//排序职工
void WorkerManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或数据为空" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "请输入排序方式：" << endl;
		cout << "1、按照降序排列" << endl;
		cout << "2、按照升序排列" << endl;

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

		cout << "排序成功，排序后的结果为：" << endl;
		this->save();
		this->Show_Emp();

	}
}

//清空文件
void WorkerManager::Clean_File()
{
	cout << "确认清空？" << endl;
	cout << "1、确定" << endl;
	cout << "2、取消" << endl;

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
		cout << "清除成功" << endl;
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