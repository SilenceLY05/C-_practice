#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>


//

//class MyString
//{
//public:
//	MyString(char* str)
//	{
//		m_Str = str;
//	}
//
//	//explicit ��ֹ��ʽ����ת����ʽ����ʼ������
//	explicit MyString(int len)
//	{
//		m_Len = len;
//	}
//	int m_Len;
//	char* m_Str;
//};
//
//void Test01()
//{
//	MyString str = "abc";
//	MyString str2 = 10;//�е��û���Ϊ �����ַ�������10 ���е���Ϊ���ַ���Ϊ10
//}


//��̬��Ա��������һ�����У�����һ����Ա��������Ϊstatic�����ֳ�Ա��Ϊ��̬��Ա��������һ������ݳ�Ա��ͬ��
//���۽����˶��ٸ�����,��ֻ��һ����̬���ݵĿ�������̬��Ա����������ĳ���࣬���ж�����
//��̬��Ա�������������������������ⶨ��
//��̬���ݳ�Ա������ĳ��������Ϊ�������ռ��в�������̬��Ա��ռ�ռ䣬��̬���ݳ�Ա����ͨ���������߶�����������
//class Person
//{
//public:
//	static int m_A;
//};
//
//int Person:: m_A = 10;//��̬��Ա���������ʼ��
//
//void Test01()
//{
//	Person p1;
//	cout << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 20;
//
//	cout << p2.m_A << endl;
//	cout << p1.m_A << endl;
//
//
//	cout << Person::m_A << endl;
//}


////����ģʽ��һ������ֻ��һ��ʵ������ 
//class ChairMan
//{
//public:
//	//������ϯ��ָ��
//	static ChairMan* getInstance()
//	{
//		return SingleMan;
//	}
//private:
//	//�����캯��˽�л��������Դ����������
//	ChairMan() 
//	{
//		cout << "ChairManĬ�Ϲ��캯���ĵ���" << endl;
//	}
//
//	//�����ǹ���ģ�����ֻ��Ҫ�õ�һ����ϯ�Ķ���ָ�뼴��
//	static ChairMan* SingleMan;
//
//	//���������캯��˽�л�
//	ChairMan(const ChairMan& c)
//	{
//
//	}
//
//};
//
////��̬��Ա�����ڱ���׶ξ��Ѿ������ڴ���
//ChairMan* ChairMan::SingleMan = new ChairMan;//Ψһ����ϯ���ָ��
//
//void Test01()
//{
//	//ChairMan c1;
//	//ChairMan c2;
//
//	//ChairMan* c3 = new ChairMan;
//
//	//ChairMan* c1 = ChairMan::SingleMan;
//	//ChairMan* c2 = ChairMan::SingleMan;
//	ChairMan* c1 = ChairMan::getInstance();
//	ChairMan* c2 = ChairMan::getInstance();
//
//	//if (c1 == c2)
//	//{
//	//	cout << "c1��c2ָ��ָ��ͬһ����ַ" << endl;
//	//}
//	//else
//	//{
//	//	cout << "c1��c2ָ��ָ��ͬ��ַ" << endl;
//	//}
//
//	//ChairMan::SingleMan = NULL;
//	//ChairMan* c3 = new ChairMan(*c1);//��������
//
//	
//}

//class Printer
//{
//public:
//	static Printer* getInstance()
//	{
//		return printer;
//	}
//
//	//��ӡ����
//	void printText(string text)
//	{
//		m_Count++;
//		cout << "��ӡ�����ݣ�" << text << endl;
//	}
//
//	int m_Count;
//private:
//	Printer()
//	{
//		this->m_Count = 0;
//	}
//
//	Printer(const Printer& p)
//	{
//
//	}
//
//	static Printer* printer;
//
//	
//};
//
//Printer* Printer::printer = new Printer;
//
//void Test01()
//{
//	Printer* p1 = Printer::getInstance();
//	p1->printText("��ְ����");
//	p1->printText("��ְ����");
//	p1->printText("��������");
//	p1->printText("�������");
//	cout << "��ӡ��ʹ�ô�����" << p1->m_Count << endl;
//
//	Printer* p2 = Printer::getInstance();
//	p1->printText("��������");
//	cout << "��ӡ��ʹ�ô�����" << p1->m_Count << endl;
//}

////ָ����������� - ����ָ��:�����й�new�����Ķ�����ͷ�
//class Person
//{
//public:
//	Person(int age)
//	{
//		cout << "�вι���" << endl;
//		this->m_Age = age;
//	}
//
//	void ShowAge()
//	{
//		cout << "����Ϊ��" << this->m_Age << endl;
//	}
//
//	~Person()
//	{
//		cout << "������������" << endl;
//	}
//
//private:
//	int m_Age;
//};
//
//class SmartPointer
//{
//public:
//	SmartPointer(Person* person)
//	{
//		cout << "SmartPointer���캯���ĵ���" << endl;
//		this->person = person;
//	}
//
//	//����ָ�������
//	Person* operator->()
//	{
//		return this->person;
//	}
//
//	Person& operator*()
//	{
//		return *(this->person);
//	}
//
//	~SmartPointer()
//	{
//		if (this->person != NULL)
//		{
//			cout << "SmartPointer���������ĵ���" << endl;
//			delete this->person;
//			this->person = NULL;
//		}
//	}
//private:
//	Person* person;
//};
//
//void Test01()
//{
//	Person* p = new Person(18);
//
//	//p->ShowAge();
//
//	//(*p).ShowAge();
//	SmartPointer sp = SmartPointer(new Person(18));
//	sp->ShowAge();//sp->���ص���Person* ����Ӧ����sp->->ShowAge()
//	(*sp).ShowAge();
//	//delete p;
//}
//class Person
//{
//public:
//	Person(const char* name, int age)
//	{
//		this->m_Name = new char[strlen(name) + 1];
//		strcpy(this->m_Name, name);
//
//		this->m_Age = age;
//	}
//
//	Person(const Person& p)
//	{
//		this->m_Name = new char[strlen(p.m_Name) + 1];
//		strcpy(this->m_Name, p.m_Name);
//
//		this->m_Age = p.m_Age;
//	}
//
//	//ϵͳ��Ĭ�ϸ�һ���ഴ���������� Ĭ�Ϲ��� ���� �������� operator
//	Person& operator=(const Person& p)
//	{
//		if (this->m_Name != NULL)
//		{
//			delete[] this->m_Name;
//			this->m_Name = NULL;
//		}
//		this->m_Name = new char[strlen(p.m_Name) + 1];
//		strcpy(this->m_Name, p.m_Name);
//		this->m_Age = p.m_Age;
//
//		return *this;
//	}
//
//
//	~Person()
//	{
//		if (this->m_Name != NULL)
//		{
//			delete[] this->m_Name;
//			this->m_Name  = NULL;
//		}
//	}
//
//	char* m_Name;
//	int m_Age;
//};
//
//void Test01()
//{
//	Person p1("Tom", 18);
//
//	Person p2("Jerry", 19);
//
//	p1 = p2;
//
//	cout << "p1������" << p1.m_Name << "  p1���䣺" << p1.m_Age << endl;
//	cout << "p2������" << p2.m_Name << "  p2���䣺" << p2.m_Age << endl;
//
//	Person p3(" ", 10);
//	p3 = p2 = p1;
//}

class Perosn
{
public:
	int operator[](int index)
	{
		return this->pAddress[index];
	}
};

void Test01()
{

}

int main()
{
	//cout << "main�����ĵ���" << endl;
	//int a = 10;
	//int b = 20;
	//int c;
	//c = a = b;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;
	Test01();

	system("pause");
	return 0;
}