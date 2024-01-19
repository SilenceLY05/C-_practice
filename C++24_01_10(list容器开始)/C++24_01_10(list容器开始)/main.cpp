#include <iostream>
using namespace std;
#include <list>
#include <string>
#include <set>
#include <map>


//list赋值和交换：给list容器进行赋值，以及交换list容器
//assign(beg,end)                            将[beg,end)区间中的数据拷贝赋值给本身
//assign(n,elem)                             将n个elem拷贝赋值给本身
//list& operator=(const list& list)          重载等号操作符
//swap(lst)                                  另lst与本身的元素互换

void PrintList(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}


//void Test01()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	PrintList(L1);
//
//	list<int> L2;
//	L2.assign(L1.begin(), L1.end());
//	PrintList(L2);
//
//	list<int> L3;
//	L3.assign(10, 100);
//	PrintList(L3);
//
//	list<int> L4 = L3;
//	PrintList(L4);
//
//	list<int> L5;
//	L5.assign(10, 0);
//	PrintList(L5);
//	L5.swap(L3);
//	PrintList(L3);
//	PrintList(L5);
//
//
//}


//list容量和大小
//list.empty()                 判断容器是否为空
//list.size()                  返回容器中元素的个数
//list.resize(int num)         重新指定容器的长度为num，若容器变长，则以默认值填充新位置，如果变短，
//                             则末尾超出容器长度的元素被删除
//list.resize(int num,elem)    重新指定容器的长度为Num，若容器变长，则以elem填充新位置，如果变短，
//                             则末尾超出容器长度的元素被删除

//void Test01()
//{
//	list<int> L1;
//	for (int i = 0; i < 10; i++)
//	{
//		L1.push_back(i);
//	}
//
//	if (L1.empty())//为真代表容器为空
//	{
//		cout << "L1内为空" << endl;
//	}
//	else
//	{
//		cout << "L1内不为空" << endl;
//	}
//
//	cout << "L1中的元素个数为：" << L1.size() << endl;
//
//	L1.resize(15);
//	PrintList(L1);
//
//	L1.resize(20, 100);
//	PrintList(L1);
//
//	L1.resize(5);
//	PrintList(L1);
//}

//list插入和删除
//push_back(elem)                                   尾部插入元素ele
//push_front(elem)                                  在容器头部插入一个数据
//pop_bakc()                                        删除最后一个元素
//pop_front()                                       删除容器第一个数据
//insert(const_iterator pos,ele)                    迭代器指向位置pos插入元素ele，返回新数据位置
//insert(const_iterator pos,int count,ele)          迭代器指向位置pos插入count个元素ele,无返回值
//insert(const_iterator pos,beg,end)                在Pos位置插入[beg,end)区间的数据，无返回值
//erase(const_iterator pos)                         删除迭代器指向的元素
//erase(const_iterator start,const_iterator end)    删除迭代器从start到end之间的元素
//clear()                                           删除容器中所有元素
//remove(elem)                                      移除容器中所有与elem值匹配的元素


//void Test01()
//{
//	list<int> L1;
//	for (int i = 0; i < 5; i++)
//	{
//		L1.push_back(i*10);
//	}
//
//	for (int i = 1; i < 5; i++)
//	{
//		L1.push_front(i*100);
//	}
//
//	list<int> L2;
//	for (int i = 0; i < 5; i++)
//	{
//		L2.push_back(i * 10);
//	}
//
//	//400 300 200 100 0 10 20 30 40
//	PrintList(L1);
//
//	//400 300 200 100 0 10 20 30
//	L1.pop_back();
//	PrintList(L1);
//
//	//300 200 100 0 10 20 30
//	L1.pop_front();
//	PrintList(L1);
//
//	//10 300 200 100 0 10 20 30
//	L1.insert(L1.begin(), 10);
//	PrintList(L1);
//
//	list<int>::iterator it = L1.begin();
//	it++;
//	L1.insert(++it, 3,100);
//	//10 300 100 100 100 200 100 0 10 20 30
//	PrintList(L1);
//	it++;
//
//	//10 300 100 100 100 200 100 0 10 20 30 0 10 20 30 40
//	L2.insert(L2.begin(), L1.begin(), L1.end());
//	PrintList(L2);
//
//	//10 300 200 0 10 20 30
//	L1.remove(100);
//	PrintList(L1);
//
//	//300 200 0 10 20 30
//	it = L1.begin();
//	L1.erase(it);
//	PrintList(L1);
//
//	//30
//	L1.erase(L1.begin(), std::prev(L1.end()));
//	PrintList(L1);
//
//	L1.clear();
//	PrintList(L1);
//}


//list数据存取：对list容器中数据进行存取
//front();返回第一个元素  back():返回第二个元素

//void Test01()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//
//	//L1[0]  不可以用[]访问list容器中的元素
//	//L1.at(0) 不可以用at方式访问list容器中的元素
//
//	PrintList(L1);
//
//	int head = L1.front();
//	int tail = L1.back();
//
//	cout << "L1的第一个元素为：" << head << endl;
//	cout << "L1的最后一个元素为：" << tail << endl;
//
//	//迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	it++;
//	it--;//支持双向
//	//it + 1;
//}

//list反转和排序:将容器中的元素反转，以及将容器中的数据进行排序
//reverse()反正链表
//sort()链表排序

//bool MyCompare(int v1,int v2)
//{
//	//降序 就让第一个数大于第二个数
//	return v1 > v2;
//}
//
//void Test01()
//{
//	list<int> L1;
//	for (int i = 0; i < 5; i++)
//	{
//		L1.push_back(i*10);
//	}
//
//	for (int i = 1; i < 5; i++)
//	{
//		L1.push_front(i*100);
//	}
//
//	PrintList(L1);
//	L1.reverse();
//	PrintList(L1);
//
//	//所有不支持随机访问迭代器的容器不可以用标准的算法
//	//不支持随机访问迭代器的容器，内部会提供对应一些算法
//	//sort(L1.begin(),L1.end())
//	L1.sort();//默认排序规则，从小到大升序
//	PrintList(L1);
//
//	L1.sort(MyCompare);//降序排序
//	PrintList(L1);
//}

////排序案例：将Person自定义数据类型进行排序，Person内属性有姓名，年龄，身高
////排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
//class Person
//{
//public:
//	Person(string name, int age, int high)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_High = high;
//	}
//
//	string m_Name;
//	int m_Age;
//	int m_High;
//};
//
//
//void ShowPerson(const list<Person>& L)
//{
//	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << "  年龄：" << (*it).m_Age << "  身高：" << (*it).m_High << endl;;
//	}
//}
//
//void CreatPerson(list<Person>& L)
//{
//	string nameSeed = "ABCDEDA";
//	for (int i = 0; i < 7; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int age = 0;
//		int high = 0;
//		Person p(name, age, high);
//		L.push_back(p);
//	}
//}
//
//void SetPerson(list<Person>& L)
//{
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		int age = rand() % 20 + 20;
//		it->m_Age = age;
//		int high = rand() % 30 + 160;
//		it->m_High = high;
//	}
//}
//
//bool ComparePerson(Person&p1,Person&p2)
//{
//	if (p1.m_Age == p2.m_Age)
//		return p1.m_High > p2.m_High;
//	else
//		return p1.m_Age < p2.m_Age;
//}
//
//
//void Test01()
//{
//	list<Person> L1;
//	CreatPerson(L1);
//	SetPerson(L1);
//	ShowPerson(L1);
//	cout << "----------------------" << endl;
//	L1.sort(ComparePerson);
//	ShowPerson(L1);
//}


//set/multiset容器：所有元素都会在插入时自动被排序
//本质：set/multiset属于关联式容器，底层结构是用二叉树实现
//set/multiset区别：set不允许容器中有重复的元素，multiset允许容器中有重复的元素

//set构造和赋值：功能描述：创建set容器以及赋值
//set<T> st;                     默认构造函数
//set(const set&st);             拷贝构造函数
//赋值：set& operator=(const set&st)   重载等号操作符
void PrintSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}


void PrintMulSet(const multiset<int>& ms)
{
	for (set<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
	{
		cout << (*it) << "  ";
	}
	cout << endl;
}


//void Test01()
//{
//	set<int> s1;
//
//	//插入数据时只有insert方式
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(60);
//	s1.insert(40);
//	s1.insert(30);
//	PrintSet(s1);
//}

//set大小和交换
//size()    返回容器中元素的数目
//empty()   判断容器是否为空
//swap(st)  交换两个集合容器
 
//void Test01()
//{
//	set<int> s1;
//	set<int> s2;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//	s2.insert(500);
//	s2.insert(600);
//	PrintSet(s1);
//	PrintSet(s2);
//
//	cout << "set1的大小为：" << s1.size() << endl;
//
//	if (!s1.empty())
//	{
//		cout << "set1不为空" << endl;
//	}
//	else
//	{
//		cout << "set1为空" << endl;
//	}
//	s1.swap(s2);
//	PrintSet(s1);
//	PrintSet(s2);
//}

//set插入和删除
//insert(elem)     在容器中插入元素
//clear()          清除所有元素
//erase(pos)       删除pos迭代器所指的元素，返回下一个元素的迭代器
//erase(beg,end)   删除区间(beg,end)的所有元素，返回下一个元素的迭代器
//erase(elem)      删除容器中值为elem的元素
//void Test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(60);
//	s1.insert(70);
//	s1.insert(80);
//	PrintSet(s1);
//
//	//删除
//	set<int>::iterator it = s1.begin();
//	it = s1.erase(s1.begin());
//	cout << (*it) << endl;
//	PrintSet(s1);
//
//	//删除重载
//	s1.erase(30);
//	PrintSet(s1);
//
//	s1.clear();
//	PrintSet(s1);
//}

//set查找和统计：对set容器进行查找数据以及统计数据
//fint(key)   查找key是否存在，若存在，返回该键的元素的迭代器，若不存在，返回set.end()
//count(key)  统计key的元素个数
//void Test01()
//{
//	set<int> s1;
//	s1.insert(40);
//	s1.insert(50);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(60);
//	s1.insert(10);
//
//	PrintSet(s1);
//
//	set<int>::iterator it = s1.find(70);
//
//	if (it != s1.end())
//	{
//		cout << "找到元素：" << *it << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	int num = s1.count(30);
//
//	//对于set而言，统计结果要么是0要么是1
//	cout << num << endl;
//}

//set和multiset区别  set插入数据的同时会返回插入结果，表示插入是否成功。    multiset不会检测数据，因此可以插入重复数据
//void Test01()
//{
//	set<int> s;
//	pair<set<int>::iterator,bool> ret =s.insert(10);
//	
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset<int> ms;
//	//允许插入重复值
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//	PrintMulSet(ms);
//}

//pair队组创建：成对出现的数据，利用队组可以返回两个数据
//两种创建方式：pair<type,type> p(value1,value2);   pair<type,type> p = make_pair(value1,value2);

//void Test01()
//{
//	//第一种
//	pair<string, int> p("张三", 12);
//	cout << "姓名：" << p.first << "  年龄：" << p.second << endl;
//
//	//第二种
//	pair<string, int> p1 = make_pair("李四", 20);
//	cout << "姓名：" << p1.first << "  年龄：" << p1.second << endl;
//}

//set容器排序：set容器默认排序规则为从小到大，利用仿函数，可以改变排序规则

////存放内置数据类型
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void Test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(60);
//	s1.insert(50);
//	s1.insert(40);
//	s1.insert(30);
//
//	PrintSet(s1);
//
//	//指定排序规则为从大到小
//
//	set<int, MyCompare> s2;
//	s2.insert(10);
//	s2.insert(20);
//	s2.insert(60);
//	s2.insert(50);
//	s2.insert(40);
//	s2.insert(30);
//	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << (*it) << "  ";
//	}
//	cout << endl;
//}

////存放自定义数据类型
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
//class MyCompare
//{
//public:
//	bool operator()(const Person& p1, const Person& p2) const
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//};
//
//void CreatPerson(set<Person, MyCompare>& st)
//{
//	string nameseed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "成员";
//		name += nameseed[i];
//		int age = rand() % 20 + 20;
//		Person p(name, age);
//		st.insert(p);
//	}
//}
//
//
//
//void Test01()
//{
//	srand((unsigned)time(0));
//	set<Person, MyCompare> s1;
//	CreatPerson(s1);
//
//	for (set<Person, MyCompare>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << "\t年龄：" << (*it).m_Age << endl;
//	}
//}

//map/multimap容器
//map中所有元素都是pair  pair中第一个元素为key(键值)，起到索引作用，第二个元素为value(实值)
//所有元素都会根据元素的键值自动排序
//本质：map/multimap属于关联式容器，底层结构是用二叉树实现
//优点；可以根据key值快速找到value值 
//区别：map不允许容器中有重复key值元素，multimap允许容器中有重复key值元素

//map构造和赋值
//对map容器进行构造和赋值操作
//map<T1,T2> mp;   mp默认构造函数
//map(const map &p);  拷贝构造函数
//赋值：map& operator=(const map&mp);  重载等号操作符 

void PrintMap(map<int, int>& mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "key值 = " << (*it).first << "  value = " << (*it).second << endl;
	}
	cout << endl;
}

//void Test01()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(5, 50));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	PrintMap(m);
//
//	map<int, int> m2 = m;
//	PrintMap(m2);
//
//	//赋值
//	map<int, int>m3(m);
//	PrintMap(m3);
//
//}

//map大小和交换：统计map容器大小以及交换map容器
//size()    返回容器中元素的数目
//empty()   判断容器是否为空
//swap(st)  交换两个集合容器


//void Test01()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//	m.insert(pair<int, int>(6, 60));
//
//	PrintMap(m);
//
//	if (m.empty())
//	{
//		cout << "map为空" << endl;
//	}
//	else
//	{
//		cout << "map不为空" << endl;
//		cout << "大小为：" << m.size() << endl;
//	}
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(9, 1));
//	m2.insert(pair<int, int>(8, 2));
//	m2.insert(pair<int, int>(7, 3));
//	m2.insert(pair<int, int>(6, 4));
//
//	m.swap(m2);
//
//	PrintMap(m);
//	PrintMap(m2);
//}

//map插入和删除：map容器进行插入数据和删除数据
//insert(elem)       在容器中插入数据
//clear()            清除所有元素
//erase(pos)         删除pos迭代器所指的元素，返回下一个元素的迭代器
//erase(beg,end)     删除区间[beg,end)的所有元素，返回下一个元素的迭代器
//erase(key)         删除容器中值为key的元素

//void Test01()
//{
//	map<int, int> m;
//	//第一种
//	m.insert(pair<int, int>(1, 10));
//
//	//第二种
//	m.insert(make_pair(2, 20));
//
//	//第三种
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//第四种
//	m[4] = 40;//不建议
//
//	cout << m[5] << endl;//会自动创建一个key为5 value为0的值
//
//	PrintMap(m);
//
//	//删除
//	m.erase(m.begin());
//	PrintMap(m);
//
//	m.erase(3);//按照key删除
//	PrintMap(m);
//}

//map查找和统计
//find(key)   查找key是否存在，若存在，返回该键的元素的迭代器，若不存在，返回m.end()
//count(key)  统计key的元素个数
//void Test01()
//{
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//	m.insert(pair<int, int>(6, 60));
//
//	PrintMap(m);
//	int num = m.count(2);
//	cout << "key值为2的个数有：" << num << endl;
//
//	map<int, int>::iterator pos = m.find(2);
//	if (pos != m.end())
//	{
//		cout << "查到了元素key = " << (*pos).first << "  value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//}

//map排序：map容器默认排序规则为 按照key值进行 从小到大排序

class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
		
};

void Test01()
{
	map<int, int,MyCompare> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	m.insert(pair<int, int>(5, 50));
	m.insert(pair<int, int>(6, 60));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key值 = " << (*it).first << "  value = " << (*it).second << endl;
	}
}

int main()
{
	//srand((unsigned)time(0));
	Test01();

	system("pause");
	return 0;
}

