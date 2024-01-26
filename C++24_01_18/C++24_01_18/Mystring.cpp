#include"Mystring.h"

ostream& operator<<(ostream& cout, MyString& str)
{
	cout << str.pString;
	return cout;
}

istream& operator>>(istream& cin, MyString& str)
{
	//判断str中原来是否有数据
	if (str.pString != NULL)
	{
		delete[] str.pString;
		str.pString = NULL;
	}

	char buff[1024];
	cin >> buff;

	//将buff中的数据放入到内部维护的pString
	str.pString = new char[strlen(buff) + 1];
	strcpy(str.pString, buff);
	str.m_Size = strlen(buff);

	return cin;
}

MyString::MyString(const char* str)
{
	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);

	this->m_Size = strlen(str);
}

MyString::MyString(const MyString& str)
{
	this->pString = new char[strlen(str.pString) + 1];
	strcpy(this->pString, str.pString);

	this->m_Size = strlen(str.pString);
}

MyString::~MyString()
{
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}
}

char& MyString::operator[](int index)
{
	return this->pString[index];
}


MyString& MyString::operator=(MyString& str)
{
	//先判断原来是否有数据
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}

	this->pString = new char[strlen(str.pString) + 1];
	strcpy(this->pString, str.pString);
	this->m_Size = strlen(str.pString);

	return *this;
}

MyString& MyString::operator=(char* str)
{
	//先判断原来是否有数据
	if (this->pString != NULL)
	{
		delete[] this->pString;
		this->pString = NULL;
	}

	this->pString = new char[strlen(str) + 1];
	strcpy(this->pString, str);
	this->m_Size = strlen(str);

	return *this;
}

MyString& MyString::operator+(MyString& str)
{
	int newSize = this->m_Size + strlen(str.pString) + 1;
	char* temp = new char[newSize];
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str.pString);
	MyString newString(temp);
	delete[] temp;
	return newString;
}

MyString& MyString::operator+(char* str)
{
	int newSize = this->m_Size + strlen(str) + 1;
	char* temp = new char[newSize];
	memset(temp, 0, newSize);
	strcat(temp, this->pString);
	strcat(temp, str);
	MyString newString(temp);
	delete[] temp;
	return newString;
}