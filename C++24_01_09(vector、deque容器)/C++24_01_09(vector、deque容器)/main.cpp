#include <iostream>
using namespace std;
#include <vector>
#include<deque>
#include <algorithm>
#include <stack>
#include <queue>
#include<list>


//vector基本概念：vector数据结构和数组非常相似，也称为单端数组  
//vector与普通数组区别：不同之处在于数组是静态空间，而vector可以动态扩展
//动态扩展：并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝到新空间，释放原空间

//vector构造函数
//vector<T> v;  采用模板实现类实现，默认构造函数
//vector(v.begin(),v.end())    将v[begin(),end())之间的元素拷贝给本身
//vector(n,elem)  构造函数将n个elem拷贝给本身
//vector(const vector & vec);   拷贝构造函数

void PrintVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it <<" ";
	}
	cout << endl;
}
//
//void Test01()
//{
//	vector<int> v1;//默认构造，无参
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	PrintVector(v1);
//
//	//通过区间方式进行构造
//	vector<int> v2(v1.begin(), v1.end());
//	PrintVector(v2);
//
//	//n个elem
//	vector<int> v3(10, 100);
//	PrintVector(v3);
//
//	//拷贝构造
//	vector<int> v4(v3);
//	PrintVector(v4);
//}


//vector赋值操作：
//vector& operator=(const vector& vec);  重载等号操作
//assign(beg,end)  将[beg,end)区间中的数据拷贝赋值为本身
//assign(n,elem)   将n个elem拷贝赋值给本身


//void Test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	PrintVector(v1);
//	
//	vector<int> v2 = v1;
//	PrintVector(v2);
//
//	vector<int> v3;
//	v3.assign(v1.begin(), v1.end());
//	PrintVector(v3);
//
//	vector<int> v4;
//	v4.assign(10, 100);
//	PrintVector(v4);
//}

//vector容量和大小
//empty()                 判断容器是否为空
//capacity()              容器的容量
//size()                  返回容器中元素的个数
//resize(int num)         重新指定容器的长度为num，若容器变长，则以默认值填充新位置，如果变短，
//                        则末尾超出容器长度的元素被删除
//resize(int num,elem)    重新指定容器的长度为Num，若容器变长，则以elem填充新位置，如果变短，
//                        则末尾超出容器长度的元素被删除

//void Test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	if (v1.empty())//为真代表容器为空
//	{
//		cout << "v1内为空" << endl;
//	}
//	else
//	{
//		cout << "v1内不为空" << endl;
//	}
//
//	cout << "v1的容量为：" << v1.capacity() << endl;
//	cout << "v1中的元素个数为：" << v1.size() << endl;
//
//	v1.resize(15);
//	PrintVector(v1);
//
//	v1.resize(20, 100);
//	PrintVector(v1);
//
//	v1.resize(5);
//	PrintVector(v1);
//}

//vector插入和删除
//push_back(elem)                                   尾部插入元素ele
//pop_bakc()                                        删除最后一个元素
//insert(const_iterator pos,ele)                    迭代器指向位置pos插入元素ele
//insert(const_iterator pos,int count,ele)          迭代器指向位置pos插入count个元素ele
//erase(const_iterator pos)                         删除迭代器指向的元素
//erase(const_iterator start,const_iterator end)    删除迭代器从start到end之间的元素
//clear()                                           删除容器中所有元素
//void Test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	PrintVector(v1);
//	v1.pop_back();
//	PrintVector(v1);
//	v1.insert(v1.begin(), 10);
//	PrintVector(v1);
//
//	v1.insert(v1.begin()+5, 3,100);
//	PrintVector(v1);
//
//	v1.erase(v1.begin() + 5);
//	PrintVector(v1);
//
//	v1.erase(v1.begin(),v1.end()-4);
//	PrintVector(v1);
//
//	v1.clear();
//	PrintVector(v1);
//}

//vector数据中的存取操作
//at(int idx)      返回索引idx所指的数据   
//operator[]       返回索引idx所指的数据
//front()          返回容器中第一个元素数据
//back()           返回容器中最后一个数据元素

//void Test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i*10+1);
//	}
//
//	int ret = v1.at(4);
//	cout << ret << endl;
//
//	cout << v1[4] << endl;
//
//	cout << v1.front() << endl;
//	cout << v1.back() << endl;
//}

//vector互换容器
//Swap(vec)将vector与本身的元素互换

//void Test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i*10+1);
//	}
//
//	vector<int> v2;
//	for (int i = 0; i < 8; i++)
//	{
//		v2.push_back(i);
//	}
//
//	PrintVector(v1);
//	PrintVector(v2);
//
//	v2.swap(v1);
//
//	PrintVector(v1);
//	PrintVector(v2);
//}
//
////实际用途，巧用Swap可以收缩内存空间
//void Test02()
//{
//	vector<int > v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);//重新指定大小
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//巧用swap收缩
//	vector<int >(v).swap(v);//vector<int>(v)匿名对象，相当于利用拷贝构造函数创建了一个新的对象
//	cout << "v的容量为：" << v.capacity() << endl;//为3
//	cout << "v的大小为：" << v.size() << endl;//为3
//}

//vector预留空间:减少vector在动态扩展容量时的扩展次数
//reserve(int len)  容器预留len个元素长度，预留位置不初始化，元素不可访问

//void Test01()
//{
//	vector<int> v1;
//
//	//利用reserve预留空间
//	v1.reserve(100000);
//	int num = 0;
//	int* p = NULL;
//	for (int i = 0; i < 100000; i++)
//	{
//		v1.push_back(i);
//
//		if (p != &v1[0])
//		{
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << "num = " << num << endl;
//	
//
//	
//}


//deque容器概念：双端数组，可以对头端和尾端进行插入删除操作
//deque和vector区别：vector对于头部的插入删除效率低，数据量大，效率低。
//deque相对而言，对头部的插入删除速度会比vector快
//vector访问元素时的速度会比deque块，这和两者内部实现有关

//deque内部工作原理：deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据，
//中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间

//deque<T>deqT;             默认构造形式
//deque(beg,end)            构造函数将[begin,end)区间的元素拷贝给本身
//deque(n,elem)             构造函数将n个elem拷贝为本身
//deque(const deque&deq)    拷贝构造函数

//void PrintDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100 容器里的数据不可以修改了
//		cout << *it << " ";
//	}
//
//	//for (int elem : d)
//	//{
//	//	cout << elem << " ";
//	//}
//	cout << endl;
//}


//void Test01()
//{
//	deque<int> d;
//	for (int i = 0; i < 10; i++)
//	{
//		d.push_back(i);
//	}
//	PrintDeque(d);
//
//	deque<int> d1(d.begin(),d.end());
//	PrintDeque(d1);
//
//	deque<int> d2(10, 100);
//	PrintDeque(d2);
//
//	deque<int> d3(d1);
//	PrintDeque(d3);
//
//
//}

//deque赋值操作：给deque容器进行赋值
//deque& operator(const deque&deq)  重载等号操作符
//assign(beg,end)                   将[begin,end)区间中断数据拷贝赋值给本身
//assign(n,elem)                    将n个elem拷贝赋值为本身

//void Test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	PrintDeque(d1);
//
//	deque<int> d2 = d1;
//	PrintDeque(d2);
//
//	deque<int> d3;
//	d3.assign(d1.begin(), d1.end());
//	PrintDeque(d3);
//
//	deque<int> d4;
//	d4.assign(10,100);
//	PrintDeque(d4);
//}

//deque容量和大小
//deque.empty()                 判断容器是否为空
//deque.size()                  返回容器中元素的个数
//deque.resize(int num)         重新指定容器的长度为num，若容器变长，则以默认值填充新位置，如果变短，
//                              则末尾超出容器长度的元素被删除
//deque.resize(int num,elem)    重新指定容器的长度为Num，若容器变长，则以elem填充新位置，如果变短，
//                              则末尾超出容器长度的元素被删除

//void Test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	if (d1.empty())//为真代表容器为空
//	{
//		cout << "d1内为空" << endl;
//	}
//	else
//	{
//		cout << "d1内不为空" << endl;
//	}
//
//	cout << "d1中的元素个数为：" << d1.size() << endl;
//
//	d1.resize(15);
//	PrintDeque(d1);
//
//	d1.resize(20, 100);
//	PrintDeque(d1);
//
//	d1.resize(5);
//	PrintDeque(d1);
//}

//deque插入和删除
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
//void Test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	deque<int> d2;
//	for (int i = 0; i < 10; i++)
//	{
//		d2.push_back(i);
//	}
//
//	PrintDeque(d1);
//
//	d1.push_front(10);
//	PrintDeque(d1);
//
//	d1.pop_back();
//	PrintDeque(d1);
//
//	d1.pop_front();
//	PrintDeque(d1);
//
//	d1.insert(d1.begin(), 10);
//	PrintDeque(d1);
//
//	d1.insert(d1.begin()+5, 3,100);
//	PrintDeque(d1);
//
//	d2.insert(d2.begin() + 3, d1.begin(), d1.end());
//	PrintDeque(d2);
//
//	d1.erase(d1.begin() + 5);
//	PrintDeque(d1);
//
//	d1.erase(d1.begin(),d1.end()-4);
//	PrintDeque(d1);
//
//	d1.clear();
//	PrintDeque(d1);
//}


//deque数据中的存取操作
//at(int idx)      返回索引idx所指的数据   
//operator[]       返回索引idx所指的数据
//front()          返回容器中第一个元素数据
//back()           返回容器中最后一个数据元素

//void Test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i*10+1);
//	}
//
//	int ret = d1.at(4);
//	cout << ret << endl;
//
//	cout << d1[4] << endl;
//
//	cout << d1.front() << endl;
//	cout << d1.back() << endl;
//}

//deque排序：利用算法实现对deque容器排序
//sort(iterator beg,iterator end) //对beg和end区间内元素进行排序


//void Test01()
//{
//	deque<int> d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_back(40);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//	d1.push_front(400);
//
//	PrintDeque(d1);
//
//	sort(d1.begin(), d1.end());//排序 默认排序规则，从小到大 升序
//	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
//	PrintDeque(d1);
//}



////案例 - 评委打分
////有5名选手：选手ABCDE，10个评委分别对每一个选手打分，去除最高分，和最低分，取平均分
////1.创建五名选手，放到vector中
////2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
////3.sort算法对deque容器中分数排序，去除最高分和最低分
////4.deque容器遍历一遍，累加总分
////5.获取平均分
//class Person
//{
//public:
//	Person(string name, int socre)
//	{
//		this->m_Name = name;
//		this->m_Score = socre;
//	}
//
//	string m_Name;
//	int m_Score;
//};
//
//void CreatPerson(vector<Person> &v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//		Person p(name, score);
//		v.push_back(p);
//	}
//}
//
//void SetScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		deque<int> d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;   //60-100
//			d.push_back(score);
//		}
//		cout << "选手：" << it->m_Name << "打分：" << endl;
//		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//		{
//			cout << *it << " ";
//		}
//		cout << endl;
//
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//		int ret = 0;
//		for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//		{
//			ret += *it;
//		}
//		/*for (int i = 0; i < d.size(); i++)
//		{
//			ret += d[i];
//		}*/
//		int avg = ret / d.size();
//		it->m_Score = avg;
//	}
//}
//
//void ShowPerson(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it).m_Name << "  " << (*it).m_Score << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(0));
//	//Test01();
//	//创建5名选手
//	vector<Person> v;
//	CreatPerson(v);
//
//
//
//	//给5名选手打分
//	SetScore(v);
//
//	//显示最后得分
//	ShowPerson(v);
//
//	system("pause");
//	return 0;
//}

//stack容器
//Stack（堆栈）是一种先进后出的数据结构，它只有一个出口  栈中只有顶端元素可以被外界使用，因此栈不允许有遍历行为


//stack常用接口
//构造函数：stack<T> stk;  stack采用模板类实现，stack对象的默认构造形式  stack(const stack&stk)拷贝构造函数
//赋值操作：stack& operator=(const stack& stk)重载等号操作符
//数据存取：
//push(elem)  向栈顶添加元素
//pop()       从栈顶移除第一个元素
//top()       返回栈顶元素
//大小操作：
//empty() 判断堆栈是否为空   size()返回栈的大小
//void Test01()
//{
//	stack<int > stk;
//	stk.push(10);
//	stk.push(20);
//	stk.push(30);
//	stk.push(40);
//	stk.push(50);
//	int num = stk.size();
//
//	for (int i = 0; i < num; i++)
//	{
//		cout << stk.top() << endl;
//		stk.pop();
//	}
//
//	if (stk.empty())
//	{
//		cout << "stack中为空" << endl;
//	}
//	else
//	{
//		cout << "stack中不为空" << endl;
//	}
//
//}

//queue(队列)容器：；Queue四一中先进先出的数据结构，它有连个出口
//队列容器允许从一端新增元素，从另一端移除元素  队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
//队列中进数据称为入栈push()  出数据称为出队pop()
//queue常用接口
//构造函数：queue<T> que;  queue采用模板类实现，queue对象的默认构造形式  queue(const queue&que)拷贝构造函数
//赋值操作：queue& operator=(const queue& que)重载等号操作符
//数据存取：
//push(elem)  向队尾添加元素
//pop()       从队头移除第一个元素
//front()     返回第一个元素
//back()      返回最后一个元素
//大小操作：
//empty() 判断堆栈是否为空   size()返回栈的大小

//void Test01()
//{
//	queue<int > que;
//	que.push(10);
//	que.push(20);
//	que.push(30);
//	que.push(40);
//	que.push(50);
//	int num = que.size();
//	int top = que.front();
//	int tail = que.back();
//	cout << "队列第一个元素为：" << top << "\t队列最后一个元素为：" << tail << endl;
//
//	for (int i = 0; i < num; i++)
//	{
//		cout << que.front() << endl;
//		que.pop();
//	}
//
//	if (que.empty())
//	{
//		cout << "queue中为空" << endl;
//	}
//	else
//	{
//		cout << "queue中不为空" << endl;
//	}
//
//}

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
//void Test01()
//{
//	queue<Person> q;
//
//	//准备数据
//	Person p1("孙悟空", 111);
//	Person p2("猪八戒", 109);
//	Person p3("沙僧", 102);
//	Person p4("唐僧", 30);
//
//	//入队
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//判断只要队列不为空，查看当前队头队尾
//	while (!q.empty())
//	{
//		cout << "队头元素----姓名" << q.front().m_Name << "\t年龄：" << q.front().m_Age << endl;
//		cout << "队尾元素----姓名" << q.back().m_Name << "\t年龄：" << q.back().m_Age << endl;
//		q.pop();
//	}
//
//}

//list容器：将数据进行链式存储  
//链表是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
//链表的组成：链表由一系列结点组成
//结点的组成：一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域  STL中的链表是一个双向循环链表
//优点：动态分配内存，不会浪费，可以对任意位置进行快速插入或删除元素   
//缺点：容器的遍历速度没有数组快，占用的空间会比数组大
//由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器

//list构造函数：
//list<T>lst;            list采用模板类实现，对象的默认构造形式
//list(beg,end)          构造函数将[beg,end)区间中的元素拷贝给本身
//list(n,elem)           构造函数将n个elem拷贝给本身
//list(const list&lst)   拷贝构造函数
void PrintList(const list<int>& lst)
{
	for (list<int>::const_iterator lit = lst.begin(); lit != lst.end(); lit++)
	{
		cout << *lit <<"  ";
	}
	cout << endl;
}


void Test01()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	PrintList(L1);

	list<int> L2(L1.begin(), L1.end());
	PrintList(L2);

	list<int> L3 = L2;
	PrintList(L3);

	list<int> L4(10, 100);
	PrintList(L4);
}

int main()
{
	Test01();

	system("pause");
	return 0;
}