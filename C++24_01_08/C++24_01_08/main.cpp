#include<iostream>
using namespace std;
//#include "Person.cpp"
//#include "Person.hpp"
//#include "myArray.hpp"
#include <vector>
#include <algorithm>

//类模板分文件编写
//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//解决：1、直接包含.cpp源文件  2、将声明和实现写到同一个文件中，并更改后缀为.hpp，hpp是约定的名称，并不是强制

//template<class T1,class T2 >
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void ShowPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//
//};

//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::ShowPerson()
//{
//	cout << "姓名：" << this->m_Name << "\t年龄：" << this->m_Age << endl;
//}

//void Test01()
//{
//	Person<string, int> p1("Jerry", 18);
//	p1.ShowPerson();
//}

////类模板和友元
////全局函数类内实现：直接在类内声明友元即可   全局函数类外实现：需要提前让编译器知道全局函数的存在
//
////通过全局函数来写信息
//template<class T1, class T2>
//class Person;
//
////类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "姓名：" << p.m_Name << "\t年龄：" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//全局函数类内实现
//	friend void printPerson(Person<T1,T2> p)
//	{
//		cout << "姓名：" << p.m_Name << "\t年龄：" << p.m_Age << endl;
//	}
//
//	//全局函数类外实现
//	//这里是普通函数声明，下方为类函数实现，无法连接，需要加空模板参数列表
//	//如果全局函数是类外实现需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
//
//
////全局函数类内实现：直接在类内声明友元即可
//
//void Test01()
//{
//	Person<string, int> p("Tom", 12);
//	//printPerson(p);
//	printPerson2(p);
//}


//类模板案例：实现一个通用的数组类
//可以对内置数据类型以及自定义数据类型的数据进行存储
//将数组中的数据存在堆区 new到堆区
//构造函数中可以存入数组的容量
//提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//提供尾插法和尾删法对数组中的数据进行增加和删除
//可以通过下标的方式访问数组中的元素 可以获取数组中当前元素个数和数组的容量

//void printIntArray(MyArray <int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void Test01()
//{
//	MyArray<int> arr1(5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr1.Push_Back(i);
//	}
//	cout << "arr1的打印输出为：" << endl;
//	printIntArray(arr1);
//
//	cout << arr1.getCapacity() << endl;
//	cout << arr1.getSize() << endl;
//
//}
//
//class Person
//{
//public:
//	Person() {};
//
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//
//void printPersonArray(MyArray <Person>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << "姓名："<<arr[i].m_Name << "\t年龄：" << arr[i].m_Age << endl;
//	}
//}
//
//void Test02()
//{
//	MyArray<Person> arr(10);
//	Person p1("孙悟空", 999);
//	Person p2("韩信", 20);
//	Person p3("赵云", 25);
//	Person p4("刘备", 33);
//	Person p5("关羽", 30);
//
//	arr.Push_Back(p1);
//	arr.Push_Back(p2);
//	arr.Push_Back(p3);
//	arr.Push_Back(p4);
//	arr.Push_Back(p5);
//	
//	printPersonArray(arr);
//}


//C++的面向对象(三大特性：封装 继承 多态)和泛型编程思想，目的就是复用性的提升
//STL的诞生：为了建立数据结构和算法的一套标准，诞生了STL
//STL基本概念：STL叫标准模板库  STL从广义上分为：容器 算法 迭代器 容器和算法之间通过迭代器进行无缝连接 STL几乎所有的代码都采用了模板类或模板函数


//STL六大组件
//STL大体分为六大组件，分别是：容器、算法、迭代器、仿函数、适配器(配接器)、空间配置器
//容器：各种数据结构，如vector list deque set map等，用来存放数据
//算法：各种常用的算法，如sort find copy for_each等
//迭代器：扮演了容器和算法之间的胶合剂
//仿函数：行为类似函数，可作为算法的某种策略
//适配器：一种用来修饰容器或者仿函数或迭代器接口的东西
//空间适配器：负责空间的配置与管理

//容器：STL容器就是将运用最广泛的一些数据结构实现出来，常用的数据结构：数组，链表，数，栈，队列，集合，映射表等。
//这些容器分为序列式容器和关联式容器 序列式容器：强调值的排序，序列式容器中的每个元素均有固定的位置
//关联式容器：二叉树结构，各元素之间没有严格的物理上的顺序关系


//算法：质变算法和非质变算法 
//质变算法：指运算过程中会更改区间内元素的内容，如拷贝，替换，删除等
//非质变算法：指运算过程中不会更改区间内元素的内容，如查找，计数，遍历，寻找极值等

//迭代器：提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴漏该容器的内部表示方式。每个容器都有自己专属的迭代器
//迭代器种类：
//输入迭代器：对数据的只读访问     只读，支持++,==,!=
//输出迭代器：对数据的只写访问     只写，支持++
//前向迭代器：读写操作，并能向前推进迭代器    读写，支持++，==，!=
//双向迭代器：读写操作，并能向前和向后操作    读写，支持++，--
//随机访问迭代器：读写操作，可以以跳跃的方式访问任意数据，功能更强的迭代器  读写，支持++，--,[n],-n,<,<=,>,>=
//常用的容器中的迭代器种类为双向迭代器和随机访问迭代器
//
////vector存放内置数据类型
////容器：vector  算法：for_each  迭代器:vector<int>::iterator
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void Test01()
//{
//	//建立一个vector容器，数组
//	vector<int> v;
//
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器中第一个元素的位置
//	//vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素的下一个位置
//
//	////第一种遍历方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////第二种遍历方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++ )
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//第三种遍历方式 利用STL中的遍历算法 
//	for_each(v.begin(), v.end(), myPrint);
//
//}


////vector中存放自定义数据类型
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void Test01()
//{
//	vector<Person> v;
//
//	Person p1("AA", 10);
//	Person p2("BB", 20);
//	Person p3("CC", 30);
//	Person p4("DD", 40);
//	Person p5("EE", 50);
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << endl;
//		cout << "年龄：" << (*it).m_Age << endl;
//	}
//}
//
////存放自定义数据类型指针
//void Test02()
//{
//	vector<Person*> v;
//
//	Person p1("AA", 10);
//	Person p2("BB", 20);
//	Person p3("CC", 30);
//	Person p4("DD", 40);
//	Person p5("EE", 50);
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器  这里的*it表示数据地址 Person类型的指针
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << (*it)->m_Name << "\t年龄：" << (*it)->m_Age << endl;
//		cout << "姓名：" << (*(*it)).m_Name << "\t年龄：" << (*(*it)).m_Age << endl;
//	}
//}

////vector容器嵌套容器
//
//void Test01()
//{
//	vector<vector<int>> v;
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//将小容器插入到大容器中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//通过大容器把所有数据遍历一遍
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}


////string容器  string是C++风格的字符串，而string本质是一个类
////string 和char*区别：char* 是一个指针 ， string是一个类，类内部封装了char*,管理这个字符串，是一个char*型的容器
////特点：string类内部封装了很多成员方法 例如：查找find  拷贝copy  删除delete  替换replace  插入insert 
////string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
//
////string构造函数
////string()  创建一个空的字符串
////string(const char* s)  使用字符串s初始化
////string(const string& str)  使用一个string对象初始化另一个string对象
////string(int n,char c)  使用n个字符c初始化
//
//
//void Test01()
//{
//	string s1;//默认构造
//	const char* str = "hello world";
//	string s2(str);
//	cout << s2 << endl;
//
//	string s3(s2);
//	cout << s3 << endl;
//
//	string s4(10, 'a');
//	cout << s4 << endl;
//}

//string赋值操作 给string字符串进行赋值
//string& operator=(const char* s)        char*类型字符串赋值给当前的字符串
//string& operator=(const string& s);     把字符串s赋给当前的字符串
//string& operator=(char c)               字符复制给当前的字符串
//string& assign(const char*s)            把字符串s赋给当前的字符串
//string& assign(const char*s,int n)      把字符串s的前n个字符赋给当前的字符串
//string& assign(const string& s)         把字符串s赋给当前字符串
//string& assign(int n,char c)            用n个字符c赋给当前字符串

//void Test01()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'A';
//	cout << "str3 = " << str3 << endl;
//
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("hello C++", 7);
//	//str5.assign(str1, 3);
//	cout << "str5 = " << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(10, 'w');
//	cout << "str7 = " << str7 << endl;
//}


//string字符串拼接
//string& operator+=(const char* str);            重载+=操作符
//string& operator+=(const char c);               重载+=操作符
//string& operator+=(const string& str);          重载+=操作符
//string& append(const char *s);                  把字符串s连接到当前字符串结尾
//string& append(const char*s,int n)              把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string& s)                 同operator+=(const string& str)
//string& append(const string&s,int pos,int n)    字符串s中从pos开始的n个字符连接到字符串结尾


//void Test01()
//{
//	string str1 = "我";
//	str1 += "是学生";
//	cout << "str1 = " << str1 << endl;
//
//	str1 += ':';
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "DOTA DNF";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//
//	string str3 = "I ";
//	str3.append("love play game");
//	cout << "str3 = " << str3 << endl;
//
//	str3.append(" abdcefg", 4);
//	cout << "str3 = " << str3 << endl;
//
//	str3.append(str2);
//	cout << "str3 = " << str3 << endl;
//
//	str3.append(str2, 2, 5);
//	cout << "str3 = " << str3 << endl;
//}


//string查找和替换
//查找：查找指定字符串是否存在   替换：在指定的位置替换字符串
//int find(const string& str,int pos = 0)const;         查找str第一次出现位置，从pos开始查找
//int find(const char* s,int pos = 0)const;             查找s第一次出现位置，从pos开始查找
//int find(const char* s,int pos ,int n)const;          从pos位置查找s的前n个字符第一次出现位置
//int find(const char c,int pos = 0)const;              查找字符c第一次出现位置
//int rfind(const string& str,int pos = npos)const;     查找str最后一次位置，从pos开始查找
//int rfind(const char* s,int pos = npos)const;         查找s最后一次出现位置，从pos开始查找
//int rfind(const char* s,int pos ,int n)const;         从pos位置查找s的前n个字符最后一次出现位置
//int rfind(const char c,int pos = 0)const;             查找字符c最后一次出现位置
//string& replace(int pos,int n,const string& str);     替换从pos开始n个字符为字符串str
//string& replace(int pos,int n ,const char* s);        替换从pos开始的n个字符为字符串s

////查找
//void Test01()
//{
//	string str1 = "abcdefg";
//	int pos = str1.find("de");
//	if (pos == -1)
//		cout << "未找到字符串" << endl;
//	else
//		cout << "找到字符串，位置为pos = " << pos << endl;
//
//	//rfind从右往左查找 find从左往右查找
//	pos = str1.rfind("de");
//	cout << pos << endl;
//	
//}
//
////替换
//void Test02()
//{
//	string str1 = "abcdefg";
//	str1.replace(2, 4, "11111");
//	cout << str1 << endl;
//}


////string字符串比较 相等返回0 大于返回1 小于返回-1
////int compare(const string&s)const;//与字符串s比较
////int compare(const char* s)const;  与字符串s比较
//
//void Test01()
//{
//	string str1 = "xello";
//	string str2 = "hello";
//	
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 = str2" << endl;
//	}
//	else if (str1.compare(str2) < 0)
//	{
//		cout << "str1 < str2" << endl;
//	}
//	else
//	{
//		cout << "str1 > str2" << endl;
//	}
//
//}

//string 字符存取
//string中单个字符存取方式有两种  char& operator[](int n)  //通过[]方式取字符
//char& at(int n);  通过at方式获取字符

//void Test01()
//{
//	string str = "hello world";
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	str[0] = 'x';
//	cout << str << endl;
//}

//string中的插入和删除：对string字符串进行插入和删除字符操作
//string& insert(int pos,const char* s)   插入字符串
//string& insert(int pos,const string& str);插入字符串
//string& insert(int pos,int n,char c)  在指定位置插入n个字符c
//string& erase(int pos,int n = npos)  删除从pos开始的n个字符

//void Test01()
//{
//	string str1 = "hello";
//	str1.insert(1, "111");
//	cout << str1 << endl;
//
//	str1.insert(1, 3, 'd');
//	cout << str1 << endl;
//
//	str1.erase(1, 6);
//	cout << str1 << endl;
//}

//string子串：从字符串中获取想要的子串
//string substr(int pos = 0,int n = npos)const ;  返回由pos开始的n个字符组成的字符串

void Test01()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}

//实用操作
void Test02()
{
	string email = "zhangsan@sina.com";

	//从邮件地址获取用户名
	int ret = email.rfind('@');
	string subStr = email.substr(0, ret);
	cout << subStr << endl;
}

int main()
{
	Test02();

	system("pause");
	return 0;
}