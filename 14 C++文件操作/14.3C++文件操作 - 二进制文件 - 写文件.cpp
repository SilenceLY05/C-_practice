#include<iostream>
using namespace std;
#include<fstream>

//写文件函数原型：ostream& write(const char*buffer,int len)

//class person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//
//};
//
//void test01()
//{
//	//创建流对象
//	ofstream ofs;
//
//	// 打开文件
//	ofs.open("person.txt", ios::out | ios::binary);
//
//	// 写文件
//	person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(person));
//
//	// 关闭文件
//	ofs.close();
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
