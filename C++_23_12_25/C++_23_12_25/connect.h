#pragma once

#include <iostream>
using namespace std;
#include <string>

#define MAX 1000

struct People
{
	string m_Name;
	int m_Sex;//1男 2女
	int m_Age;
	string m_Phone;
	string m_Addr;
};


struct AddressBook
{
	struct People personArray[MAX];
	int m_Size;
};



//添加联系人
void addPerson(struct AddressBook* abs);

//显示联系人
void ShowPerson(AddressBook* abs);

//检测联系人是否存在
int IsExit(AddressBook* abs,string name);

//删除联系人
void DeletePerson(AddressBook* abs);

//查找联系人
void FindPersion(AddressBook* abs);

//修改联系人
void ModifyPerson(AddressBook* abs);

//清空联系人
void CleanPerson(AddressBook* abs);


