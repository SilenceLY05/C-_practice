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
//	cout << "������ѧ��������" << endl;
//	cin >> name;
//
//	S1.S_Name = name;
//	
//	string id;
//	cout << "������ѧ��id��" << endl;
//	cin >> id;
//
//	S1.S_Id = id;
//
//	cout << "�������ѧ������Ϊ��" << S1.S_Name << "  �������ѧ��idΪ��" << S1.S_Id << endl;
//
//	system("pause");
//	return 0;
//}

class Student
{

	//���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա����

public:

	//����
	string m_name;//����
	string m_id;//ѧ��

	//��Ϊ
	//��ʾ������ѧ��
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
		cout << "�������ѧ������Ϊ��" << m_name << endl;
		cout << "�������ѧ��IDΪ��" << m_id << endl;
	}
};

int main1()
{
	Student s1;
	s1.setName("����");
	//s1.m_name = "����";
	//s1.m_id = "221122112211";
	s1.setId("222");

	s1.showStudent();

	system("pause");
	return 0;
}