#include<iostream>
using namespace std;
#include"Mystring.h"
#include<stdexcept>

//不要重载&& ||  不能重载operator&&和operator||的原因是，无法在这两种情况下实现内置操作符的完整语义。
//内置版本的&&和||首先计算左边的表达式，如果这完全能够决定结果，就无需计算右边的表达式了，而且能够保证不需要

//[]()->操作符只能通过成员函数进行重载
//<<和>>只能通过全局函数配合友元函数进行重载
//不要重载&&和||，因为无法实现短路规则

//void Test01()
//{
//	MyString str = "aaa";
//	cout << str << endl;
//
//	cout << "请给str字符串重新赋值" << endl;
//
//	cin >> str;
//	cout << "str当前内容为：" << str << endl;
//
//	MyString str2(str);
//	cout << "str2当前的内容为：" << str2 << endl;
//
//	cout << str2[0] << endl;
//
//	str[0] = 'w';
//
//
//	MyString str3 = " ";
//	str3 = str;
//
//	MyString str4 = "def";
//	MyString str5 = "abc";
//	MyString str6 = str3 + str4;
//}

//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//
//	virtual void eat()
//	{
//		cout << "动物在吃饭" << endl;
//	}
//};
//
////对于有父子关系的两个类，C++可以不通过类型强转
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//
//	virtual void eat()
//	{
//		cout << "小猫在吃饭" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//
//	virtual void eat()
//	{
//		cout << "小狗在吃饭" << endl;
//	}
//};
//
//void DoSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
////void Test01()
////{
////	Cat cat;
////	DoSpeak(cat);
////}
//
//void Test02()
//{
//	Animal* animal = new Cat;
//	//animal->speak();
//	//*(int*)*(int*)animal speak函数的地址
//	((void(*)())(*(int*)*(int*)animal))();
//}


//静态转换 static_cast 用于类层次结构中基类(父类)和派生类(子类)之间指针或引用的转换
//进行上行转换(把派生类的指针或引用转换成基类表示)是安全的
//进行下行转换(把基类指针或引用转换成派生类表示)时，由于没有动态类型检查，所以是不安全的

//void Test01()
//{
//	//内置数据类型
//	char a = 'a';
//
//	//static_cast<目标类型>(原对象)
//	double d = static_cast<double>(a);
//
//	cout << d << endl;
//}
//
//class Base
//{
//public:
//	virtual void func() {};
//};
//
//class Son :public Base
//{
//public:
//	virtual void func() {};
//};
//
//class Other
//{
//
//};
//
//void Test02()
//{
//	//自定义数据类型
//	Base* base = NULL;
//	Son* son = NULL;
//
//	//base转为Son  向下类型转换 不安全
//	Son* son2 = static_cast<Son*>(base);
//
//	//son 转为 base 向上类型转换
//	Base* base2 = static_cast<Base*>(son);
//
//	//base 转为 orther
//	//没有父子关系的两个类型之间是无法转换成功的
//	Other* other = static_cast<Other*>(base);
//
//}


//动态类型转换(dynamic_cast)  主要用于类层次间的上行转换和下行转换
//在类层次间进行上行转换时，dynamic_cast和static_cast的效果是一样的 
//在进行下行转换时，dynamic_cast具有类型检查的功能，比static_cast更安全
//void Test01()
//{
//	//内置数据类型  不允许内置数据类型之间的转换
//	//char c = 'c';
//	//double d = dynamic_cast<double>(c);
//
//	//自定义数据类型
//	Base* base = NULL;
//	Son* son = NULL;
//
//	//base转为Son*类型，不安全  转换失败
//	//Son* son2 = dynamic_cast<Son*>(base);
//
//	//son 转为base*  安全
//	Base* base2 = dynamic_cast<Base*>(son);
//
//	//base转为other* 失败
//	//Other* other = dynamic_cast<Other*>(base);
//
//	//如果发生多态，父子之间转换总是安全的
//	Base* base3 = new Son;
//	//将base3转换为Son*
//	Son* son = dynamic_cast<Son*>(base3);
//}


//常量转换(const_cast) 该运算符用来修改类型的const属性
//常量指针被转化成非常量指针，并且仍然指向原来的对象
//常量引用被转化成非常量引用，并且仍然指向原来的对象
//不能直接对非指针和非引用的变量使用const_cast操作符去直接移除它的const
//void Test01()
//{
//	//指针之间的转换
//	const int* p = NULL;
//	//将const int* 转为int*
//	int* p2 = const_cast<int*>(p);
//
//	//将p2转为const int*
//	const int* p3 = const_cast<const int*>(p2);
//
//	//引用之间的转换
//	const int a = 10;
//	const int& aRef = a;
//	int& aRef2 = const_cast<int&>(aRef);
//
//	//不可以对非指针或非引用做这种cosnt_cast转换
//	//int b = const_cast<int>(a);
//}


//重新解释转换(reinterpret_cast)这是最不安全的一种转换机制，最有可能出问题
//主要用于将一种数据从一种类型转换为另一种类型，他可以讲一个指针转换成一个整数，也可以将一个整数转换成一个指针
//void Test01()
//{
//	//int a = 10;
//	//int* p = reinterpret_cast<int*>(a);
//
//	//将base*转为other*
//	Base* base = NULL;
//	Other* other = reinterpret_cast<Other*>(base);
//}

//class MyException
//{
//public:
//	void PrintError()
//	{
//		cout << "我自己的异常类的错误" << endl;
//	}
//};
//
//class Person
//{
//public:
//	Person(string name)
//	{
//		this->m_Name = name;
//		cout <<this->m_Name<< "的默认构造函数" << endl;
//	}
//
//	~Person()
//	{
//		cout << this->m_Name << "的析构函数" << endl;
//	}
//
//	string m_Name;
//};
//
////异常的基本语法
//int MyDivide(int a,int b)
//{
//	if (b == 0)
//	{
//		//return -1;//c语言处理异常缺陷在于返回的值没有一个统一的, 返回值可以是异常的结果也可以是正确的结果
//		//抛出异常
//		//throw - 1;
//		//throw 3.14;
//		//栈解旋  从try代码块开始，到throw抛出异常前，所有栈上的对象都被释放掉，释放的顺序和构造的顺序是相反的
//		//这个过程称为栈解旋
//		Person p1("str1");
//		Person p2("str2");
//		cout << "aaa" << endl;
//
//
//		throw MyException();//抛出一个MyException
//	}
//	return a / b;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 0;
//
//	//尝试执行一段可能出现异常的代码
//	try
//	{
//		int ret = MyDivide(a, b);
//		cout << "ret的结果为：" << ret << endl;
//	}
//	catch (int)//捕获异常
//	{
//		cout << "int类型的异常捕获" << endl;
//	}
//	catch (double)//捕获异常
//	{
//		//不过到了double后不想处理这个异常，想继续向上抛出这个异常
//		cout << "double类型的异常捕获" << endl;
//		throw;
//	}
//	catch (MyException e)//捕获异常
//	{
//		e.PrintError();
//	}
//	catch (...)//捕获异常
//	{
//		cout << "其他类型的异常捕获" << endl;
//	}
//	
//
//}
//
//int main()
//{
//	try
//	{
//		Test01();
//	}
//	catch (int)//异常必须要有人处理，如果没有任何的处理，程序会自动调用一个terminate函数，让程序中断掉
//	{
//		cout << "main函数下的int类型的异常捕获" << endl;
//	}
//	catch (double)//捕获异常
//	{
//		
//		cout << "main函数下的double类型的异常捕获" << endl;
//	}
//	catch (...)//捕获异常
//	{
//		cout << "main函数下的其他类型的异常捕获" << endl;
//	}
//	//Test01();
//
//	system("pause");
//	return 0;
//}

////异常的接口声明
//void func()throw(double)//只允许func中抛出double类型的异常
//{
//	throw 1;
//}
//
//void Test01()
//{
//	try
//	{
//		func();
//	}
//	catch (double)
//	{
//		cout << "double类型的异常捕获" << endl;
//	}
//	catch (int)
//	{
//		cout << "int类型的异常捕获" << endl;
//	}
//}

////异常变量的声明周期
//class MyException
//{
//public:
//	MyException()
//	{
//		cout << "MyException构造函数调用" << endl;
//	}
//
//	MyException(const MyException& e)
//	{
//		cout << "MyException拷贝构造函数调用" << endl;
//	}
//
//	~MyException()
//	{
//		cout << "MyException析构函数调用" << endl;
//	}
//};
//
//void DoWork()
//{
//	//throw MyException();
//	//throw &MyException();
//	throw new MyException();
//}
//
//void Test01()
//{
//	try
//	{
//		DoWork();
//	}
//	//MyException引用方式接收 建议用这种方式节省开销
//	//MyException* e方式接收， 抛出&MyException()匿名对象，对象被释放掉，不可以再操作e了
//	//MyException* e方式接收， 抛出new MyException()，堆区创建的对象需要手动释放 delete e
//	catch (MyException* e)//MyException会调用拷贝构造
//	{
//		cout << "MyException的异常捕获" << endl;
//		delete e;
//	}
//}

////异常的多态
////异常基类
//class BaseException
//{
//public:
//	virtual void PrintError() = 0;
//};
//
////空指针异常
//class NULLPointException :public BaseException
//{
//public:
//	virtual void PrintError()
//	{
//		cout << "空指针异常" << endl;
//	}
//};
//
////越界异常
//class OutOfRangeException :public BaseException
//{
//public:
//	virtual void PrintError()
//	{
//		cout << "越界异常" << endl;
//	}
//};
//
//void DoWork()
//{
//	//throw NULLPointException();
//	throw OutOfRangeException();
//}
//
//void Test01()
//{
//	try
//	{
//		DoWork();
//	}
//	catch (BaseException& e)
//	{
//		e.PrintError();
//	}
//}

////系统的标准异常 需要引用头文件#include<stdexcept>  所有的异常类都有一个what()方法，返回const char*类型
//class Person
//{
//public:
//	Person(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			//年龄越界了
//			//throw out_of_range("年龄必须在0-150之间");
//			throw length_error("年龄必须在0-150之间");
//		}
//		this->m_Age = age;
//	}
//	int m_Age;
//};
//
//void Test01()
//{
//	try
//	{
//		Person p1(151);
//	}
//	catch(exception&c)
//	{
//		cout << c.what() << endl;
//	}
//}


//编写自己的异常类
class MyOutOfRange :public exception
{
public:
	MyOutOfRange(char* ErrorInfo)
	{
		//将char*转为String
		this->m_ErrorInfo = string(ErrorInfo);
	}

	MyOutOfRange(string ErrorInfo)
	{
		//将char*转为String
		this->m_ErrorInfo = ErrorInfo;
	}

	virtual ~MyOutOfRange() noexcept
	{
		
	}

	char const* what() const
	{
		//如何将string转为const char*
		//.c_str()将string转为const char*
		return this->m_ErrorInfo.c_str();
	}

	//保存用户传入字符串
	string m_ErrorInfo;
};

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			//年龄越界了
			//throw out_of_range("年龄必须在0-150之间");
			//throw length_error("年龄必须在0-150之间");
			throw MyOutOfRange("我自己的异常，年龄必须在0-150之间");
			//throw MyOutOfRange(string("我自己的异常，年龄必须在0-150之间"));
		}
		this->m_Age = age;
	}
	int m_Age;
};

void Test01()
{
	try
	{
		Person p1(151);
	}
	catch(exception&c)
	{
		cout << c.what() << endl;
	}
}

int main()
{
	Test01();

	system("pause");
	return 0;
}