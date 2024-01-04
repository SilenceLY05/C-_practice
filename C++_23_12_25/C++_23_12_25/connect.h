#pragma once

#include <iostream>
using namespace std;
#include <string>

#define MAX 1000

struct People
{
	string m_Name;
	int m_Sex;//1�� 2Ů
	int m_Age;
	string m_Phone;
	string m_Addr;
};


struct AddressBook
{
	struct People personArray[MAX];
	int m_Size;
};



//�����ϵ��
void addPerson(struct AddressBook* abs);

//��ʾ��ϵ��
void ShowPerson(AddressBook* abs);

//�����ϵ���Ƿ����
int IsExit(AddressBook* abs,string name);

//ɾ����ϵ��
void DeletePerson(AddressBook* abs);

//������ϵ��
void FindPersion(AddressBook* abs);

//�޸���ϵ��
void ModifyPerson(AddressBook* abs);

//�����ϵ��
void CleanPerson(AddressBook* abs);


