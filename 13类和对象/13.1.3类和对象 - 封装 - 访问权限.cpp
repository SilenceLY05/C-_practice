#include<iostream>
using namespace std;

//��װ����������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���

//����Ȩ����3�֣�
//1��public ����Ȩ��   ���ڿ��Է��ʣ�������Է���

//2��protected ����Ȩ��  ���ڿ��Է��ʣ����ⲻ���Է���

//3��private ˽��Ȩ��  ���ڿ��Է��ʣ����ⲻ���Է���

class Person1
{

public:
	//����Ȩ��
	string m_Name;//����
	
	//����Ȩ��
protected:
	string m_Car;

	//˽��Ȩ��
private:
	int m_Password;//���п�����

public:
	void func()
	{
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}

};

int main2()
{

	Person1 p1;
	p1.m_Name = "����";
	//p1.m_Car = "����";
	//p1.m_Password = 234567;

	system("pause");
	return 0;
}