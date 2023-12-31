#include<iostream>
using namespace std;
#include <string>

//class Student
//{
//public:
//
//	string S_Name;
//	string S_Id;
//
//};
//
//int main()
//{
//	Student S1;
//
//	string name;
//	cout << "请输入学生姓名：" << endl;
//	cin >> name;
//
//	S1.S_Name = name;
//	
//	string id;
//	cout << "请输入学生id：" << endl;
//	cin >> id;
//
//	S1.S_Id = id;
//
//	cout << "您输入的学生姓名为：" << S1.S_Name << "  您输入的学生id为：" << S1.S_Id << endl;
//
//	system("pause");
//	return 0;
//}

class Student
{

	//类中的属性和行为 我们统一称为成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法

public:

	//属性
	string m_name;//姓名
	string m_id;//学号

	//行为
	//显示姓名和学号
	void setName(string name)
	{
		m_name = name;
	}

	void setId(string id)
	{
		m_id = id;
	}

	void showStudent()
	{
		cout << "您输入的学生姓名为：" << m_name << endl;
		cout << "您输入的学生ID为：" << m_id << endl;
	}
};

int main1()
{
	Student s1;
	s1.setName("张三");
	//s1.m_name = "张三";
	//s1.m_id = "221122112211";
	s1.setId("222");

	s1.showStudent();

	system("pause");
	return 0;
}