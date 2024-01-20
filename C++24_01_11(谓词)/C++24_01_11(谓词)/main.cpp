#include <iostream>
using namespace std;
#include <string>
#include <map>
#include <vector>
#include<ctime>
#include<algorithm>
#include<functional>

//员工分组案例
//招收10名员工(ABCDEFGHIJ)，需要指派工作部门，员工信息：姓名 工资组成;部分分为：策划 美术 研发
//随机分配部门和工资 通过multimap进行信息插入，key(部门编号)value(员工)  分部门显示员工信息

//1.创建10个员工，放到vector中，遍历容器，取出所有员工，随机分组
//分组后将部门编号作为key 具体员工作为value
//#define CEHUA  0
//#define MEISHU 1
//#define YANFA  2
//
//class Worker
//{
//public:
//	Worker(string name, int salary)
//	{
//		this->m_Name = name;
//		this->m_Salary = salary;
//	}
//
//	string m_Name;
//	int m_Salary;
//};
//
//void CreatWorker(vector<Worker>& v)
//{
//	string namespeed = "ABCDEFGHIJ";
//	for (int i =0;i<10;i++)
//	{
//		string name = "员工";
//		name += namespeed[i];
//		int salary = rand() % 10000 + 10000;
//		Worker w(name, salary);
//		v.push_back(w);
//	}
//}
//
//void SetGroup(vector<Worker>& v, multimap<int, Worker>& mWorker)
//{
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		int depId = rand() % 3;
//		mWorker.insert(pair<int, Worker>(depId, *it));
//	}
//}
//
//void ShowWorker(const multimap<int, Worker>& mWorker)
//{
//	//for (multimap<int, Worker>::const_iterator it = mWorker.begin(); it != mWorker.end(); it++)
//	//{
//	//	if (it->first == 1)
//	//	{
//	//		cout << "部门：策划部" << "  ";
//	//	}
//	//	else if(it->first == 2)
//	//	{
//	//		cout << "部门：美术部" << "  ";
//	//	}
//	//	else
//	//	{
//	//		cout << "部门：研发部" << "  ";
//	//	}
//
//	//	cout << "姓名：" << ((*it).second).m_Name << "  工资:" << (*it).second.m_Salary << endl;
//	//}
//	cout << "策划部门：" << endl;
//
//	multimap<int, Worker>::const_iterator pos = mWorker.find(CEHUA);
//
//	int count = mWorker.count(CEHUA);//统计策划部门具体人数
//	int index = 0;
//
//	for (; pos != mWorker.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << "  工资" << pos->second.m_Salary << endl;
//	}
//
//	cout << "-------------------------------" << endl;
//
//	cout << "美术部门：" << endl;
//
//	pos = mWorker.find(MEISHU);
//
//	count = mWorker.count(MEISHU);//统计策划部门具体人数
//	index = 0;
//
//	for (; pos != mWorker.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << "  工资" << pos->second.m_Salary << endl;
//	}
//
//	cout << "-------------------------------" << endl;
//
//	cout << "研发部门：" << endl;
//
//	pos = mWorker.find(YANFA );
//
//	count = mWorker.count(YANFA);//统计策划部门具体人数
//	index = 0;
//
//	for (; pos != mWorker.end() && index < count; pos++, index++)
//	{
//		cout << "姓名：" << pos->second.m_Name << "  工资" << pos->second.m_Salary << endl;
//	}
//}
//
//
//void Test01()
//{
//	vector<Worker> v;
//	CreatWorker(v);
//
//	//分组
//	multimap<int, Worker> mWorker;
//	SetGroup(v, mWorker);
//
//	//分组显示员工
//	ShowWorker(mWorker);
//
//	//for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << (*it).m_Name << "  " << (*it).m_Salary << endl;
//	//}
//}

//STL - 函数对象
//函数对象概念：重载函数调用操作符的类，其对象常称为函数对象  函数对象使用重载()时，行为类似函数调用，也叫仿函数
//本质：函数对象(仿函数)是一个类，不是一个函数

//函数对象的使用：函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
//函数对象超出普通函数的概念，函数对象可以有自己的状态    函数对象可以作为参数传递

//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//
//	int count;//内部自己状态
//};
//
//void Test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 20) << endl;
//
//	MyPrint myp;
//	myp("hello world");
//	myp("hello world");
//	myp("hello world");
//	myp("hello world");
//
//	cout << "myprintf调用的次数" << myp.count << endl;
//}
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//
//void Test02()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "Hello C++");
//}

//谓词概念：返回bool类型的仿函数称为谓词 如果operator()接收一个参数，那么叫一元谓词 
//如果operator()接收两个参数，那么叫二元谓词

//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void Test01()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	GreaterFive GF;
//
//	//查找容器中有没有大于5的数字
//	//find_if(v.begin(), v.end(), GreaterFive());//GreaterFive()匿名的函数对象
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GF);
//
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了大于5的数字是：" << *it << endl;
//	}
//}

//class MySort
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void Test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//
//	MySort MS;
//
//	sort(v.begin(),v.end(), MS);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//使用函数对象 改变算法策略 变为排序规则从大到小
//}

//内建函数对象意义：STL内建了一些函数对象
//分类：算术仿函数 关系仿函数 逻辑仿函数 
//用法：这些仿函数所产生的对象，用法和一般函数完全相同 使用内建函数对象，需要引入头文件#include<functional>

//算术仿函数：实现四则运算 其中negate是一元运算，其他都是二元运算
//template<class T> T plus<T>        加法仿函数            template<class T> T minus<T>    减法仿函数
//template<class T> T multiplies<T>  乘法仿函数            template<class T> T divides<T>  除法仿函数
//template<class T> T modulus<T>     取模仿函数            template<class T> T negate<T>   取反仿函数



//void Test01()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//
//	plus<int> p;
//	cout << p(10, 20) << endl;
//}


//关系仿函数：实现关系对比
//template<class T> bool equal_to<T>  等于          template<class T> bool not_equal<T>      不等于
//template<class T> bool greater<T>   大于          template<class T> bool greater_equal<T>  大于等于
//template<class T> bool less<T>      小于          template<class T> bool less_equal<T>     小于等于

//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void Test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(50);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//降序
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}


//逻辑仿函数：实现逻辑运算
//template<class T> bool logical_and<T>   逻辑与          template<class T> bool logical_or<T>      逻辑或
//template<class T> bool logical_not<T>   逻辑非         

//void Test01()
//{
//	vector<bool> v;
//
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//利用逻辑非将容器v搬运到容器v2中,并执行取反的操作
//	vector<bool> v2;
//	v2.resize(v.size());
//
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}

//STL常用算法
//算法主要是由头文件<algorithm> <functional><numeric>组成
//<algorithm>是所有STL头文件中最大的一个，范围设计比较、交换、查找、遍历操作、赋值、修改等等
//<functional>定义了一些模板类，用以声明函数对象
//<numeric>体积很小，只包括几个在序列上面进行简单数学运算的模板函数

//常用遍历函数 for_each()遍历容器    transform()搬运容器到另一个容器中

//for_each(iterator beg,iterator end,_func)  开始迭代器 结束迭代器 仿函数或函数

//普通函数
//void Print01(int val)
//{
//	cout << val << " ";
//}
//
//class Print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void Test01()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), Print01);
//	cout << endl;
//
//	for_each(v.begin(), v.end(), Print02());
//	cout << endl;
//}

//transform(iterator beg,iterator end,iterator beg2,_func())  
//beg源容器开始迭代器    end源容器结束迭代器   beg2目标源容器开始迭代器   _func()函数或者函数对象

//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v;
//	}
//};
//
//class Print01
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << "  ";
//	}
//};
//void Test01()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int> vTarget;
//	vTarget.resize(v.size());
//
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//
//	for_each(vTarget.begin(), vTarget.end(), Print01());
//	cout << endl;
//}

//find 查找元素    find_if  按条件查找元素    adgacent_find   查找相邻重复元素    binary_search   二分查找法
//count  统计元素个数    count_if   按条件统计元素个数

//find 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()

//查找内置数据类型
//void Test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//查找是否有5这个元素
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到:  " << *it << endl;
//	}
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& p) const
//	{
//		return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
////void CreatPerson(vector<Person>& v)
////{
////	string namespeed = "ABCDEF";
////	for (int i = 0; i < 6; i++)
////	{
////		string name = "员工";
////		name += namespeed[i];
////		int age = rand() % 9 + 20;
////		Person p(name, age);
////		v.push_back(p);
////	}
////}
//
////查找自定义数据类型
//void Test02()
//{
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了姓名为:  " << (*it).m_Name << "  年龄为：" << (*it).m_Age << endl;
//	}
//}

//find_if(iterator beg,iterator end,_Pred)
//按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置  _Pred函数或者谓词(返回bool类型的仿函数)

//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
////查找内置数据类型
//void Test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到:  " << *it << endl;
//	}
//}
//
////查找自定义数据类型
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& p) const
//	{
//		return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//class GreaterTWE
//{
//public:
//	bool operator()(Person &p) 
//	{
//		return p.m_Age > 20;
//	}
//};
//
//void Test02()
//{
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), GreaterTWE());
//
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到了姓名为:  " << (*it).m_Name << "  年龄为：" << (*it).m_Age << endl;
//	}
//}

//adjacent_find:查找相邻重复元素
//函数原型：adjacent_find(beg,end)  查找相邻重复元素，返回相邻元素的第一个位置的迭代器

//void Test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//
//	if (it == v.end())
//	{
//		cout << "未找到" << endl;
//	}
//	else
//	{
//		cout << "找到:  " << *it << endl;
//	}
//}


////binary_search(beg,end,value)  查找指定元素，找到返回true 没找到返回false  无序序列不可用
//void Test01()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	bool ret = binary_search(v.begin(), v.end(), 9);
//
//	if (ret)
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//}


////count(beg,end,value) 统计元素个数  
//void Test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	v.push_back(8);
//
//	int num = count(v.begin(), v.end(), 8);
//	cout << num << endl;
//}
//
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& p) const
//	{
//		return this->m_Age == p.m_Age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void Test02()
//{
//	vector<Person> v;
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("曹操", 40);
//	Person p5("赵云", 30);
//	Person p("诸葛亮", 35);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p);
//
//	int num = count(v.begin(), v.end(), p);
//
//	cout << "和诸葛亮同岁数的人有：" << num << endl;
//}

//count_if(beg,end,_Pred)  按条件统计元素个数
//class MyCompare
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//
////统计内置的数据类型
//void Test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//
//	int num = count_if(v.begin(), v.end(), MyCompare());
//
//	cout << "大于20 的个数为：" << num << endl;
//
//}
//
////统计自定义数据类型
//
//class Person
//{
//public:
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
//class MyCompare2
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.m_Age > 30;
//	}
//};
//
//void Test02()
//{
//	vector<Person> v;
//	Person p1("刘备", 35);
//	Person p2("关羽", 35);
//	Person p3("张飞", 35);
//	Person p4("赵云", 20);
//	Person p5("诸葛亮", 20);
//	Person p6("曹操", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	v.push_back(p6);
//
//	int num = count_if(v.begin(), v.end(), MyCompare2());
//
//	cout << "年龄大于30的个数为：" << num << endl;
//}

//常用排序算法 sort 对容器内元素进行排序  random_shuffle  洗牌，指定范围内的元素随机调整次序
//merge 容器元素合并，并存储到另一容器中  reverse  翻转指定范围的元素

//sort(beg,end,_Pred)  按值查找元素，找到返回值指定位置迭代器，找不到返回结束迭代器位置
void MyPrint(int value)
{
	cout << value << "  ";
}
//
//
//void Test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(12);
//	v.push_back(32);
//
//	sort(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//
//	sort(v.begin(), v.end(),greater<int>());
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//}

//rand_shuffle  洗牌，指定范围内的匀速随机调整次序
//random_shuffle(beg,end)  

//void Test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(5);
//	v.push_back(12);
//	v.push_back(32);
//
//	random_shuffle(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//
//	random_shuffle(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//}

//merge 两个容器元素合并 并存储到一个容器中
//merge(beg1,end1,beg2,end2,dest)  dest目标容器开始迭代器  两个元素必须是有序的

//void Test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//
//	v1.push_back(1);
//	v1.push_back(3);
//	v1.push_back(5);
//	v1.push_back(7);
//	v1.push_back(9);
//	v2.push_back(2);
//	v2.push_back(4);
//	v2.push_back(6);
//	v2.push_back(8);
//	v2.push_back(10);
//
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//
//	for_each(v3.begin(), v3.end(), MyPrint);
//	
//}

//reverse 将容器内元素进行反转
void Test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), MyPrint);

	reverse(v1.begin(), v1.end());
	for_each(v1.begin(), v1.end(), MyPrint);
}

int main()
{
	//srand((unsigned)time(0));
	Test01();

	system("pause");
	return 0;
}