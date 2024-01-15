#include <iostream>
using namespace std;

//模版：模版就是建立通用的模具，大大提高复用性
//模版不可以直接使用，他只是一个框架 模版的通用并不是万能的

//C++提供两种模版机智 函数目标和类模版
//函数模板作用：建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表
//语法： template<typename T> 
//函数声明或定义
//template - 声明创建模版   typename - 表示其后面的符号是一种数据类型 可以用class代替  T - 通用的数据类型，可以替换 通常为大写 


////两个整型交换的函数
//void SwapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////交换两个浮点型的函数
//void SwapFloat(float& a, float& b)
//{
//	float temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模版
//template<class T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，是一个通用类型
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	//SwapInt(a, b);
//	//自动类型推导
//	//mySwap(a, b);
//
//	//显示指定类型
//	mySwap<int>(a, b);
//	cout << a << endl;
//	cout << b << endl;
//
//	float c = 3.23;
//	float d = 23.3;
//	//SwapFloat(c, d);
//	mySwap(c, d);
//	cout << c << endl;
//	cout << d << endl;
//
//}


//自动类型推导，必须推导出一致的数据类型T，才可以使用

////模版必须要确定出T的数据类型，才可以使用
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void func()
//{
//	cout << "func的函数调用" << endl;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//mySwap(a, c);//错误，数据类型不一致
//
//	cout << a << endl;
//	cout << b << endl;
//}
//
//void Test02()
//{
//	func<int>();//不确定T的数据类型 无法使用
//}
//
//int main()
//{
//	//Test01();
//	Test02();
//
//	system("pause");
//	return 0;
//}

//template<class T>
//void mySort(T arr[], int len)
//{
//	T temp;
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//
//void Test01()
//{
//	char charArr[] = "badfceg";
//	int size = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, size);
//	for (int i = 0; i < size; i++)
//	{
//		cout << charArr[i] << " ";
//	}
//	cout << endl;
//	int intArr[] = { 2,3,5,1,6,7,8,5,3,9 };
//	int size1 = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, size1);
//	for (int i = 0; i < size1; i++)
//	{
//		cout << intArr[i] << " " ;
//	}
//}

////普通函数和函数模版的区别
////普通函调用时可以发生自动类型转换(隐式类型转换)
////函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
////如果利用显示指定类型的方式，可以发生隐式类型转换
//
////普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template <class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//c对应的是99
//	cout << myAdd01(a, c) << endl;
//
//	//自动类型推导,不会发生隐式类型转换
//	cout << myAdd02(a, (int)c) << endl;
//	//显示指定类型
//	cout << myAdd02<int>(a, c) << endl;
//}

////普通函数和函数模板调用规则
////1.如果函数模板和普通函数都可以实现，优先调用普通函数
////2.可以通过空模板参数列表来调用函数模板
////3.函数模板也可以发生重载
////4.如果函数模板可以产生更好的匹配，优先调用函数模板
//
//void myPrint(int a, int b)
//{
//	cout << "调用普通函数" << endl;
//}
//
//template <class T>
//void myPrint(T a, T b)
//{
//	cout << "调用的是函数模板" << endl;
//}
//
//
//template <class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "调用的是函数模板重载" << endl;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//myPrint(a, b);//调用普通函数
//	myPrint<>(a,b);//调用函数模板
//	myPrint<>(a, b, c);
//
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1,c2);
//}

////模板局限性 模板并不是万能的，有些特定的类型需要用具体化方式做特殊实现
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////对比两个数据是否相等
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)//当传入的数据类型为Person时，会出错，解决方法1：在Person中重载==符号  方法2：提供Person重载函数
//		return true;
//	else
//		return false;
//}
//
////利用具体化的Person版本实现代码，优先调用
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//		return true;
//	else
//		return false;
//}
//
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = myCompare(a, b);
//	if (ret)
//		cout << "a == b" << endl;
//	else
//		cout << "a!=b" << endl;
//}

//void Test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	bool ret = myCompare(p1, p2);
//	if (ret)
//		cout << "p1 == p2" << endl;
//	else
//		cout << "p1!=p2" << endl;
//
//}

////类模板：建立一个通用类，类中的成员 数据类型可以不具体制定，用一个虚拟的类型来代表
////语法：template<typename T>  类
//
//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void ShowPerson()
//	{
//		cout << "name:" << this->m_Name << "\tage:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void Test01()
//{
//	Person<string, int> p1("Tom", 18);
//	p1.ShowPerson();
//}

////类模板和函数模板的区别：1.类模板没有自动类型推导的使用方式， 2.类模板在模板参数列表中可以有默认参数
//template<class NameType = string ,class AgeType = int >
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void ShowPerson()
//	{
//		cout << "name:" << this->m_Name << "\tage:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void Test01()
//{
//	//Person p("TOM", 15);//类模板没有自动类型推导的使用方式
//	Person<string, int> p("TOM", 18);
//	p.ShowPerson();
//}
//
//void Test02()
//{
//	Person<> p("JERRY", 20);
//	p.ShowPerson();
//}


////类模板中成员函数创建时机:类模板中成员函数在调用时才去创建
//class Person1
//{
//public:
//	void ShowPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//
//class Person2
//{
//public:
//	void ShowPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	//类模板中的成员函数
//	void Func1()
//	{
//		obj.ShowPerson1();
//	}
//
//	void Func2()
//	{
//		obj.ShowPerson2();
//	}
//};
//
//
//
//void Test01()
//{
//	MyClass<Person1>m;
//	m.Func1();
//	//m.Func2();
//}

////类模板对象做函数参数：类模板实例化出的对象，向函数传参的方式
////一般有三种方式：1.指定传入的类型 - 直接显示对象的数据类型
////2.参数模板化 - 将对象中的参数变为模板进行传递   3.整个类模板化 - 将这个对象类型 模板化进行传递
//template<class NameType ,class AgeType >
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void ShowPerson()
//	{
//		cout << "姓名:" << this->m_Name << "\t年龄:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.指定传入类型 - 最常用
//void PrintPerson1(Person<string, int>&p)
//{
//	p.ShowPerson();
//}
//
//void Test01()
//{
//	Person<string, int> p("孙悟空", 100);
//	PrintPerson1(p);
//}
//
////2.参数模板化
//template<class NameType, class AgeType >
//void PrintPerson2(Person<NameType,AgeType>&p)
//{
//	p.ShowPerson();
//	cout << "NameType的类型为：" << typeid(NameType).name() << endl;
//	cout << "AgeType的类型为：" << typeid(AgeType).name() << endl;
//}
//
//void Test02()
//{
//	Person<string, int> p("猪八戒", 90);
//	PrintPerson2(p);
//}
//
////将整个类都模板化
//template<class T >
//void PrintPerson(T& p)
//{
//	p.ShowPerson();
//	cout << "T的类型为：" << typeid(T).name() << endl;
//}
//
//void Test03()
//{
//	Person<string, int> p("唐僧", 30);
//	PrintPerson(p);
//}
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

////类模板与继承
////当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中的类型
////如果不指定，编译器无法给子类分配内存
////如果想灵活指定出父类中T的类型，子类也需要变为类模板
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
//class Son :public Base<int>//子类在声明的时候，必须要知道父类中T的类型，才能继承给子类
//{
//
//};
//
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1的数据类型为：" << typeid(T1).name() << endl;
//		cout << "T2的数据类型为：" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void Test01()
//{
//	//Son s1;
//	Son2<int, char> s2;
//}

////类模板成员函数类外实现
//template<class T1,class T2>
//class Person
//{
//public:
//	//成员函数类内声明
//	Person(T1 name, T2 age);
//	void ShowPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1,T2>::ShowPerson()
//{
//	cout << "姓名:" << this->m_Name << "\t年龄:" << this->m_Age << endl;
//}
//
//void Test01()
//{
//	Person<string, int> p("孙悟空", 18);
//	p.ShowPerson();
//}

//类模板分文件编写
//问题：类模板中成员函数创建时机是在调用阶段，导致份文件编写时连接不到 
//解决：1、直接包含cpp源文件  2、将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制


void Test01()
{
	
}

int main()
{
	Test01();


	system("pause");
	return 0;
}