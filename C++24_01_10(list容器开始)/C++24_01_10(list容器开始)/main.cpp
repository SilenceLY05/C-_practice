#include <iostream>
using namespace std;
#include <list>
#include <string>
#include <set>
#include <map>


//list��ֵ�ͽ�������list�������и�ֵ���Լ�����list����
//assign(beg,end)                            ��[beg,end)�����е����ݿ�����ֵ������
//assign(n,elem)                             ��n��elem������ֵ������
//list& operator=(const list& list)          ���صȺŲ�����
//swap(lst)                                  ��lst�뱾���Ԫ�ػ���

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


//list�����ʹ�С
//list.empty()                 �ж������Ƿ�Ϊ��
//list.size()                  ����������Ԫ�صĸ���
//list.resize(int num)         ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã������̣�
//                             ��ĩβ�����������ȵ�Ԫ�ر�ɾ��
//list.resize(int num,elem)    ����ָ�������ĳ���ΪNum���������䳤������elem�����λ�ã������̣�
//                             ��ĩβ�����������ȵ�Ԫ�ر�ɾ��

//void Test01()
//{
//	list<int> L1;
//	for (int i = 0; i < 10; i++)
//	{
//		L1.push_back(i);
//	}
//
//	if (L1.empty())//Ϊ���������Ϊ��
//	{
//		cout << "L1��Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "L1�ڲ�Ϊ��" << endl;
//	}
//
//	cout << "L1�е�Ԫ�ظ���Ϊ��" << L1.size() << endl;
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

//list�����ɾ��
//push_back(elem)                                   β������Ԫ��ele
//push_front(elem)                                  ������ͷ������һ������
//pop_bakc()                                        ɾ�����һ��Ԫ��
//pop_front()                                       ɾ��������һ������
//insert(const_iterator pos,ele)                    ������ָ��λ��pos����Ԫ��ele������������λ��
//insert(const_iterator pos,int count,ele)          ������ָ��λ��pos����count��Ԫ��ele,�޷���ֵ
//insert(const_iterator pos,beg,end)                ��Posλ�ò���[beg,end)��������ݣ��޷���ֵ
//erase(const_iterator pos)                         ɾ��������ָ���Ԫ��
//erase(const_iterator start,const_iterator end)    ɾ����������start��end֮���Ԫ��
//clear()                                           ɾ������������Ԫ��
//remove(elem)                                      �Ƴ�������������elemֵƥ���Ԫ��


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


//list���ݴ�ȡ����list���������ݽ��д�ȡ
//front();���ص�һ��Ԫ��  back():���صڶ���Ԫ��

//void Test01()
//{
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//
//	//L1[0]  ��������[]����list�����е�Ԫ��
//	//L1.at(0) ��������at��ʽ����list�����е�Ԫ��
//
//	PrintList(L1);
//
//	int head = L1.front();
//	int tail = L1.back();
//
//	cout << "L1�ĵ�һ��Ԫ��Ϊ��" << head << endl;
//	cout << "L1�����һ��Ԫ��Ϊ��" << tail << endl;
//
//	//�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L1.begin();
//	it++;
//	it--;//֧��˫��
//	//it + 1;
//}

//list��ת������:�������е�Ԫ�ط�ת���Լ��������е����ݽ�������
//reverse()��������
//sort()��������

//bool MyCompare(int v1,int v2)
//{
//	//���� ���õ�һ�������ڵڶ�����
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
//	//���в�֧��������ʵ������������������ñ�׼���㷨
//	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//	//sort(L1.begin(),L1.end())
//	L1.sort();//Ĭ��������򣬴�С��������
//	PrintList(L1);
//
//	L1.sort(MyCompare);//��������
//	PrintList(L1);
//}

////����������Person�Զ����������ͽ�������Person�����������������䣬���
////������򣺰�����������������������ͬ������߽��н���
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
//		cout << "������" << (*it).m_Name << "  ���䣺" << (*it).m_Age << "  ��ߣ�" << (*it).m_High << endl;;
//	}
//}
//
//void CreatPerson(list<Person>& L)
//{
//	string nameSeed = "ABCDEDA";
//	for (int i = 0; i < 7; i++)
//	{
//		string name = "ѡ��";
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


//set/multiset����������Ԫ�ض����ڲ���ʱ�Զ�������
//���ʣ�set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
//set/multiset����set���������������ظ���Ԫ�أ�multiset�������������ظ���Ԫ��

//set����͸�ֵ����������������set�����Լ���ֵ
//set<T> st;                     Ĭ�Ϲ��캯��
//set(const set&st);             �������캯��
//��ֵ��set& operator=(const set&st)   ���صȺŲ�����
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
//	//��������ʱֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(60);
//	s1.insert(40);
//	s1.insert(30);
//	PrintSet(s1);
//}

//set��С�ͽ���
//size()    ����������Ԫ�ص���Ŀ
//empty()   �ж������Ƿ�Ϊ��
//swap(st)  ����������������
 
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
//	cout << "set1�Ĵ�СΪ��" << s1.size() << endl;
//
//	if (!s1.empty())
//	{
//		cout << "set1��Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "set1Ϊ��" << endl;
//	}
//	s1.swap(s2);
//	PrintSet(s1);
//	PrintSet(s2);
//}

//set�����ɾ��
//insert(elem)     �������в���Ԫ��
//clear()          �������Ԫ��
//erase(pos)       ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(beg,end)   ɾ������(beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(elem)      ɾ��������ֵΪelem��Ԫ��
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
//	//ɾ��
//	set<int>::iterator it = s1.begin();
//	it = s1.erase(s1.begin());
//	cout << (*it) << endl;
//	PrintSet(s1);
//
//	//ɾ������
//	s1.erase(30);
//	PrintSet(s1);
//
//	s1.clear();
//	PrintSet(s1);
//}

//set���Һ�ͳ�ƣ���set�������в��������Լ�ͳ������
//fint(key)   ����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end()
//count(key)  ͳ��key��Ԫ�ظ���
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
//		cout << "�ҵ�Ԫ�أ�" << *it << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//	int num = s1.count(30);
//
//	//����set���ԣ�ͳ�ƽ��Ҫô��0Ҫô��1
//	cout << num << endl;
//}

//set��multiset����  set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ���    multiset���������ݣ���˿��Բ����ظ�����
//void Test01()
//{
//	set<int> s;
//	pair<set<int>::iterator,bool> ret =s.insert(10);
//	
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//
//	multiset<int> ms;
//	//��������ظ�ֵ
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//	PrintMulSet(ms);
//}

//pair���鴴�����ɶԳ��ֵ����ݣ����ö�����Է�����������
//���ִ�����ʽ��pair<type,type> p(value1,value2);   pair<type,type> p = make_pair(value1,value2);

//void Test01()
//{
//	//��һ��
//	pair<string, int> p("����", 12);
//	cout << "������" << p.first << "  ���䣺" << p.second << endl;
//
//	//�ڶ���
//	pair<string, int> p1 = make_pair("����", 20);
//	cout << "������" << p1.first << "  ���䣺" << p1.second << endl;
//}

//set��������set����Ĭ���������Ϊ��С�������÷º��������Ըı��������

////���������������
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
//	//ָ���������Ϊ�Ӵ�С
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

////����Զ�����������
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
//		string name = "��Ա";
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
//		cout << "������" << (*it).m_Name << "\t���䣺" << (*it).m_Age << endl;
//	}
//}

//map/multimap����
//map������Ԫ�ض���pair  pair�е�һ��Ԫ��Ϊkey(��ֵ)�����������ã��ڶ���Ԫ��Ϊvalue(ʵֵ)
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//���ʣ�map/multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ��
//�ŵ㣻���Ը���keyֵ�����ҵ�valueֵ 
//����map���������������ظ�keyֵԪ�أ�multimap�������������ظ�keyֵԪ��

//map����͸�ֵ
//��map�������й���͸�ֵ����
//map<T1,T2> mp;   mpĬ�Ϲ��캯��
//map(const map &p);  �������캯��
//��ֵ��map& operator=(const map&mp);  ���صȺŲ����� 

void PrintMap(map<int, int>& mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << "keyֵ = " << (*it).first << "  value = " << (*it).second << endl;
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
//	//��ֵ
//	map<int, int>m3(m);
//	PrintMap(m3);
//
//}

//map��С�ͽ�����ͳ��map������С�Լ�����map����
//size()    ����������Ԫ�ص���Ŀ
//empty()   �ж������Ƿ�Ϊ��
//swap(st)  ����������������


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
//		cout << "mapΪ��" << endl;
//	}
//	else
//	{
//		cout << "map��Ϊ��" << endl;
//		cout << "��СΪ��" << m.size() << endl;
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

//map�����ɾ����map�������в������ݺ�ɾ������
//insert(elem)       �������в�������
//clear()            �������Ԫ��
//erase(pos)         ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(beg,end)     ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(key)         ɾ��������ֵΪkey��Ԫ��

//void Test01()
//{
//	map<int, int> m;
//	//��һ��
//	m.insert(pair<int, int>(1, 10));
//
//	//�ڶ���
//	m.insert(make_pair(2, 20));
//
//	//������
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//������
//	m[4] = 40;//������
//
//	cout << m[5] << endl;//���Զ�����һ��keyΪ5 valueΪ0��ֵ
//
//	PrintMap(m);
//
//	//ɾ��
//	m.erase(m.begin());
//	PrintMap(m);
//
//	m.erase(3);//����keyɾ��
//	PrintMap(m);
//}

//map���Һ�ͳ��
//find(key)   ����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����m.end()
//count(key)  ͳ��key��Ԫ�ظ���
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
//	cout << "keyֵΪ2�ĸ����У�" << num << endl;
//
//	map<int, int>::iterator pos = m.find(2);
//	if (pos != m.end())
//	{
//		cout << "�鵽��Ԫ��key = " << (*pos).first << "  value = " << (*pos).second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//}

//map����map����Ĭ���������Ϊ ����keyֵ���� ��С��������

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
		cout << "keyֵ = " << (*it).first << "  value = " << (*it).second << endl;
	}
}

int main()
{
	//srand((unsigned)time(0));
	Test01();

	system("pause");
	return 0;
}

