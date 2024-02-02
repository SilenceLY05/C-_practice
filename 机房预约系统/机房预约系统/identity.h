#pragma once
#include<iostream>
using namespace std;

//身份类抽象
class Identity
{
public:

	//操作菜单
	virtual void operMenu() = 0;

	string m_Name;
	string m_Pwd;//密码
};
