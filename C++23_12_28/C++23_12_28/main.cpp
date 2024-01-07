#include <iostream>
using namespace std;
#include<string>
#include "Class_Point.h"

////封装是C++面向对象的三大特性之一
////封装的意义：将属性和行为作为一个整体，表现生活中的事务，将属性和行为加以权限控制
////封装意义一：在设计类的时候，属性和行为写在一起表现事物
////语法：class 类名(访问权限：属性/行为)  类中的属性和行为统一称为成员
//const double PI = 3.14;
//
//class Circle
//{
//	//公共权限
//public:
//	//属性
//	int m_R;
//
//	//行为  - 通常使用一个函数
//	double calculateZC()
//	{
//		return 2 * PI * m_R;
//	}
//}; 
//
////设计一个学生，属性有姓名和学号，可以给姓名和学号赋值，或者显示姓名或学号
//class Student
//{
//public:
//	//属性
//	int m_Id;
//	string m_Name;
//
//	//行为
//	void ShowMessage()
//	{
//		cout << "学生姓名为：" << m_Name << "  学生ID为：" << m_Id << endl;
//	}
//
//	//给姓名赋值
//	void SetMessage(string name,int number)
//	{
//		m_Name = name;
//		m_Id = number;
//	}
//};
//
//
//int main()
//{
//	////通过圆类 创建具体的圆
//	////实例化 (通过一个类 创建一个对象的过程)
//	//Circle c1;
//
//	////给圆对象的属性进行赋值操作
//	//c1.m_R = 4;
//
//	//cout << "圆的周长为 = " << c1.calculateZC() << endl;
//
//	//创建一个具体的学生
//	Student s1;
//	s1.SetMessage("张三",123000123);
//	s1.ShowMessage();
//
//	Student s2;
//	s2.SetMessage("李四", 123000124);
//	s2.ShowMessage();
//
//
//	system("pause");
//	return 0;
//}


////封装意义二：类在设计时，可以把属性和行为放在不同的权限下，加以控制
////访问权限有三种：public 公共权限(类外可以访问)   protected 保护权限(类外不可以访问)   private 私有权限(类外不可以访问)
//
//
//class Person
//{
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Password;
//
//public:
//	void Func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//
//};
//
//
//int main()
//{
//	Person p1;
//
//	p1.Func();
//	cout << p1.m_Name << endl;
//
//	system("pause");
//	return 0;
//}


////c++中struct和class唯一的区别是默认的访问权限不同
////区别：struct默认权限为公共的 class默认权限为私有
//
//class C1
//{
//	int m_A;
//};
//
//struct C2
//{
//	int m_A;
//};
//
//int main()
//{
//	C1 c1;
//	C2 c2;
//
//	c1.m_A = 10;
//	c2.m_A = 10;
//	system("pause");
//	return 0;
//}


////成员属性设置为私有
////优点1：将所有成员属性设置为私有，可以自己控制读写权限  优点2：对于写权限，我们可以检测数据的有效性
//
//
//class  Person
//{
//public:
//
//	void SetName(string name)
//	{
//		m_Name = name;
//	}
//	string getname()
//	{
//		return m_Name;
//	}
//
//	void SetAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "年龄输入有误，复制失败" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	int getage()
//	{
//		return m_Age;
//	}
//
//	void SetIdol(string idol)
//	{
//		m_Idol = idol;
//	}
//
//private:
//	string m_Name;   //姓名 可读可写
//
//	int m_Age = 18;   //年龄 只读  也可以写 （年龄必须是0到150之间）
//
//	string m_Idol;  //偶像 只写
//
//};
//
//
//int main()
//{
//	Person p1;
//
//	p1.SetName("张三");
//	cout << "姓名为：" << p1.getname() << endl;
//
//	p1.SetIdol("赵四");
//	p1.SetAge(199);
//	cout << "年龄为：" << p1.getage() << endl;
//
//
//	system("pause");
//	return 0;
//}


//class Cube
//{
//public:
//	void SetHigh(int high)
//	{
//		m_H = high;
//	}
//
//	int getHigh()
//	{
//		return m_H;
//	}
//
//	void SetLength(int length)
//	{
//		m_L = length;
//	}
//
//	int getLength()
//	{
//		return m_L;
//	}
//
//	void SetWidth(int width)
//	{
//		m_W = width;
//	}
//
//	int getWidth()
//	{
//		return m_W;
//	}
//
//	int CalS(int m_H, int m_W, int m_L)
//	{
//		return (m_H * m_W * 2 + m_H * m_L * 2 + m_W * m_L * 2);
//	}
//
//	int CalV(int m_H, int m_W, int m_L)
//	{
//		return m_H * m_W * m_L;
//	}
//
//	//利用成员函数判断两个立方体是否相等
//	bool isSameByClass(Cube &c)
//	{
//		if (m_L == c.getLength() && m_W == c.getWidth() && m_H == c.getHigh())
//			return true;
//		else
//			return false;
//	}
//
//private:
//	int m_W;
//	int m_H;
//	int m_L;
//};
//
//
////利用全局函数来判断两个立方体是否相等
//bool isSame(Cube &c1, Cube &c2)
//{
//	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHigh() == c2.getHigh())
//		return true;
//	else
//		return false;
//}
//
//
//int main()
//{
//	Cube c1;
//	c1.SetHigh(10);
//	c1.SetLength(12);
//	c1.SetWidth(14);
//
//	int H = c1.getHigh();
//	int L = c1.getLength();
//	int W = c1.getWidth();
//	cout << "立方体高为：" << c1.getHigh() << endl;
//	cout << "立方体长为：" << c1.getLength() << endl;
//	cout << "立方体宽为：" << c1.getWidth() << endl;
//
//	cout << "立方体的面积为：" << c1.CalS(H, W, L) << endl;
//	cout << "立方体的体积为：" << c1.CalV(H, W, L) << endl;
//
//	Cube c2;
//	c2.SetHigh(10);
//	c2.SetLength(12);
//	c2.SetWidth(14);
//
//	bool ret = isSame(c1, c2);
//
//	if (ret)
//		cout << "c1和c2相等" << endl;
//	else
//		cout << "c1和c2不相等" << endl;
//
//
//	//利用成员函数判断
//	bool ret2 = c1.isSameByClass(c2);
//
//	if (ret2)
//		cout << "c1和c2相等" << endl;
//	else
//		cout << "c1和c2不相等" << endl;
//	system("pause");
//	return 0;
//}






////判断点与圆的关系
//void isInCircle(Circle& c, Point& p)
//{
//	int ret = (p.getX() - c.GetCenter().getX()) * (p.getX() - c.GetCenter().getX())
//		+ (p.getY() - c.GetCenter().getY()) * (p.getY() - c.GetCenter().getY());
//
//	int ret2 = c.getR() * c.getR();
//
//	if (ret > ret2)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else if (ret == ret2)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//
//
//int main()
//{
//	Point p;
//	Point p2;
//	Circle c;
//	p.SetX(10);
//	p.SetY(10);
//	p2.SetX(0);
//	p2.SetY(0);
//
//	c.SetCenter(p2);
//	c.SetR(5);
//
//	isInCircle(c, p);
//
//	c.isInCircle(p);
//
//	system("pause");
//	return 0;
//}


////构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无需手动调用  类名(){}
////析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作  ~类名(){}
//
//class Person
//{
//public:
//	//1.1构造函数
//	Person()
//	{
//		cout << "Person构造函数的调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数的调用" << endl;
//	}
//};
//
//
//void Test01()
//{
//	Person p;
//
//}
//
//int main()
//{
//	Test01();
//
//	//在main函数里对象并未被释放，所以只有构造没有析构
//	Person p2;
//
//	system("pause");
//	return 0;
//}



//构造函数的分类及调用
//两种分类方式：按参数分为 有参构造和无参构造  按类型分为 普通构造和拷贝构造
//三种调用方式：括号法 显示法 隐式转换法

//无参构造
class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}


	//拷贝构造函数
	Person(const Person &p)
	{
		//将传入的人身上的所有属性拷贝到我身上
		age = p.age;
		cout << "Person的拷贝构造函数调用" << endl;
	}

	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int age;
};


void Test()
{
	////括号法
	//Person p;//默认构造函数调用
	//Person p2(10); //有参构造函数调用
	//Person p3(p2);


	////注意事项  调用默认构造函数的时候不要加()
	////因为编译器会认为是一个函数的声明,不会认为在创建对象
	//cout << "p2的年龄为： " << p2.age << endl;
	//cout << "p3的年龄为： " << p3.age << endl;

	////显示法
	//Person p1;
	//Person p2 = Person(10);//有参构造
	//Person p3 = Person(p2);

	////Person(10);//匿名对象  特点：当前行执行结束后，系统会立即回收匿名对象

	////cout << "aaa" << endl;

	////注意事项2 不要利用拷贝构造函数初始化匿名对象
	//Person(p3);//显示重定义 编译器会认为Person(p3) == Person p3  会认为是对象声明


	//隐式转换法
	Person p4 = 10;//相当于 Person p3 = Person(10)
	Person p5 = p4;
}


int main()
{
	Test();

	system("pause");
	return 0;
}
