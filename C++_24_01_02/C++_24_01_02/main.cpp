#include <iostream>
using namespace std;

//C++����ģ�ͺ�thisָ��
//��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢��ֻ�зǾ�̬��Ա������������Ķ�����


//class Person
//{
//public:
//	int m_A;//�Ǿ�̬��Ա����,������Ķ�����
//	static int m_B;//��̬��Ա����,��������Ķ�����
//
//	void func()//�Ǿ�̬��Ա����,��������Ķ�����
//	{
//
//	}
//
//	static void Func2()//��̬��Ա����,��������Ķ�����
//	{
//
//	}
//};
//
//int Person::m_B = 100;
//
//void Test01()
//{
//	Person p;
//	cout << sizeof(p) << endl;//�ն���ռ���ڴ�ռ�λ��һ���ֽ�
//	//C++���������ÿ���ն������һ���ֽڵĿռ䣬Ϊ�����ֿն���ռ�ڴ��λ��
//	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
//}
//
//
//void Test02()
//{
//	Person p;
//	cout << sizeof(p) << endl;
//}


////thisָ��ָ�򱻵��õĳ�Ա���������Ķ���,thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
////thisָ����;��1�����βκͳ�Ա����ͬ��ʱ��������thisָ�������� 2������ķǾ�̬��Ա�����з��ض�����������return *this
//
//class Person
//{
//public:
//	Person(int m_Age)
//	{
//		this->m_Age = m_Age;
//	}
//	//���Ҫ���ر��壬��Ҫ�����õķ�ʽ���з���.�����ֵ�ķ�ʽ���أ��򴴽��˸��µĶ���
//	Person& PersonAddAge(Person &p)
//	{
//		this->m_Age += p.m_Age;
//		//this��ָ��p2��ָ�룬��*thisָ��ľ���p2���������
//		return *this;
//	}
//	int m_Age;
//};
//
//void Test01()
//{
//	Person p1(10);
//	cout << "p1������Ϊ��" << p1.m_Age << endl;
//}
//
//void Test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2����Ϊ��" << p2.m_Age << endl;
//}

////��ָ����ʳ�Ա������C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����Ҫע����û���õ�thisָ�롣����õ���Ҫ�����ж�
//
//
//class Person
//{
//public:
//	void ShowClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//	
//	void ShowPersonAge()
//	{
//		//����ԭ������Ϊ�����ָ��ΪNULL
//		if (this == NULL)
//			return;
//		cout << "age = " << m_Age << endl;
//	}
//	int m_Age;
//};
//
//void Test01()
//{
//	Person* p = NULL;
//	p->ShowClassName();
//	p->ShowPersonAge();
//}

////const���γ�Ա����
////��Ա�������const���Ϊ������ �������ڲ������޸ĳ�Ա���� ��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
////��������������ǰ��const�Ƹö���Ϊ������ ������ֻ�ܵ��ó�����
//
//class Person
//{
//public:
//	//thisָ��ı�����ָ�볣����ָ���ָ���ǲ������޸ĵ�
//	//�ڳ�Ա�����������const���ε���thisָ�룬��ָ��ָ���ֵҲ�����޸�
//	void ShowPerson() const
//	{
//		//m_A = 100;
//		//this = NULL;  //thisָ�벻�����޸�ָ���ָ��
//		this->m_B = 100;
//	}
//
//	void Func()
//	{
//
//	}
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ�������Ҳ�����޸�
//};
//
//void Test01()
//{
//	Person p;
//
//	p.ShowPerson();
//}
//
//void Test02()
//{
//	const Person p;//�ڶ���ǰ��const����Ϊ������
//	//p.m_A = 100;
//	p.m_B = 400;//m_B ������ֵ���ڳ�������Ҳ�ǿ����޸ĵ�
//
//	//������ֻ�ܵ��ó�����
//	p.ShowPerson();
//	//p.Func();�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
//
//}


//��Ԫ����һ������������ ������һ�����е�˽�г�Ա �ؼ���Ϊfriend
//��Ԫ������ʵ�֣�ȫ�ֺ�������Ԫ ������Ԫ ��Ա��������Ԫ

////ȫ�ֺ�������Ԫ
//class Building
//{
//	//GoodGayȫ�ֺ�����Building�����ѣ����Է���Building�ڵ�˽�г�Ա
//	friend void GoodGay(Building& building);
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//	string m_SittingRoom; // ����
//private:
//	string m_BedRoom;//����
//};
//
//void GoodGay(Building &building)
//{
//	cout << "�����ѵ�ȫ�ֺ������ڷ��ʣ�" << building.m_SittingRoom << endl;
//	cout << "�����ѵ�ȫ�ֺ������ڷ��ʣ�" << building.m_BedRoom << endl;
//}
//
//void Test01()
//{
//	Building build;
//	GoodGay(build);
//}

////������Ԫ
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//�ιۺ�������Building�е�����
//	Building* building;
//private:
//
//};
//
//class Building
//{
//	friend class GoodGay;
//public:
//	Building();
//	string m_SittingRoom; // ����
//private:
//	string m_BedRoom;//����
//};
//
//
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	//����һ��������Ķ���
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "�����������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "�����������ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//
//
//void Test01()
//{
//	GoodGay gg;
//	gg.visit();
//}


////��Ա��������Ԫ
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit(); //��visit�������Է���Building�е�˽�г�Ա
//	void visit2();//��visit���������Է���Building�е�˽�г�Ա
//
//	Building* building;
//};
//
//
//class Building
//{
//	friend void GoodGay::visit();//���߱����� GoodGay���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽������
//public:
//	Building();
//	string m_SittingRoom; // ����
//private:
//	string m_BedRoom;//����
//};
//
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()
//{
//	//����һ��������Ķ���
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit���ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "visit���ڷ��ʣ�" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "visit2���ڷ��ʣ�" << building->m_SittingRoom << endl;
//}
//
//
//void Test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}


////��������أ������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
////���������������ͣ�������֪���������
////�Ӻ���������أ�ʵ�������Զ�������������ӵ�����
//class Person
//{
//public:
//	Person()
//	{
//
//	}
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//
//	////��Ա����ʵ�� + �����������
//	//Person operator+(const Person& p)
//	//{
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//
//	int m_A;
//	int m_B;
//};
//
//
////ͨ��ȫ�ֺ���ʵ��
//Person operator+(Person p1, Person p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
////�������ذ汾
//Person operator+(Person &p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//void Test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 20;
//	Person p2;
//	p2.m_A = 30;
//	p2.m_B = 40;
//
//	Person p3 = p1 + p2;
//	//���������Ҳ���Է�����������
//	Person p3 = p1 + 10;//Person + int 
//
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}


////������������أ���������Զ�����������
////������������������Ԫ����ʵ������Զ�����������
//
//class Person
//{
//	friend ostream& operator<<(ostream& out, Person p);
//public:
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//	////��Ա����ʵ�ֲ��� p<<cout����������Ҫ��Ч��
//	//void operator<<(Person& p)
//	//{
//	//}
//private:
//	int m_A;
//	int m_B;
//};
//
////ֻ������ȫ�ֺ������������
//ostream& operator<<(ostream& out, Person p)  //���� operator<<(cout , p) �� cout << p
//{
//	out << "m_A = "<<p.m_A  << "  m_A = " << p.m_B << endl;
//	return out;
//}
//
//void Test01()
//{
//	Person p(10,10);
//
//	cout << p << endl;
//
//}


////������������أ�ͨ�����ص����������ʵ���Լ�����������
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//����ǰ��++�������
//	MyInteger& operator++() //����������Ϊ��һֱ��һ�����ݽ��е�������
//	{
//		m_Num++;
//		return *this;
//	}
//
//	//���غ���++�������  �����int�������ռλ����������������ǰ�úͺ��õ���
//	MyInteger operator++(int)//���÷��ص���һ���ֲ���������������ã�����������ֲ�����ᱻ�ͷţ����Է���ֵ
//	{
//		//�� ��¼��ǰ���
//		MyInteger temp = *this;
//		//�� ����
//		m_Num++;
//		//��¼�Ľ������
//		return temp;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num << endl;
//	return cout;
//}
//
//
//
//void Test01()
//{
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void Test02()
//{
//	MyInteger myint;
//	cout << (myint++)++ << endl;
//	cout << myint << endl;
//}


////��ֵ���������
////C++���������ٸ�һ�������4������ ���� ���� ���� ��ֵ����� operator=�������Խ���ֵ���� �������������ָ�������
////����ֵ����ʱҲ�������ǳ��������
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//				
//	}
//
//	Person& operator=(Person &p)
//	{
//		//�������ṩ����ǳ���� Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ��������
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//
//		//���ض�����
//		return *this;
//		
//	}
//	int* m_Age;
//};
//
//void Test01()
//{
//	Person p1(18);
//
//	Person p2(20);
//	Person p3(19);
//
//	p3 = p2 = p1;//��ֵ����
//
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p3.m_Age << endl;
//}


////��ϵ��������أ������������Զ������Ͷ�����жԱȲ���
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	//���� == ��
//	bool operator==(Person &p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//			return true;
//		else
//			return false;
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age)
//			return true;
//		else
//			return false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void Test01()
//{
//	Person p1("����", 18);
//	Person p2("����", 18);
//		
//	if (p1 == p2)
//	{
//		cout << "p1��p2����ȵ�" << endl;
//	}
//	else {
//		cout << "p1��p2�ǲ���ȵ�" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1��p2�ǲ���ȵ�" << endl;
//	}
//	else {
//		cout << "p1��p2����ȵ�" << endl;
//	}
//}


//�������������()���أ��������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º��� �º���û�й̶�д�����ǳ����
class MyPrint
{
public:

	//���غ������������
	void operator()(string test)
	{
		cout << test << endl;
	}
};

//�ӷ���
class Myadd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void Test01()
{
	MyPrint myPrint;
	myPrint("hello world");

	Myadd myadd;
	int ret = myadd(100, 200);
	cout << ret << endl;

	//������������  ͨ��������+()���Դ�������һ����������
	cout << Myadd()(100, 100) << endl;
}

int main()
{
	Test01();


	system("pause");
	return 0;
}