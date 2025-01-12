#include "Manager.h"



//默认构造
Manager::Manager()
{

}

//有参构造
Manager::Manager(string name, string pwd)
{
	this->m_Name = name;
	this->m_Pwd = pwd;

	//初始化容器
	this->InitVector();

	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom c;

	while (ifs >> c.m_ComId && ifs >> c.m_MaxNum)
	{
		vCom.push_back(c);
	}
	cout << "当前机房数量为：" << vCom.size() << endl;

	ifs.close();
}

//选择菜单
void Manager::operMenu()
{
	cout << "欢迎管理员：" << this->m_Name << "登录！" << endl;  
	cout << "\t\t ------------------------------------ \n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|            1.添加账号              |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|            2.查看账号              |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|            3.查看机房              |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|            4.情况预约              |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|            0.注销登录              |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t ------------------------------------ \n";
	cout << "请输入您的选择：" << endl;
}

//添加账号
void Manager::AddPerson()
{
	cout << "请输入添加账号的类型" << endl;
	cout << "1.添加学生" << endl;
	cout << "2.添加老师" << endl;

	string fileName;
	string tip;
	ofstream ofs;

	int select;
	string errorTip;
	
	while (true)
	{
		cin >> select;
		if (select == 1)
		{
			fileName = STUDENT_FILE;
			tip = "请输入学号：";
			errorTip = "学号重复，请重新输入：";
			break;
		}
		else if (select == 2)
		{
			fileName = TEACHER_FILE;
			tip = "请输入职工编号：";
			errorTip = "职工编号重复，请重新输入：";
			break;
		}
		else
		{
			cout << "输入错误，请重新输入！" << endl;
		}
	}
	ofs.open(fileName, ios::in | ios::app);

	int id;
	string name;
	string pwd;
	cout << tip << endl;

	while (true)
	{
		cin >> id;
		bool ret = this->CheckRepeat(id, select);

		if (ret)
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}
	

	cout << "请输入姓名：" << endl;
	cin >> name;

	cout << "请输入密码：" << endl;
	cin >> pwd;

	ofs << id << " " << name << " " << pwd << endl;
	cout << "添加成功" << endl;

	system("pause");
	system("cls");

	ofs.close();

	//初始化容器
	this->InitVector();
	
}

void PrintStudent(Student& s)
{
	cout << "学号：" << s.m_Id << " 姓名：" << s.m_Name << " 密码：" << s.m_Pwd << endl;
}

void PrintTeacher(Teacher& t)
{
	cout << "职工号：" << t.m_EmpId << " 姓名：" << t.m_Name << " 密码：" << t.m_Pwd << endl;
}

//查看账号
void Manager::ShowPerson()
{
	cout << "请选择要查看的内容：" << endl;
	cout << "1.查看所有学生" << endl;
	cout << "2.查看所有老师" << endl;

	int select = 0;

	cin >> select;

	if (select == 1)
	{
		cout << "所有学生信息如下：" << endl;
		for_each(vStu.begin(), vStu.end(), PrintStudent);
	}
	else
	{
		cout << "所有教师信息如下：" << endl;
		for_each(vTea.begin(), vTea.end(), PrintTeacher);
	}

	system("pause");
	system("cls");
}

//查看机房信息
void Manager::ShowComputer()
{
	cout << "机房信息如下：" << endl;
	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << "机房编号：" << it->m_ComId << " 机房最大容量：" << it->m_MaxNum << endl;
	}

	system("pause");
	system("cls");
}

//清空预约记录
void Manager::CleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();

	cout << "清空成功！" << endl;
	system("pause");
	system("cls");
}

//判断是否有重复ID
bool Manager::CheckRepeat(int id, int type)
{
	if (type == 1)//检测学生
	{
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_Id)
			{
				return true;
			}
		}
	}
	else//检测老师
	{
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->m_EmpId)
			{
				return true;
			}
		}
	}

	return false;
}

void Manager::InitVector()
{
	//确保容器情况状态
	vStu.clear();
	vTea.clear();

	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd)
	{
		vStu.push_back(s);
	}

	cout << "当前学生数量为：" << vStu.size() << endl;
	ifs.close();

	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd)
	{
		vTea.push_back(t);
	}
	cout << "当前教师数量为：" << vTea.size() << endl;
	ifs.close();
}

//析构函数
Manager::~Manager()
{

}