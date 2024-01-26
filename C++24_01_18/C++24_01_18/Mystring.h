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

	//重载中括号运算符
	char& operator[](int index);

	//重载等号赋值运算符
	MyString& operator=(MyString& str);

	MyString& operator=(char* str);

	MyString& operator+(MyString& str);

	MyString& operator+(char* str);

	~MyString();

private:
	//指向堆区的字符串指针
	char* pString;

	//字符串长度
	int m_Size;
};