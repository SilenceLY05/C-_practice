#include <iostream>
using namespace std;

//ģ�棺ģ����ǽ���ͨ�õ�ģ�ߣ������߸�����
//ģ�治����ֱ��ʹ�ã���ֻ��һ����� ģ���ͨ�ò��������ܵ�

//C++�ṩ����ģ����� ����Ŀ�����ģ��
//����ģ�����ã�����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ�����������������
//�﷨�� template<typename T> 
//������������
//template - ��������ģ��   typename - ��ʾ�����ķ�����һ���������� ������class����  T - ͨ�õ��������ͣ������滻 ͨ��Ϊ��д 


////�������ͽ����ĺ���
//void SwapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////�������������͵ĺ���
//void SwapFloat(float& a, float& b)
//{
//	float temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ��
//template<class T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ������һ��ͨ������
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	//SwapInt(a, b);
//	//�Զ������Ƶ�
//	//mySwap(a, b);
//
//	//��ʾָ������
//	mySwap<int>(a, b);
//	cout << a << endl;
//	cout << b << endl;
//
//	float c = 3.23;
//	float d = 23.3;
//	//SwapFloat(c, d);
//	mySwap(c, d);
//	cout << c << endl;
//	cout << d << endl;
//
//}


//�Զ������Ƶ��������Ƶ���һ�µ���������T���ſ���ʹ��

////ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void func()
//{
//	cout << "func�ĺ�������" << endl;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	//mySwap(a, c);//�����������Ͳ�һ��
//
//	cout << a << endl;
//	cout << b << endl;
//}
//
//void Test02()
//{
//	func<int>();//��ȷ��T���������� �޷�ʹ��
//}
//
//int main()
//{
//	//Test01();
//	Test02();
//
//	system("pause");
//	return 0;
//}

//template<class T>
//void mySort(T arr[], int len)
//{
//	T temp;
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//
//void Test01()
//{
//	char charArr[] = "badfceg";
//	int size = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, size);
//	for (int i = 0; i < size; i++)
//	{
//		cout << charArr[i] << " ";
//	}
//	cout << endl;
//	int intArr[] = { 2,3,5,1,6,7,8,5,3,9 };
//	int size1 = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, size1);
//	for (int i = 0; i < size1; i++)
//	{
//		cout << intArr[i] << " " ;
//	}
//}

////��ͨ�����ͺ���ģ�������
////��ͨ������ʱ���Է����Զ�����ת��(��ʽ����ת��)
////����ģ�����ʱ����������Զ������Ƶ������ᷢ����ʽ����ת��
////���������ʾָ�����͵ķ�ʽ�����Է�����ʽ����ת��
//
////��ͨ����
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
//template <class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//c��Ӧ����99
//	cout << myAdd01(a, c) << endl;
//
//	//�Զ������Ƶ�,���ᷢ����ʽ����ת��
//	cout << myAdd02(a, (int)c) << endl;
//	//��ʾָ������
//	cout << myAdd02<int>(a, c) << endl;
//}

////��ͨ�����ͺ���ģ����ù���
////1.�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
////2.����ͨ����ģ������б������ú���ģ��
////3.����ģ��Ҳ���Է�������
////4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//
//void myPrint(int a, int b)
//{
//	cout << "������ͨ����" << endl;
//}
//
//template <class T>
//void myPrint(T a, T b)
//{
//	cout << "���õ��Ǻ���ģ��" << endl;
//}
//
//
//template <class T>
//void myPrint(T a, T b,T c)
//{
//	cout << "���õ��Ǻ���ģ������" << endl;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//myPrint(a, b);//������ͨ����
//	myPrint<>(a,b);//���ú���ģ��
//	myPrint<>(a, b, c);
//
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1,c2);
//}

////ģ������� ģ�岢�������ܵģ���Щ�ض���������Ҫ�þ��廯��ʽ������ʵ��
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
////�Ա����������Ƿ����
//template<class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)//���������������ΪPersonʱ��������������1����Person������==����  ����2���ṩPerson���غ���
//		return true;
//	else
//		return false;
//}
//
////���þ��廯��Person�汾ʵ�ִ��룬���ȵ���
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//		return true;
//	else
//		return false;
//}
//
//
//void Test01()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = myCompare(a, b);
//	if (ret)
//		cout << "a == b" << endl;
//	else
//		cout << "a!=b" << endl;
//}

//void Test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 10);
//	bool ret = myCompare(p1, p2);
//	if (ret)
//		cout << "p1 == p2" << endl;
//	else
//		cout << "p1!=p2" << endl;
//
//}

////��ģ�壺����һ��ͨ���࣬���еĳ�Ա �������Ϳ��Բ������ƶ�����һ�����������������
////�﷨��template<typename T>  ��
//
//template<class NameType,class AgeType>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void ShowPerson()
//	{
//		cout << "name:" << this->m_Name << "\tage:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void Test01()
//{
//	Person<string, int> p1("Tom", 18);
//	p1.ShowPerson();
//}

////��ģ��ͺ���ģ�������1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ�� 2.��ģ����ģ������б��п�����Ĭ�ϲ���
//template<class NameType = string ,class AgeType = int >
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void ShowPerson()
//	{
//		cout << "name:" << this->m_Name << "\tage:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//void Test01()
//{
//	//Person p("TOM", 15);//��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//	Person<string, int> p("TOM", 18);
//	p.ShowPerson();
//}
//
//void Test02()
//{
//	Person<> p("JERRY", 20);
//	p.ShowPerson();
//}


////��ģ���г�Ա��������ʱ��:��ģ���г�Ա�����ڵ���ʱ��ȥ����
//class Person1
//{
//public:
//	void ShowPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//
//class Person2
//{
//public:
//	void ShowPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<class T>
//class MyClass
//{
//public:
//	T obj;
//	//��ģ���еĳ�Ա����
//	void Func1()
//	{
//		obj.ShowPerson1();
//	}
//
//	void Func2()
//	{
//		obj.ShowPerson2();
//	}
//};
//
//
//
//void Test01()
//{
//	MyClass<Person1>m;
//	m.Func1();
//	//m.Func2();
//}

////��ģ�������������������ģ��ʵ�������Ķ����������εķ�ʽ
////һ�������ַ�ʽ��1.ָ����������� - ֱ����ʾ�������������
////2.����ģ�廯 - �������еĲ�����Ϊģ����д���   3.������ģ�廯 - ������������� ģ�廯���д���
//template<class NameType ,class AgeType >
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void ShowPerson()
//	{
//		cout << "����:" << this->m_Name << "\t����:" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.ָ���������� - ���
//void PrintPerson1(Person<string, int>&p)
//{
//	p.ShowPerson();
//}
//
//void Test01()
//{
//	Person<string, int> p("�����", 100);
//	PrintPerson1(p);
//}
//
////2.����ģ�廯
//template<class NameType, class AgeType >
//void PrintPerson2(Person<NameType,AgeType>&p)
//{
//	p.ShowPerson();
//	cout << "NameType������Ϊ��" << typeid(NameType).name() << endl;
//	cout << "AgeType������Ϊ��" << typeid(AgeType).name() << endl;
//}
//
//void Test02()
//{
//	Person<string, int> p("��˽�", 90);
//	PrintPerson2(p);
//}
//
////�������඼ģ�廯
//template<class T >
//void PrintPerson(T& p)
//{
//	p.ShowPerson();
//	cout << "T������Ϊ��" << typeid(T).name() << endl;
//}
//
//void Test03()
//{
//	Person<string, int> p("��ɮ", 30);
//	PrintPerson(p);
//}
//
//int main()
//{
//	//Test01();
//	//Test02();
//	Test03();
//
//	system("pause");
//	return 0;
//}

////��ģ����̳�
////������̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ���������е�����
////�����ָ�����������޷�����������ڴ�
////��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//template<class T>
//class Base
//{
//public:
//	T m;
//};
//
//class Son :public Base<int>//������������ʱ�򣬱���Ҫ֪��������T�����ͣ����ܼ̳и�����
//{
//
//};
//
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << "T1����������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2����������Ϊ��" << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void Test01()
//{
//	//Son s1;
//	Son2<int, char> s2;
//}

////��ģ���Ա��������ʵ��
//template<class T1,class T2>
//class Person
//{
//public:
//	//��Ա������������
//	Person(T1 name, T2 age);
//	void ShowPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template<class T1, class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1,T2>::ShowPerson()
//{
//	cout << "����:" << this->m_Name << "\t����:" << this->m_Age << endl;
//}
//
//void Test01()
//{
//	Person<string, int> p("�����", 18);
//	p.ShowPerson();
//}

//��ģ����ļ���д
//���⣺��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ��� 
//�����1��ֱ�Ӱ���cppԴ�ļ�  2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��


void Test01()
{
	
}

int main()
{
	Test01();


	system("pause");
	return 0;
}