#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <iomanip>//��׼����� ���Ʒ���ʽ��ʽ�������ͷ�ļ�
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string>

//void Test01()
//{
	////cin.get(��������)��ȡ�ַ���ʱ����ѻ��з����ߣ������ڻ���������
	//char buff[1024];
	//cin.get(buff, sizeof(buff));
	//char c = cin.get();

	//if (c == '\n')
	//{
	//	cout << "���л��ڻ�����" << endl;
	//}
	//else
	//{
	//	cout << "���в��ڻ�����" << endl;
	//}
	//cout << buff << endl;


	////cin.getline()
	//char buff[1024];
	//cin.getline(buff, sizeof(buff));//��ȡ�˻��з� �������з��ӵ���

	//char c = cin.get();

	//if (c == '\n')
	//{
	//	cout << "���л��ڻ�����" << endl;
	//}
	//else
	//{
	//	cout << "���в��ڻ�����" << endl;
	//}
	//cout << buff << endl;

	////cin.ignore()
	//cin.ignore();//û�в����������һ���ַ�,������������ʾ���Լ����ַ�

	//char c = cin.get();

	//cout << "c = " << c << endl;

	////cin.peek()͵��  ��һ�����ַ��ٷŻػ����� 
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


////�ж��û���������ַ�����������
//void Test01()
//{
//	cout << "������һ���ַ���������" << endl;
//	char c = cin.peek();
//
//	if (c >= '0' && c <= '0')
//	{
//		int num;
//		cin >> num;
//		cout << "�������������," << num << endl;
//	}
//	else
//	{
//		char buff[1024] = { 0 };
//		cin >> buff;
//		cout << "����������ַ���," << buff << endl;
//	}
//}

//���û�����һ�����֣�������0-10֮�䣬���������������
//void Test01()
//{
//	cout << "������һ��0-10֮�������" << endl;
//	int num = 0;
//
//	while (true)
//	{
//		cin >> num;
//		if (num > 0 && num < 10)
//		{
//			
//			cout << "�����������Ϊ��" << num << endl;
//			break;
//		}
//
//		cout << "���������������������" << endl;
//
//		//�������еı�־λ 0��������  1�����쳣
//		cin.clear();
//		cin.sync();//��ձ�־λ����ˢ�»�����
//		cin.ignore();//VS 2015������Ҫ���cin.ignore()
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
//	////ͨ������Ա����
//	//int number = 99;
//	//cout.widen(20);//Ԥ��20��λ�������
//	//cout.fill('*');//��*�����ո�
//	//cout.setf(ios::left);//���������ʽ �ڱ�������������
//	//cout.unsetf(ios::dec);//ж��10����
//	//cout.setf(ios::hex);//��װ16����
//	//cout.setf(ios::showbase);//������ʾ���ƻ���
//	//cout.unsetf(ios::hex);//ж��ʮ������
//	//cout.setf(ios::oct);//��װ8����
//	//cout << number << endl;
//
//	//ʹ�ÿ��Ʒ�
//	int number = 99;
//	cout << setw(20)//Ԥ��20��λ�������
//		//<< setfill('^')//�� ^ �����ո�
//		//<< setiosflags(ios::showbase)//������ʾ���ƻ���
//		//<< setiosflags(ios::left)//���������ʽ �ڱ�������������
//		//<< hex//��װ16����
//		<< number << endl;
//	
//}


////д�ļ�
//void Test01()
//{
//	ofstream ofs;
//	//���� �ļ�·�� �򿪷�ʽ
//	ofs.open("test.txt", ios::out | ios::trunc);
//
//	if (!ofs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//д�ļ�
//	ofs << "����������" << endl;
//	ofs << "���䣺18" << endl;
//	ofs << "�Ա���" << endl;
//
//	ofs.close();
//
//}

////���ļ�
//void Test02()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "��ʧ��" << endl;
//		return;
//	}
//
//	////��һ�ַ�ʽ
//	//char buff[1024] = { 0 };
//
//	////��ÿ��������뵽��������
//	//while (ifs >> buff)//���ж�ȡ��ֱ�������ļ�β
//	//{
//	//	cout << buff << endl;
//	//}
//	 
//	////�ڶ��ַ�ʽ
//	//char buff[1024] = { 0 };
//	//while (!ifs.eof())
//	//{
//	//	ifs.getline(buff, sizeof(buff));
//	//	cout << buff << endl;
//	//}
//	
//	//�����ַ�ʽ�������ַ��Ķ�ȡ
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