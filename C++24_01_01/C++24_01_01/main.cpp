#include <iostream>
using namespace std;
#include <string>

////拷贝构造函数调用时机
////使用一个已经创建完毕的对象来初始化一个新对象
////值传递的方式给函数参数传值 以值的方式返回局部对象
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数" << endl;
//		m_Age = 0;
//	}
//	Person(int age)
//	{
//		cout << "Person有参构造函数" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//
//	int m_Age;
//
//};
//
//
//void Test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "P2的年龄为： " << p2.m_Age << endl;
//}
//
//void DoWork(Person p)//实参传给形参的时候会调用拷贝构造函数
//{
//
//}
//
//void Test02()
//{
//	Person p;
//	DoWork(p);
//
//}
//
//Person DoWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void Test03()
//{
//	Person p = DoWork2();
//	cout << (int*)&p << endl;
//}
//
//
//int main()
//{
//	//Test01();
//	//Test02();
//	Test03();
//
//	system("pause");
//	return 0;
//}


////构造函数调用规则
////默认构造函数（无参，函数体为空）  默认析构函数（无参，函数体为空）   默认拷贝构造函数，对属性进行值拷贝
//
////构造函数调用规则如下：
////如果用户定义有参构造函数，C++不再提供默认无参构造，但是会提供默认拷贝构造
////如果用户定义拷贝构造，C++不会再提供其他构造函数
//
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person默认构造函数" << endl;
//	//}
//	//Person(int age)
//	//{
//	//	cout << "Person有参构造函数" << endl;
//	//	m_Age = age;
//	//}
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int m_Age;
//
//};
//
////void Test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////
////	cout << "p2的年龄为：" << p2.m_Age << endl;
////}
//
//void Test02()
//{
//	Person p;
//	//Person p2(p);
//	//cout << "p2的年龄为：" << p2.m_Age << endl;
//}
//
//
//int main()
//{
//	//Test01();
//	Test02();
//
//	system("pause");
//	return 0;
//}


////浅拷贝：简单的赋值拷贝操作
////深拷贝：在堆区重新申请空间，进行拷贝操作
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数" << endl;
//	}
//	Person(int age,int height)
//	{
//		cout << "Person有参构造函数" << endl;
//		m_Age = age;
//		m_Height = new int(height);
//	}
//	////浅拷贝带来的问题就是堆区内存重复释放
//	//Person(const Person& p)
//	//{
//	//	cout << "Person拷贝构造函数" << endl;
//	//	m_Age = p.m_Age;
//	//	m_Height = p.m_Height;
//	//}
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//		//析构将我们在堆区开辟的数据做一个释放的操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//	}
//
//
//	int m_Age;
//	int* m_Height;
//};
//
//
//void Test01()
//{
//	Person p1(18,160);
//	cout << "p1的年龄为：" << p1.m_Age <<  "  p1的身高为：" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄为：" << p2.m_Age << "  p2的身高为：" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	Test01();
//
//	system("pause");
//	return 0;
//}


////初始化列表：C++提供了初始化列表语法，用来初始化属性  语法：构造函数():属性1(值1)，属性2(值2)...{}
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person默认构造函数" << endl;
//	//}
//
//	////传统方式初始化
//	//Person(int a,int b ,int c)
//	//{
//	//	cout << "Person有参构造函数" << endl;
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//列表初始化属性
//	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
//	{
//		cout << "Person有参构造函数" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数" << endl;
//
//	}
//	
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//	
//
//	int m_A;
//	int m_B;
//	int m_C;
//
//};
//
//void Test01()
//{
//	Person p(10,20,30);
//	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << "  m_C= " << p.m_C << endl;
//}


////C++中类的成员可以是另一个类的对象，我们称该成员为对象成员
//
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		cout << "Phone有参构造函数" << endl;
//		m_PName = name;
//	}
//
//	~Phone()
//	{
//		cout << "Phone析构函数" << endl;
//	}
//	//手机品牌名称
//	string m_PName;
//};
//
//class Person
//{
//public:
//	//Phone m_Phone = pname  隐式转换法
//	Person(string name,string pname):m_Name(name),m_Phone(pname)
//	{
//		cout << "Person有参构造函数" << endl;
//	}
//	/*Person(class a)
//	{
//		cout << "Person有参构造函数" << endl;
//		m_Age = age;
//	}
//	Person(const A& p)
//	{
//		cout << "Person拷贝构造函数" << endl;
//		m_Age = p.m_Age;
//	}*/
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//
//
////当其他类的对象作为本类成员，构造时候先构造类对象，在构造自身  析构顺序与构造相反
//void Test01()
//{
//	Person p("张三", "苹果");
//	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << endl;
//}
//
//int main()
//{
//	Test01();
//
//	system("pause");
//	return 0;
//}




//静态成员就是在成员变量和成员函数前价格关键字static，称之为静态成员
//静态成员分为：静态成员变量(所有对象共享同一份数据，在编译阶段分配内存，类内声明 类外初始化)
//静态成员函数(所有对象共享同一个函数，静态成员函数只能访问静态成员变量)


//class Person
//{
//public:
//	//所以对象都共享同一份数据
//	static int m_A;
//
//	//静态成员变量也是有访问权限的
//private:
//	static int m_B;
//
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
//void Test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p.m_A = 200;
//	cout << p.m_A << endl;
//}
//
//void Test02()
//{
//	//静态成员变量，不属于某一个对象上，所有对象都共享同一份数据
//	//因此静态成员变量访问方式：1.通过对象进行访问  
//	Person p;
//	cout << p.m_A << endl;
//
//	//2.通过类名进行访问
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl;类外访问不到私有静态成员变量
//}


class Person
{
public:
	static void Func()
	{
		m_A = 200;//静态成员函数可以访问静态成员变量
		//m_B = 400;  静态成员函数不可以访问非静态成员变量,无法区分到底是哪个m_B的属性
		cout << "static void Func调用" << endl;
	}

	static int m_A;
	int m_B;
private:
	static void Func2()
	{
		cout << "static void Func2调用" << endl;
	}
};

int Person::m_A = 100;


void Test01()
{
	//1.通过对象访问
	Person p;
	p.Func();
	//2.通过类名访问
	Person::Func();
}

int main()
{
	Test01();
	//Test02();

	system("pause");
	return 0;
}