#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <iomanip>//标准输出流 控制符方式格式化输出的头文件
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string>

//void Test01()
//{
	////cin.get(两个参数)读取字符串时不会把换行符拿走，遗留在缓冲区里面
	//char buff[1024];
	//cin.get(buff, sizeof(buff));
	//char c = cin.get();

	//if (c == '\n')
	//{
	//	cout << "换行还在缓冲区" << endl;
	//}
	//else
	//{
	//	cout << "换行不在缓冲区" << endl;
	//}
	//cout << buff << endl;


	////cin.getline()
	//char buff[1024];
	//cin.getline(buff, sizeof(buff));//读取了换行符 并将换行符扔掉了

	//char c = cin.get();

	//if (c == '\n')
	//{
	//	cout << "换行还在缓冲区" << endl;
	//}
	//else
	//{
	//	cout << "换行不在缓冲区" << endl;
	//}
	//cout << buff << endl;

	////cin.ignore()
	//cin.ignore();//没有参数代表忽略一个字符,带参数几个表示忽略几个字符

	//char c = cin.get();

	//cout << "c = " << c << endl;

	////cin.peek()偷窥  看一下首字符再放回缓冲区 
	//char c = cin.peek();

	//cout << "c = " << c << endl;

	//c = cin.get();

	//cout << "c = " << c << endl;

	//cin.putback()
	//char c = cin.get();
	//cin.putback(c);

	//char buff[1024];
	//cin.getline(buff, 1024);
	//cout << buff << endl;
//}


////判断用户输入的是字符串还是数字
//void Test01()
//{
//	cout << "请输入一个字符串或数字" << endl;
//	char c = cin.peek();
//
//	if (c >= '0' && c <= '0')
//	{
//		int num;
//		cin >> num;
//		cout << "您输入的是数字," << num << endl;
//	}
//	else
//	{
//		char buff[1024] = { 0 };
//		cin >> buff;
//		cout << "您输入的是字符串," << buff << endl;
//	}
//}

//让用户输入一个数字，必须在0-10之间，如果有误，重新输入
//void Test01()
//{
//	cout << "请输入一个0-10之间的数字" << endl;
//	int num = 0;
//
//	while (true)
//	{
//		cin >> num;
//		if (num > 0 && num < 10)
//		{
//			
//			cout << "您输入的数字为：" << num << endl;
//			break;
//		}
//
//		cout << "您输入的有误，请重新输入" << endl;
//
//		//缓冲区中的标志位 0代表正常  1代表异常
//		cin.clear();
//		cin.sync();//清空标志位，并刷新缓冲区
//		cin.ignore();//VS 2015以上需要添加cin.ignore()
//		cout << "cin.fail = " << cin.fail() << endl;
//	}
//
//}

//void Test01()
//{
//	//cout.put('a');
//
//	//char buff[1024] = "hello world";
//	//cout.write(buff, strlen(buff));
//
//	////通过流成员函数
//	//int number = 99;
//	//cout.widen(20);//预留20个位置来输出
//	//cout.fill('*');//用*来填充空格
//	//cout.setf(ios::left);//设置输出格式 在本域宽内向左对齐
//	//cout.unsetf(ios::dec);//卸载10进制
//	//cout.setf(ios::hex);//安装16进制
//	//cout.setf(ios::showbase);//设置显示进制基数
//	//cout.unsetf(ios::hex);//卸载十六进制
//	//cout.setf(ios::oct);//安装8进制
//	//cout << number << endl;
//
//	//使用控制符
//	int number = 99;
//	cout << setw(20)//预留20个位置来输出
//		//<< setfill('^')//用 ^ 来填充空格
//		//<< setiosflags(ios::showbase)//设置显示进制基数
//		//<< setiosflags(ios::left)//设置输出格式 在本域宽内向左对齐
//		//<< hex//安装16进制
//		<< number << endl;
//	
//}


////写文件
//void Test01()
//{
//	ofstream ofs;
//	//参数 文件路径 打开方式
//	ofs.open("test.txt", ios::out | ios::trunc);
//
//	if (!ofs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//写文件
//	ofs << "姓名：萨尔" << endl;
//	ofs << "年龄：18" << endl;
//	ofs << "性别：男" << endl;
//
//	ofs.close();
//
//}

////读文件
//void Test02()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "打开失败" << endl;
//		return;
//	}
//
//	////第一种方式
//	//char buff[1024] = { 0 };
//
//	////将每行输入读入到缓冲区中
//	//while (ifs >> buff)//按行读取，直到读到文件尾
//	//{
//	//	cout << buff << endl;
//	//}
//	 
//	////第二种方式
//	//char buff[1024] = { 0 };
//	//while (!ifs.eof())
//	//{
//	//	ifs.getline(buff, sizeof(buff));
//	//	cout << buff << endl;
//	//}
//	
//	//第三种方式，单个字符的读取
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//	ifs.close();
//}
//char* getStr1()
//{
//	char* p = "abcdef";
//	return p;
//}
//
//int main()
//{
//	//int a;
//	//int b;
//
//	//char* p;
//
//	//printf("&a:%d\r\n", &a);
//
//	//*((int*)5307400) = 200;
//	//printf("a:%d", a);
//
//	//p = 5307400;
//	//*p = 300;
//
//	system("pause");
//	return 0;
//}