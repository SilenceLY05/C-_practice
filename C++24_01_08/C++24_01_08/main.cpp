#include<iostream>
using namespace std;
//#include "Person.cpp"
//#include "Person.hpp"
//#include "myArray.hpp"
#include <vector>
#include <algorithm>

//��ģ����ļ���д
//��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
//�����1��ֱ�Ӱ���.cppԴ�ļ�  2����������ʵ��д��ͬһ���ļ��У������ĺ�׺Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��

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
//	cout << "������" << this->m_Name << "\t���䣺" << this->m_Age << endl;
//}

//void Test01()
//{
//	Person<string, int> p1("Jerry", 18);
//	p1.ShowPerson();
//}

////��ģ�����Ԫ
////ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����   ȫ�ֺ�������ʵ�֣���Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
//
////ͨ��ȫ�ֺ�����д��Ϣ
//template<class T1, class T2>
//class Person;
//
////����ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "������" << p.m_Name << "\t���䣺" << p.m_Age << endl;
//}
//
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ�������ʵ��
//	friend void printPerson(Person<T1,T2> p)
//	{
//		cout << "������" << p.m_Name << "\t���䣺" << p.m_Age << endl;
//	}
//
//	//ȫ�ֺ�������ʵ��
//	//��������ͨ�����������·�Ϊ�ຯ��ʵ�֣��޷����ӣ���Ҫ�ӿ�ģ������б�
//	//���ȫ�ֺ���������ʵ����Ҫ�ñ�������ǰ֪����������Ĵ���
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
////ȫ�ֺ�������ʵ�֣�ֱ��������������Ԫ����
//
//void Test01()
//{
//	Person<string, int> p("Tom", 12);
//	//printPerson(p);
//	printPerson2(p);
//}


//��ģ�尸����ʵ��һ��ͨ�õ�������
//���Զ��������������Լ��Զ����������͵����ݽ��д洢
//�������е����ݴ��ڶ��� new������
//���캯���п��Դ������������
//�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
//�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//����ͨ���±�ķ�ʽ���������е�Ԫ�� ���Ի�ȡ�����е�ǰԪ�ظ��������������

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
//	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
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
//		cout << "������"<<arr[i].m_Name << "\t���䣺" << arr[i].m_Age << endl;
//	}
//}
//
//void Test02()
//{
//	MyArray<Person> arr(10);
//	Person p1("�����", 999);
//	Person p2("����", 20);
//	Person p3("����", 25);
//	Person p4("����", 33);
//	Person p5("����", 30);
//
//	arr.Push_Back(p1);
//	arr.Push_Back(p2);
//	arr.Push_Back(p3);
//	arr.Push_Back(p4);
//	arr.Push_Back(p5);
//	
//	printPersonArray(arr);
//}


//C++���������(�������ԣ���װ �̳� ��̬)�ͷ��ͱ��˼�룬Ŀ�ľ��Ǹ����Ե�����
//STL�ĵ�����Ϊ�˽������ݽṹ���㷨��һ�ױ�׼��������STL
//STL�������STL�б�׼ģ���  STL�ӹ����Ϸ�Ϊ������ �㷨 ������ �������㷨֮��ͨ�������������޷����� STL�������еĴ��붼������ģ�����ģ�庯��


//STL�������
//STL�����Ϊ����������ֱ��ǣ��������㷨�����������º�����������(�����)���ռ�������
//�������������ݽṹ����vector list deque set map�ȣ������������
//�㷨�����ֳ��õ��㷨����sort find copy for_each��
//���������������������㷨֮��Ľ��ϼ�
//�º�������Ϊ���ƺ���������Ϊ�㷨��ĳ�ֲ���
//��������һ�����������������߷º�����������ӿڵĶ���
//�ռ�������������ռ�����������

//������STL�������ǽ�������㷺��һЩ���ݽṹʵ�ֳ��������õ����ݽṹ�����飬��������ջ�����У����ϣ�ӳ���ȡ�
//��Щ������Ϊ����ʽ�����͹���ʽ���� ����ʽ������ǿ��ֵ����������ʽ�����е�ÿ��Ԫ�ؾ��й̶���λ��
//����ʽ�������������ṹ����Ԫ��֮��û���ϸ�������ϵ�˳���ϵ


//�㷨���ʱ��㷨�ͷ��ʱ��㷨 
//�ʱ��㷨��ָ��������л����������Ԫ�ص����ݣ��翽�����滻��ɾ����
//���ʱ��㷨��ָ��������в������������Ԫ�ص����ݣ�����ң�������������Ѱ�Ҽ�ֵ��

//���������ṩһ�ַ�����ʹ֮�ܹ�����Ѱ��ĳ�����������ĸ���Ԫ�أ��������豩©���������ڲ���ʾ��ʽ��ÿ�����������Լ�ר���ĵ�����
//���������ࣺ
//����������������ݵ�ֻ������     ֻ����֧��++,==,!=
//����������������ݵ�ֻд����     ֻд��֧��++
//ǰ�����������д������������ǰ�ƽ�������    ��д��֧��++��==��!=
//˫�����������д������������ǰ��������    ��д��֧��++��--
//������ʵ���������д��������������Ծ�ķ�ʽ�����������ݣ����ܸ�ǿ�ĵ�����  ��д��֧��++��--,[n],-n,<,<=,>,>=
//���õ������еĵ���������Ϊ˫���������������ʵ�����
//
////vector���������������
////������vector  �㷨��for_each  ������:vector<int>::iterator
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void Test01()
//{
//	//����һ��vector����������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ�������е�һ��Ԫ�ص�λ��
//	//vector<int>::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�ص���һ��λ��
//
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	////�ڶ��ֱ�����ʽ
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++ )
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//�����ֱ�����ʽ ����STL�еı����㷨 
//	for_each(v.begin(), v.end(), myPrint);
//
//}


////vector�д���Զ�����������
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
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//���������е�����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << (*it).m_Name << endl;
//		cout << "���䣺" << (*it).m_Age << endl;
//	}
//}
//
////����Զ�����������ָ��
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
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//��������  �����*it��ʾ���ݵ�ַ Person���͵�ָ��
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������" << (*it)->m_Name << "\t���䣺" << (*it)->m_Age << endl;
//		cout << "������" << (*(*it)).m_Name << "\t���䣺" << (*(*it)).m_Age << endl;
//	}
//}

////vector����Ƕ������
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
//	//��С�������뵽��������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//ͨ�����������������ݱ���һ��
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}


////string����  string��C++�����ַ�������string������һ����
////string ��char*����char* ��һ��ָ�� �� string��һ���࣬���ڲ���װ��char*,��������ַ�������һ��char*�͵�����
////�ص㣺string���ڲ���װ�˺ܶ��Ա���� ���磺����find  ����copy  ɾ��delete  �滻replace  ����insert 
////string����char*��������ڴ棬���õ��ĸ���Խ���ȡֵԽ��ȣ������ڲ����и���
//
////string���캯��
////string()  ����һ���յ��ַ���
////string(const char* s)  ʹ���ַ���s��ʼ��
////string(const string& str)  ʹ��һ��string�����ʼ����һ��string����
////string(int n,char c)  ʹ��n���ַ�c��ʼ��
//
//
//void Test01()
//{
//	string s1;//Ĭ�Ϲ���
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

//string��ֵ���� ��string�ַ������и�ֵ
//string& operator=(const char* s)        char*�����ַ�����ֵ����ǰ���ַ���
//string& operator=(const string& s);     ���ַ���s������ǰ���ַ���
//string& operator=(char c)               �ַ����Ƹ���ǰ���ַ���
//string& assign(const char*s)            ���ַ���s������ǰ���ַ���
//string& assign(const char*s,int n)      ���ַ���s��ǰn���ַ�������ǰ���ַ���
//string& assign(const string& s)         ���ַ���s������ǰ�ַ���
//string& assign(int n,char c)            ��n���ַ�c������ǰ�ַ���

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


//string�ַ���ƴ��
//string& operator+=(const char* str);            ����+=������
//string& operator+=(const char c);               ����+=������
//string& operator+=(const string& str);          ����+=������
//string& append(const char *s);                  ���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char*s,int n)              ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string& s)                 ͬoperator+=(const string& str)
//string& append(const string&s,int pos,int n)    �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β


//void Test01()
//{
//	string str1 = "��";
//	str1 += "��ѧ��";
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


//string���Һ��滻
//���ң�����ָ���ַ����Ƿ����   �滻����ָ����λ���滻�ַ���
//int find(const string& str,int pos = 0)const;         ����str��һ�γ���λ�ã���pos��ʼ����
//int find(const char* s,int pos = 0)const;             ����s��һ�γ���λ�ã���pos��ʼ����
//int find(const char* s,int pos ,int n)const;          ��posλ�ò���s��ǰn���ַ���һ�γ���λ��
//int find(const char c,int pos = 0)const;              �����ַ�c��һ�γ���λ��
//int rfind(const string& str,int pos = npos)const;     ����str���һ��λ�ã���pos��ʼ����
//int rfind(const char* s,int pos = npos)const;         ����s���һ�γ���λ�ã���pos��ʼ����
//int rfind(const char* s,int pos ,int n)const;         ��posλ�ò���s��ǰn���ַ����һ�γ���λ��
//int rfind(const char c,int pos = 0)const;             �����ַ�c���һ�γ���λ��
//string& replace(int pos,int n,const string& str);     �滻��pos��ʼn���ַ�Ϊ�ַ���str
//string& replace(int pos,int n ,const char* s);        �滻��pos��ʼ��n���ַ�Ϊ�ַ���s

////����
//void Test01()
//{
//	string str1 = "abcdefg";
//	int pos = str1.find("de");
//	if (pos == -1)
//		cout << "δ�ҵ��ַ���" << endl;
//	else
//		cout << "�ҵ��ַ�����λ��Ϊpos = " << pos << endl;
//
//	//rfind����������� find�������Ҳ���
//	pos = str1.rfind("de");
//	cout << pos << endl;
//	
//}
//
////�滻
//void Test02()
//{
//	string str1 = "abcdefg";
//	str1.replace(2, 4, "11111");
//	cout << str1 << endl;
//}


////string�ַ����Ƚ� ��ȷ���0 ���ڷ���1 С�ڷ���-1
////int compare(const string&s)const;//���ַ���s�Ƚ�
////int compare(const char* s)const;  ���ַ���s�Ƚ�
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

//string �ַ���ȡ
//string�е����ַ���ȡ��ʽ������  char& operator[](int n)  //ͨ��[]��ʽȡ�ַ�
//char& at(int n);  ͨ��at��ʽ��ȡ�ַ�

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

//string�еĲ����ɾ������string�ַ������в����ɾ���ַ�����
//string& insert(int pos,const char* s)   �����ַ���
//string& insert(int pos,const string& str);�����ַ���
//string& insert(int pos,int n,char c)  ��ָ��λ�ò���n���ַ�c
//string& erase(int pos,int n = npos)  ɾ����pos��ʼ��n���ַ�

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

//string�Ӵ������ַ����л�ȡ��Ҫ���Ӵ�
//string substr(int pos = 0,int n = npos)const ;  ������pos��ʼ��n���ַ���ɵ��ַ���

void Test01()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;
}

//ʵ�ò���
void Test02()
{
	string email = "zhangsan@sina.com";

	//���ʼ���ַ��ȡ�û���
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