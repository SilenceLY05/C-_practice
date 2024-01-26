#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyString
{
	friend ostream& operator<<(ostream& cout, MyString& str);
	friend istream& operator>>(istream& cin, MyString& str);
public:
	MyString(const char* str);
	
	MyString(const MyString& str);

	//���������������
	char& operator[](int index);

	//���صȺŸ�ֵ�����
	MyString& operator=(MyString& str);

	MyString& operator=(char* str);

	MyString& operator+(MyString& str);

	MyString& operator+(char* str);

	~MyString();

private:
	//ָ��������ַ���ָ��
	char* pString;

	//�ַ�������
	int m_Size;
};