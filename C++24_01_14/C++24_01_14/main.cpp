#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>


//

//class MyString
//{
//public:
//	MyString(char* str)
//	{
//		m_Str = str;
//	}
//
//	//explicit 防止隐式类型转换方式来初始化对象
//	explicit MyString(int len)
//	{
//		m_Len = len;
//	}
//	int m_Len;
//	char* m_Str;
//};
//
//void Test01()
//{
//	MyString str = "abc";
//	MyString str2 = 10;//有的用户认为 这是字符串长度10 ，有的认为是字符串为10
//}


//静态成员变量：在一个类中，若将一个成员变量声明为static，这种成员称为静态成员变量，与一般的数据成员不同，
//无论建立了多少个对象,都只有一个静态数据的拷贝，静态成员变量，属于某个类，所有对象共享。
//静态成员变量必须在类中声明，在类外定义
//静态数据成员不属于某个对象，在为对象分配空间中不包括静态成员所占空间，静态数据成员可以通过类名或者对象名来引用
//class Person
//{
//public:
//	static int m_A;
//};
//
//int Person:: m_A = 10;//静态成员变量类外初始化
//
//void Test01()
//{
//	Person p1;
//	cout << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 20;
//
//	cout << p2.m_A << endl;
//	cout << p1.m_A << endl;
//
//
//	cout << Person::m_A << endl;
//}


////单例模式：一个类中只有一个实例对象 
//class ChairMan
//{
//public:
//	//返回主席的指针
//	static ChairMan* getInstance()
//	{
//		return SingleMan;
//	}
//private:
//	//将构造函数私有化，不可以创建多个对象
//	ChairMan() 
//	{
//		cout << "ChairMan默认构造函数的调用" << endl;
//	}
//
//	//数据是共享的，而且只需要拿到一个主席的对象指针即可
//	static ChairMan* SingleMan;
//
//	//将拷贝构造函数私有化
//	ChairMan(const ChairMan& c)
//	{
//
//	}
//
//};
//
////静态成员变量在编译阶段就已经分配内存了
//ChairMan* ChairMan::SingleMan = new ChairMan;//唯一的主席类的指针
//
//void Test01()
//{
//	//ChairMan c1;
//	//ChairMan c2;
//
//	//ChairMan* c3 = new ChairMan;
//
//	//ChairMan* c1 = ChairMan::SingleMan;
//	//ChairMan* c2 = ChairMan::SingleMan;
//	ChairMan* c1 = ChairMan::getInstance();
//	ChairMan* c2 = ChairMan::getInstance();
//
//	//if (c1 == c2)
//	//{
//	//	cout << "c1与c2指针指向同一个地址" << endl;
//	//}
//	//else
//	//{
//	//	cout << "c1与c2指针指向不同地址" << endl;
//	//}
//
//	//ChairMan::SingleMan = NULL;
//	//ChairMan* c3 = new ChairMan(*c1);//拷贝构造
//
//	
//}

//class Printer
//{
//public:
//	static Printer* getInstance()
//	{
//		return printer;
//	}
//
//	//打印操作
//	void printText(string text)
//	{
//		m_Count++;
//		cout << "打印的内容：" << text << endl;
//	}
//
//	int m_Count;
//private:
//	Printer()
//	{
//		this->m_Count = 0;
//	}
//
//	Printer(const Printer& p)
//	{
//
//	}
//
//	static Printer* printer;
//
//	
//};
//
//Printer* Printer::printer = new Printer;
//
//void Test01()
//{
//	Printer* p1 = Printer::getInstance();
//	p1->printText("入职申请");
//	p1->printText("离职申请");
//	p1->printText("旅游申请");
//	p1->printText("请假申请");
//	cout << "打印机使用次数：" << p1->m_Count << endl;
//
//	Printer* p2 = Printer::getInstance();
//	p1->printText("调休申请");
//	cout << "打印机使用次数：" << p1->m_Count << endl;
//}

////指针运算符重载 - 智能指针:用来托管new出来的对象的释放
//class Person
//{
//public:
//	Person(int age)
//	{
//		cout << "有参构造" << endl;
//		this->m_Age = age;
//	}
//
//	void ShowAge()
//	{
//		cout << "年龄为：" << this->m_Age << endl;
//	}
//
//	~Person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//
//private:
//	int m_Age;
//};
//
//class SmartPointer
//{
//public:
//	SmartPointer(Person* person)
//	{
//		cout << "SmartPointer构造函数的调用" << endl;
//		this->person = person;
//	}
//
//	//重载指针运算符
//	Person* operator->()
//	{
//		return this->person;
//	}
//
//	Person& operator*()
//	{
//		return *(this->person);
//	}
//
//	~SmartPointer()
//	{
//		if (this->person != NULL)
//		{
//			cout << "SmartPointer析构函数的调用" << endl;
//			delete this->person;
//			this->person = NULL;
//		}
//	}
//private:
//	Person* person;
//};
//
//void Test01()
//{
//	Person* p = new Person(18);
//
//	//p->ShowAge();
//
//	//(*p).ShowAge();
//	SmartPointer sp = SmartPointer(new Person(18));
//	sp->ShowAge();//sp->返回的是Person* 正常应该是sp->->ShowAge()
//	(*sp).ShowAge();
//	//delete p;
//}
//class Person
//{
//public:
//	Person(const char* name, int age)
//	{
//		this->m_Name = new char[strlen(name) + 1];
//		strcpy(this->m_Name, name);
//
//		this->m_Age = age;
//	}
//
//	Person(const Person& p)
//	{
//		this->m_Name = new char[strlen(p.m_Name) + 1];
//		strcpy(this->m_Name, p.m_Name);
//
//		this->m_Age = p.m_Age;
//	}
//
//	//系统会默认给一个类创建三个函数 默认构造 析构 拷贝构造 operator
//	Person& operator=(const Person& p)
//	{
//		if (this->m_Name != NULL)
//		{
//			delete[] this->m_Name;
//			this->m_Name = NULL;
//		}
//		this->m_Name = new char[strlen(p.m_Name) + 1];
//		strcpy(this->m_Name, p.m_Name);
//		this->m_Age = p.m_Age;
//
//		return *this;
//	}
//
//
//	~Person()
//	{
//		if (this->m_Name != NULL)
//		{
//			delete[] this->m_Name;
//			this->m_Name  = NULL;
//		}
//	}
//
//	char* m_Name;
//	int m_Age;
//};
//
//void Test01()
//{
//	Person p1("Tom", 18);
//
//	Person p2("Jerry", 19);
//
//	p1 = p2;
//
//	cout << "p1姓名：" << p1.m_Name << "  p1年龄：" << p1.m_Age << endl;
//	cout << "p2姓名：" << p2.m_Name << "  p2年龄：" << p2.m_Age << endl;
//
//	Person p3(" ", 10);
//	p3 = p2 = p1;
//}

class Perosn
{
public:
	int operator[](int index)
	{
		return this->pAddress[index];
	}
};

void Test01()
{

}

int main()
{
	//cout << "main函数的调用" << endl;
	//int a = 10;
	//int b = 20;
	//int c;
	//c = a = b;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;
	Test01();

	system("pause");
	return 0;
}