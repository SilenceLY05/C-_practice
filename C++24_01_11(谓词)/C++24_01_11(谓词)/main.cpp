#include <iostream>
using namespace std;
#include <string>
#include <map>
#include <vector>
#include<ctime>
#include<algorithm>
#include<functional>

//Ա�����鰸��
//����10��Ա��(ABCDEFGHIJ)����Ҫָ�ɹ������ţ�Ա����Ϣ������ �������;���ַ�Ϊ���߻� ���� �з�
//������䲿�ź͹��� ͨ��multimap������Ϣ���룬key(���ű��)value(Ա��)  �ֲ�����ʾԱ����Ϣ

//1.����10��Ա�����ŵ�vector�У�����������ȡ������Ա�����������
//����󽫲��ű����Ϊkey ����Ա����Ϊvalue
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
//		string name = "Ա��";
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
//	//		cout << "���ţ��߻���" << "  ";
//	//	}
//	//	else if(it->first == 2)
//	//	{
//	//		cout << "���ţ�������" << "  ";
//	//	}
//	//	else
//	//	{
//	//		cout << "���ţ��з���" << "  ";
//	//	}
//
//	//	cout << "������" << ((*it).second).m_Name << "  ����:" << (*it).second.m_Salary << endl;
//	//}
//	cout << "�߻����ţ�" << endl;
//
//	multimap<int, Worker>::const_iterator pos = mWorker.find(CEHUA);
//
//	int count = mWorker.count(CEHUA);//ͳ�Ʋ߻����ž�������
//	int index = 0;
//
//	for (; pos != mWorker.end() && index < count; pos++, index++)
//	{
//		cout << "������" << pos->second.m_Name << "  ����" << pos->second.m_Salary << endl;
//	}
//
//	cout << "-------------------------------" << endl;
//
//	cout << "�������ţ�" << endl;
//
//	pos = mWorker.find(MEISHU);
//
//	count = mWorker.count(MEISHU);//ͳ�Ʋ߻����ž�������
//	index = 0;
//
//	for (; pos != mWorker.end() && index < count; pos++, index++)
//	{
//		cout << "������" << pos->second.m_Name << "  ����" << pos->second.m_Salary << endl;
//	}
//
//	cout << "-------------------------------" << endl;
//
//	cout << "�з����ţ�" << endl;
//
//	pos = mWorker.find(YANFA );
//
//	count = mWorker.count(YANFA);//ͳ�Ʋ߻����ž�������
//	index = 0;
//
//	for (; pos != mWorker.end() && index < count; pos++, index++)
//	{
//		cout << "������" << pos->second.m_Name << "  ����" << pos->second.m_Salary << endl;
//	}
//}
//
//
//void Test01()
//{
//	vector<Worker> v;
//	CreatWorker(v);
//
//	//����
//	multimap<int, Worker> mWorker;
//	SetGroup(v, mWorker);
//
//	//������ʾԱ��
//	ShowWorker(mWorker);
//
//	//for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << (*it).m_Name << "  " << (*it).m_Salary << endl;
//	//}
//}

//STL - ��������
//�������������غ������ò��������࣬����󳣳�Ϊ��������  ��������ʹ������()ʱ����Ϊ���ƺ������ã�Ҳ�зº���
//���ʣ���������(�º���)��һ���࣬����һ������

//���������ʹ�ã�����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//�������󳬳���ͨ�����ĸ����������������Լ���״̬    �������������Ϊ��������

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
//	int count;//�ڲ��Լ�״̬
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
//	cout << "myprintf���õĴ���" << myp.count << endl;
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

//ν�ʸ������bool���͵ķº�����Ϊν�� ���operator()����һ����������ô��һԪν�� 
//���operator()����������������ô�ж�Ԫν��

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
//	//������������û�д���5������
//	//find_if(v.begin(), v.end(), GreaterFive());//GreaterFive()�����ĺ�������
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GF);
//
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��˴���5�������ǣ�" << *it << endl;
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
//	//ʹ�ú������� �ı��㷨���� ��Ϊ�������Ӵ�С
//}

//�ڽ������������壺STL�ڽ���һЩ��������
//���ࣺ�����º��� ��ϵ�º��� �߼��º��� 
//�÷�����Щ�º����������Ķ����÷���һ�㺯����ȫ��ͬ ʹ���ڽ�����������Ҫ����ͷ�ļ�#include<functional>

//�����º�����ʵ���������� ����negate��һԪ���㣬�������Ƕ�Ԫ����
//template<class T> T plus<T>        �ӷ��º���            template<class T> T minus<T>    �����º���
//template<class T> T multiplies<T>  �˷��º���            template<class T> T divides<T>  �����º���
//template<class T> T modulus<T>     ȡģ�º���            template<class T> T negate<T>   ȡ���º���



//void Test01()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//
//	plus<int> p;
//	cout << p(10, 20) << endl;
//}


//��ϵ�º�����ʵ�ֹ�ϵ�Ա�
//template<class T> bool equal_to<T>  ����          template<class T> bool not_equal<T>      ������
//template<class T> bool greater<T>   ����          template<class T> bool greater_equal<T>  ���ڵ���
//template<class T> bool less<T>      С��          template<class T> bool less_equal<T>     С�ڵ���

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
//	//����
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}


//�߼��º�����ʵ���߼�����
//template<class T> bool logical_and<T>   �߼���          template<class T> bool logical_or<T>      �߼���
//template<class T> bool logical_not<T>   �߼���         

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
//	//�����߼��ǽ�����v���˵�����v2��,��ִ��ȡ���Ĳ���
//	vector<bool> v2;
//	v2.resize(v.size());
//
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}

//STL�����㷨
//�㷨��Ҫ����ͷ�ļ�<algorithm> <functional><numeric>���
//<algorithm>������STLͷ�ļ�������һ������Χ��ƱȽϡ����������ҡ�������������ֵ���޸ĵȵ�
//<functional>������һЩģ���࣬����������������
//<numeric>�����С��ֻ��������������������м���ѧ�����ģ�庯��

//���ñ������� for_each()��������    transform()������������һ��������

//for_each(iterator beg,iterator end,_func)  ��ʼ������ ���������� �º�������

//��ͨ����
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
//begԴ������ʼ������    endԴ��������������   beg2Ŀ��Դ������ʼ������   _func()�������ߺ�������

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

//find ����Ԫ��    find_if  ����������Ԫ��    adgacent_find   ���������ظ�Ԫ��    binary_search   ���ֲ��ҷ�
//count  ͳ��Ԫ�ظ���    count_if   ������ͳ��Ԫ�ظ���

//find ����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()

//����������������
//void Test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	//�����Ƿ���5���Ԫ��
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//
//	if (it == v.end())
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�:  " << *it << endl;
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
////		string name = "Ա��";
////		name += namespeed[i];
////		int age = rand() % 9 + 20;
////		Person p(name, age);
////		v.push_back(p);
////	}
////}
//
////�����Զ�����������
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
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�������Ϊ:  " << (*it).m_Name << "  ����Ϊ��" << (*it).m_Age << endl;
//	}
//}

//find_if(iterator beg,iterator end,_Pred)
//��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��  _Pred��������ν��(����bool���͵ķº���)

//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
////����������������
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
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�:  " << *it << endl;
//	}
//}
//
////�����Զ�����������
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
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�������Ϊ:  " << (*it).m_Name << "  ����Ϊ��" << (*it).m_Age << endl;
//	}
//}

//adjacent_find:���������ظ�Ԫ��
//����ԭ�ͣ�adjacent_find(beg,end)  ���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����

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
//		cout << "δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�:  " << *it << endl;
//	}
//}


////binary_search(beg,end,value)  ����ָ��Ԫ�أ��ҵ�����true û�ҵ�����false  �������в�����
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
//		cout << "�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//}


////count(beg,end,value) ͳ��Ԫ�ظ���  
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
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("�ܲ�", 40);
//	Person p5("����", 30);
//	Person p("�����", 35);
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
//	cout << "�������ͬ���������У�" << num << endl;
//}

//count_if(beg,end,_Pred)  ������ͳ��Ԫ�ظ���
//class MyCompare
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 20;
//	}
//};
//
////ͳ�����õ���������
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
//	cout << "����20 �ĸ���Ϊ��" << num << endl;
//
//}
//
////ͳ���Զ�����������
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
//	Person p1("����", 35);
//	Person p2("����", 35);
//	Person p3("�ŷ�", 35);
//	Person p4("����", 20);
//	Person p5("�����", 20);
//	Person p6("�ܲ�", 40);
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
//	cout << "�������30�ĸ���Ϊ��" << num << endl;
//}

//���������㷨 sort ��������Ԫ�ؽ�������  random_shuffle  ϴ�ƣ�ָ����Χ�ڵ�Ԫ�������������
//merge ����Ԫ�غϲ������洢����һ������  reverse  ��תָ����Χ��Ԫ��

//sort(beg,end,_Pred)  ��ֵ����Ԫ�أ��ҵ�����ֵָ��λ�õ��������Ҳ������ؽ���������λ��
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

//rand_shuffle  ϴ�ƣ�ָ����Χ�ڵ����������������
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

//merge ��������Ԫ�غϲ� ���洢��һ��������
//merge(beg1,end1,beg2,end2,dest)  destĿ��������ʼ������  ����Ԫ�ر����������

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

//reverse ��������Ԫ�ؽ��з�ת
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