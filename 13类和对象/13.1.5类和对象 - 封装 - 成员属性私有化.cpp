#include<iostream>
using namespace std;
#include <string>

//�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��

//�ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��

//�������
class Person
{
public:
	void setName(string name)//��������
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}

	//��ȡ���� �ɶ���д �����Ҫ�޸ģ�����ķ�Χ������0~150֮�䣩

	int getAge()//��ȡ����
	{
		m_Age = 0;//��ʼ��Ϊ0��
		return m_Age;
	}

	//��������
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_Age = 0;
			return;
		}
		m_Age = age;
	}

	void setLover(string lover)
	{
		m_Love = lover;
	}

private:
	string m_Name;//����   �ɶ���д

	int m_Age;//����  ֻ��
	
	string m_Love;//����  ֻд


};

int main4()
{
	Person p;
	p.setName("����");

	cout << "����Ϊ��" << p.getName() << endl;

	cout << "����Ϊ��" << p.getAge() << endl;

	p.setLover("��÷÷");
	//cout << "����Ϊ��" << p.m_Love << endl;

	system("pause");
	return 0;
}