#include<iostream>
using namespace std;
#include <string>

//优点1：将所有成员属性设置为私有，可以自己控制读写权限

//优点2：对于写权限，我们可以检测数据的有效性

//设计人类
class Person
{
public:
	void setName(string name)//设置姓名
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}

	//获取年龄 可读可写 如果想要修改（年龄的范围必须是0~150之间）

	int getAge()//获取年龄
	{
		m_Age = 0;//初始化为0岁
		return m_Age;
	}

	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
			m_Age = 0;
			return;
		}
		m_Age = age;
	}

	void setLover(string lover)
	{
		m_Love = lover;
	}

private:
	string m_Name;//姓名   可读可写

	int m_Age;//年龄  只读
	
	string m_Love;//恋人  只写


};

int main4()
{
	Person p;
	p.setName("张三");

	cout << "姓名为：" << p.getName() << endl;

	cout << "年龄为：" << p.getAge() << endl;

	p.setLover("韩梅梅");
	//cout << "恋人为：" << p.m_Love << endl;

	system("pause");
	return 0;
}