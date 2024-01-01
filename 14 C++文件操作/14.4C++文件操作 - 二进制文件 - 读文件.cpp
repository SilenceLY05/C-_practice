#include<iostream>
#include<fstream>
using namespace std;

//读文件函数原型：istream&read (char *buffer,int len)

class person
{
public:
	char m_Name[64];
	int m_Age;

};

void test01()
{
	//创建流对象
	ifstream ifs;

	// 打开文件 判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	// 读文件
	person p;

	ifs.read((char*)&p, sizeof(person));
	cout << "姓名： " << p.m_Name << "  年龄为： " << p.m_Age << endl;


	// 关闭文件
	ifs.close();

}

int main()
{

	test01();
	system("pause");
	return 0;
}