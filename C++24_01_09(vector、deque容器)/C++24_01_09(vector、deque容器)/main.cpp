#include <iostream>
using namespace std;
#include <vector>
#include<deque>
#include <algorithm>
#include <stack>
#include <queue>
#include<list>


//vector�������vector���ݽṹ������ǳ����ƣ�Ҳ��Ϊ��������  
//vector����ͨ�������𣺲�֮ͬ�����������Ǿ�̬�ռ䣬��vector���Զ�̬��չ
//��̬��չ����������ԭ�ռ�֮�������¿ռ䣬�����Ҹ�����ڴ�ռ䣬Ȼ��ԭ���ݿ������¿ռ䣬�ͷ�ԭ�ռ�

//vector���캯��
//vector<T> v;  ����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//vector(v.begin(),v.end())    ��v[begin(),end())֮���Ԫ�ؿ���������
//vector(n,elem)  ���캯����n��elem����������
//vector(const vector & vec);   �������캯��

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
//	vector<int> v1;//Ĭ�Ϲ��죬�޲�
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	PrintVector(v1);
//
//	//ͨ�����䷽ʽ���й���
//	vector<int> v2(v1.begin(), v1.end());
//	PrintVector(v2);
//
//	//n��elem
//	vector<int> v3(10, 100);
//	PrintVector(v3);
//
//	//��������
//	vector<int> v4(v3);
//	PrintVector(v4);
//}


//vector��ֵ������
//vector& operator=(const vector& vec);  ���صȺŲ���
//assign(beg,end)  ��[beg,end)�����е����ݿ�����ֵΪ����
//assign(n,elem)   ��n��elem������ֵ������


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

//vector�����ʹ�С
//empty()                 �ж������Ƿ�Ϊ��
//capacity()              ����������
//size()                  ����������Ԫ�صĸ���
//resize(int num)         ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã������̣�
//                        ��ĩβ�����������ȵ�Ԫ�ر�ɾ��
//resize(int num,elem)    ����ָ�������ĳ���ΪNum���������䳤������elem�����λ�ã������̣�
//                        ��ĩβ�����������ȵ�Ԫ�ر�ɾ��

//void Test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	if (v1.empty())//Ϊ���������Ϊ��
//	{
//		cout << "v1��Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1�ڲ�Ϊ��" << endl;
//	}
//
//	cout << "v1������Ϊ��" << v1.capacity() << endl;
//	cout << "v1�е�Ԫ�ظ���Ϊ��" << v1.size() << endl;
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

//vector�����ɾ��
//push_back(elem)                                   β������Ԫ��ele
//pop_bakc()                                        ɾ�����һ��Ԫ��
//insert(const_iterator pos,ele)                    ������ָ��λ��pos����Ԫ��ele
//insert(const_iterator pos,int count,ele)          ������ָ��λ��pos����count��Ԫ��ele
//erase(const_iterator pos)                         ɾ��������ָ���Ԫ��
//erase(const_iterator start,const_iterator end)    ɾ����������start��end֮���Ԫ��
//clear()                                           ɾ������������Ԫ��
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

//vector�����еĴ�ȡ����
//at(int idx)      ��������idx��ָ������   
//operator[]       ��������idx��ָ������
//front()          ���������е�һ��Ԫ������
//back()           �������������һ������Ԫ��

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

//vector��������
//Swap(vec)��vector�뱾���Ԫ�ػ���

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
////ʵ����;������Swap���������ڴ�ռ�
//void Test02()
//{
//	vector<int > v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	v.resize(3);//����ָ����С
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	//����swap����
//	vector<int >(v).swap(v);//vector<int>(v)���������൱�����ÿ������캯��������һ���µĶ���
//	cout << "v������Ϊ��" << v.capacity() << endl;//Ϊ3
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;//Ϊ3
//}

//vectorԤ���ռ�:����vector�ڶ�̬��չ����ʱ����չ����
//reserve(int len)  ����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

//void Test01()
//{
//	vector<int> v1;
//
//	//����reserveԤ���ռ�
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


//deque�������˫�����飬���Զ�ͷ�˺�β�˽��в���ɾ������
//deque��vector����vector����ͷ���Ĳ���ɾ��Ч�ʵͣ���������Ч�ʵ͡�
//deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻ��vector��
//vector����Ԫ��ʱ���ٶȻ��deque�飬��������ڲ�ʵ���й�

//deque�ڲ�����ԭ��deque�ڲ��и��п�����ά��ÿ�λ������е����ݣ��������д����ʵ���ݣ�
//�п���ά������ÿ���������ĵ�ַ��ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�

//deque<T>deqT;             Ĭ�Ϲ�����ʽ
//deque(beg,end)            ���캯����[begin,end)�����Ԫ�ؿ���������
//deque(n,elem)             ���캯����n��elem����Ϊ����
//deque(const deque&deq)    �������캯��

//void PrintDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100 ����������ݲ������޸���
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

//deque��ֵ��������deque�������и�ֵ
//deque& operator(const deque&deq)  ���صȺŲ�����
//assign(beg,end)                   ��[begin,end)�����ж����ݿ�����ֵ������
//assign(n,elem)                    ��n��elem������ֵΪ����

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

//deque�����ʹ�С
//deque.empty()                 �ж������Ƿ�Ϊ��
//deque.size()                  ����������Ԫ�صĸ���
//deque.resize(int num)         ����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã������̣�
//                              ��ĩβ�����������ȵ�Ԫ�ر�ɾ��
//deque.resize(int num,elem)    ����ָ�������ĳ���ΪNum���������䳤������elem�����λ�ã������̣�
//                              ��ĩβ�����������ȵ�Ԫ�ر�ɾ��

//void Test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	if (d1.empty())//Ϊ���������Ϊ��
//	{
//		cout << "d1��Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1�ڲ�Ϊ��" << endl;
//	}
//
//	cout << "d1�е�Ԫ�ظ���Ϊ��" << d1.size() << endl;
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

//deque�����ɾ��
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


//deque�����еĴ�ȡ����
//at(int idx)      ��������idx��ָ������   
//operator[]       ��������idx��ָ������
//front()          ���������е�һ��Ԫ������
//back()           �������������һ������Ԫ��

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

//deque���������㷨ʵ�ֶ�deque��������
//sort(iterator beg,iterator end) //��beg��end������Ԫ�ؽ�������


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
//	sort(d1.begin(), d1.end());//���� Ĭ��������򣬴�С���� ����
//	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
//	PrintDeque(d1);
//}



////���� - ��ί���
////��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�����ͷ֣�ȡƽ����
////1.��������ѡ�֣��ŵ�vector��
////2.����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
////3.sort�㷨��deque�����з�������ȥ����߷ֺ���ͷ�
////4.deque��������һ�飬�ۼ��ܷ�
////5.��ȡƽ����
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
//		string name = "ѡ��";
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
//		cout << "ѡ�֣�" << it->m_Name << "��֣�" << endl;
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
//	//����5��ѡ��
//	vector<Person> v;
//	CreatPerson(v);
//
//
//
//	//��5��ѡ�ִ��
//	SetScore(v);
//
//	//��ʾ���÷�
//	ShowPerson(v);
//
//	system("pause");
//	return 0;
//}

//stack����
//Stack����ջ����һ���Ƚ���������ݽṹ����ֻ��һ������  ջ��ֻ�ж���Ԫ�ؿ��Ա����ʹ�ã����ջ�������б�����Ϊ


//stack���ýӿ�
//���캯����stack<T> stk;  stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ�����ʽ  stack(const stack&stk)�������캯��
//��ֵ������stack& operator=(const stack& stk)���صȺŲ�����
//���ݴ�ȡ��
//push(elem)  ��ջ�����Ԫ��
//pop()       ��ջ���Ƴ���һ��Ԫ��
//top()       ����ջ��Ԫ��
//��С������
//empty() �ж϶�ջ�Ƿ�Ϊ��   size()����ջ�Ĵ�С
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
//		cout << "stack��Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "stack�в�Ϊ��" << endl;
//	}
//
//}

//queue(����)��������Queue��һ���Ƚ��ȳ������ݽṹ��������������
//�������������һ������Ԫ�أ�����һ���Ƴ�Ԫ��  ������ֻ�ж�ͷ�Ͷ�β�ſ��Ա����ʹ�ã���˶��в������б�����Ϊ
//�����н����ݳ�Ϊ��ջpush()  �����ݳ�Ϊ����pop()
//queue���ýӿ�
//���캯����queue<T> que;  queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ  queue(const queue&que)�������캯��
//��ֵ������queue& operator=(const queue& que)���صȺŲ�����
//���ݴ�ȡ��
//push(elem)  ���β���Ԫ��
//pop()       �Ӷ�ͷ�Ƴ���һ��Ԫ��
//front()     ���ص�һ��Ԫ��
//back()      �������һ��Ԫ��
//��С������
//empty() �ж϶�ջ�Ƿ�Ϊ��   size()����ջ�Ĵ�С

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
//	cout << "���е�һ��Ԫ��Ϊ��" << top << "\t�������һ��Ԫ��Ϊ��" << tail << endl;
//
//	for (int i = 0; i < num; i++)
//	{
//		cout << que.front() << endl;
//		que.pop();
//	}
//
//	if (que.empty())
//	{
//		cout << "queue��Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "queue�в�Ϊ��" << endl;
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
//	//׼������
//	Person p1("�����", 111);
//	Person p2("��˽�", 109);
//	Person p3("ɳɮ", 102);
//	Person p4("��ɮ", 30);
//
//	//���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	//�ж�ֻҪ���в�Ϊ�գ��鿴��ǰ��ͷ��β
//	while (!q.empty())
//	{
//		cout << "��ͷԪ��----����" << q.front().m_Name << "\t���䣺" << q.front().m_Age << endl;
//		cout << "��βԪ��----����" << q.back().m_Name << "\t���䣺" << q.back().m_Age << endl;
//		q.pop();
//	}
//
//}

//list�����������ݽ�����ʽ�洢  
//������һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ������Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
//�������ɣ�������һϵ�н�����
//������ɣ�һ���Ǵ洢����Ԫ�ص���������һ���Ǵ洢��һ������ַ��ָ����  STL�е�������һ��˫��ѭ������
//�ŵ㣺��̬�����ڴ棬�����˷ѣ����Զ�����λ�ý��п��ٲ����ɾ��Ԫ��   
//ȱ�㣺�����ı����ٶ�û������죬ռ�õĿռ��������
//��������Ĵ洢��ʽ�������������ڴ�ռ䣬�������list�еĵ�����ֻ֧��ǰ�ƺͺ��ƣ�����˫�������

//list���캯����
//list<T>lst;            list����ģ����ʵ�֣������Ĭ�Ϲ�����ʽ
//list(beg,end)          ���캯����[beg,end)�����е�Ԫ�ؿ���������
//list(n,elem)           ���캯����n��elem����������
//list(const list&lst)   �������캯��
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