#include <iostream>
using namespace std;
#include <string>

////�������캯������ʱ��
////ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
////ֵ���ݵķ�ʽ������������ֵ ��ֵ�ķ�ʽ���ؾֲ�����
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯��" << endl;
//		m_Age = 0;
//	}
//	Person(int age)
//	{
//		cout << "Person�вι��캯��" << endl;
//		m_Age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Person�������캯��" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//
//	int m_Age;
//
//};
//
//
//void Test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "P2������Ϊ�� " << p2.m_Age << endl;
//}
//
//void DoWork(Person p)//ʵ�δ����βε�ʱ�����ÿ������캯��
//{
//
//}
//
//void Test02()
//{
//	Person p;
//	DoWork(p);
//
//}
//
//Person DoWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void Test03()
//{
//	Person p = DoWork2();
//	cout << (int*)&p << endl;
//}
//
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


////���캯�����ù���
////Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�  Ĭ�������������޲Σ�������Ϊ�գ�   Ĭ�Ͽ������캯���������Խ���ֵ����
//
////���캯�����ù������£�
////����û������вι��캯����C++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
////����û����忽�����죬C++�������ṩ�������캯��
//
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "PersonĬ�Ϲ��캯��" << endl;
//	//}
//	//Person(int age)
//	//{
//	//	cout << "Person�вι��캯��" << endl;
//	//	m_Age = age;
//	//}
//	Person(const Person& p)
//	{
//		cout << "Person�������캯��" << endl;
//		m_Age = p.m_Age;
//	}
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int m_Age;
//
//};
//
////void Test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////
////	cout << "p2������Ϊ��" << p2.m_Age << endl;
////}
//
//void Test02()
//{
//	Person p;
//	//Person p2(p);
//	//cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
//
//
//int main()
//{
//	//Test01();
//	Test02();
//
//	system("pause");
//	return 0;
//}


////ǳ�������򵥵ĸ�ֵ��������
////������ڶ�����������ռ䣬���п�������
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯��" << endl;
//	}
//	Person(int age,int height)
//	{
//		cout << "Person�вι��캯��" << endl;
//		m_Age = age;
//		m_Height = new int(height);
//	}
//	////ǳ����������������Ƕ����ڴ��ظ��ͷ�
//	//Person(const Person& p)
//	//{
//	//	cout << "Person�������캯��" << endl;
//	//	m_Age = p.m_Age;
//	//	m_Height = p.m_Height;
//	//}
//	Person(const Person& p)
//	{
//		cout << "Person�������캯��" << endl;
//		m_Age = p.m_Age;
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		cout << "Person������������" << endl;
//		//�����������ڶ������ٵ�������һ���ͷŵĲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//	}
//
//
//	int m_Age;
//	int* m_Height;
//};
//
//
//void Test01()
//{
//	Person p1(18,160);
//	cout << "p1������Ϊ��" << p1.m_Age <<  "  p1�����Ϊ��" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2������Ϊ��" << p2.m_Age << "  p2�����Ϊ��" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	Test01();
//
//	system("pause");
//	return 0;
//}


////��ʼ���б�C++�ṩ�˳�ʼ���б��﷨��������ʼ������  �﷨�����캯��():����1(ֵ1)������2(ֵ2)...{}
//
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "PersonĬ�Ϲ��캯��" << endl;
//	//}
//
//	////��ͳ��ʽ��ʼ��
//	//Person(int a,int b ,int c)
//	//{
//	//	cout << "Person�вι��캯��" << endl;
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//�б��ʼ������
//	Person(int a,int b,int c) :m_A(a), m_B(b), m_C(c)
//	{
//		cout << "Person�вι��캯��" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person�������캯��" << endl;
//
//	}
//	
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//	
//
//	int m_A;
//	int m_B;
//	int m_C;
//
//};
//
//void Test01()
//{
//	Person p(10,20,30);
//	cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << "  m_C= " << p.m_C << endl;
//}


////C++����ĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ�����Ա
//
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		cout << "Phone�вι��캯��" << endl;
//		m_PName = name;
//	}
//
//	~Phone()
//	{
//		cout << "Phone��������" << endl;
//	}
//	//�ֻ�Ʒ������
//	string m_PName;
//};
//
//class Person
//{
//public:
//	//Phone m_Phone = pname  ��ʽת����
//	Person(string name,string pname):m_Name(name),m_Phone(pname)
//	{
//		cout << "Person�вι��캯��" << endl;
//	}
//	/*Person(class a)
//	{
//		cout << "Person�вι��캯��" << endl;
//		m_Age = age;
//	}
//	Person(const A& p)
//	{
//		cout << "Person�������캯��" << endl;
//		m_Age = p.m_Age;
//	}*/
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//
//
////��������Ķ�����Ϊ�����Ա������ʱ���ȹ���������ڹ�������  ����˳���빹���෴
//void Test01()
//{
//	Person p("����", "ƻ��");
//	cout << p.m_Name << "����" << p.m_Phone.m_PName << endl;
//}
//
//int main()
//{
//	Test01();
//
//	system("pause");
//	return 0;
//}




//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ�۸�ؼ���static����֮Ϊ��̬��Ա
//��̬��Ա��Ϊ����̬��Ա����(���ж�����ͬһ�����ݣ��ڱ���׶η����ڴ棬�������� �����ʼ��)
//��̬��Ա����(���ж�����ͬһ����������̬��Ա����ֻ�ܷ��ʾ�̬��Ա����)


//class Person
//{
//public:
//	//���Զ��󶼹���ͬһ������
//	static int m_A;
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
//private:
//	static int m_B;
//
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
//void Test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//	Person p2;
//	p.m_A = 200;
//	cout << p.m_A << endl;
//}
//
//void Test02()
//{
//	//��̬��Ա������������ĳһ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա�������ʷ�ʽ��1.ͨ��������з���  
//	Person p;
//	cout << p.m_A << endl;
//
//	//2.ͨ���������з���
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl;������ʲ���˽�о�̬��Ա����
//}


class Person
{
public:
	static void Func()
	{
		m_A = 200;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 400;  ��̬��Ա���������Է��ʷǾ�̬��Ա����,�޷����ֵ������ĸ�m_B������
		cout << "static void Func����" << endl;
	}

	static int m_A;
	int m_B;
private:
	static void Func2()
	{
		cout << "static void Func2����" << endl;
	}
};

int Person::m_A = 100;


void Test01()
{
	//1.ͨ���������
	Person p;
	p.Func();
	//2.ͨ����������
	Person::Func();
}

int main()
{
	Test01();
	//Test02();

	system("pause");
	return 0;
}