#include<iostream>
#include<fstream>
using namespace std;

//���ļ�����ԭ�ͣ�istream&read (char *buffer,int len)

class person
{
public:
	char m_Name[64];
	int m_Age;

};

void test01()
{
	//����������
	ifstream ifs;

	// ���ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	// ���ļ�
	person p;

	ifs.read((char*)&p, sizeof(person));
	cout << "������ " << p.m_Name << "  ����Ϊ�� " << p.m_Age << endl;


	// �ر��ļ�
	ifs.close();

}

int main()
{

	test01();
	system("pause");
	return 0;
}