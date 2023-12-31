#include<iostream>
using namespace std;

//封装：在类的设计时，可以把属性和行为放在不同的权限下，加以控制

//访问权限有3种：
//1、public 公共权限   类内可以访问，类外可以访问

//2、protected 保护权限  类内可以访问，类外不可以访问

//3、private 私有权限  类内可以访问，类外不可以访问

class Person1
{

public:
	//公共权限
	string m_Name;//姓名
	
	//保护权限
protected:
	string m_Car;

	//私有权限
private:
	int m_Password;//银行卡密码

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}

};

int main2()
{

	Person1 p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";
	//p1.m_Password = 234567;

	system("pause");
	return 0;
}