#include<iostream>
using namespace std;
#include"Mystring.h"
#include<stdexcept>

//��Ҫ����&& ||  ��������operator&&��operator||��ԭ���ǣ��޷��������������ʵ�����ò��������������塣
//���ð汾��&&��||���ȼ�����ߵı��ʽ���������ȫ�ܹ��������������������ұߵı��ʽ�ˣ������ܹ���֤����Ҫ

//[]()->������ֻ��ͨ����Ա������������
//<<��>>ֻ��ͨ��ȫ�ֺ��������Ԫ������������
//��Ҫ����&&��||����Ϊ�޷�ʵ�ֶ�·����

//void Test01()
//{
//	MyString str = "aaa";
//	cout << str << endl;
//
//	cout << "���str�ַ������¸�ֵ" << endl;
//
//	cin >> str;
//	cout << "str��ǰ����Ϊ��" << str << endl;
//
//	MyString str2(str);
//	cout << "str2��ǰ������Ϊ��" << str2 << endl;
//
//	cout << str2[0] << endl;
//
//	str[0] = 'w';
//
//
//	MyString str3 = " ";
//	str3 = str;
//
//	MyString str4 = "def";
//	MyString str5 = "abc";
//	MyString str6 = str3 + str4;
//}

//class Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//
//	virtual void eat()
//	{
//		cout << "�����ڳԷ�" << endl;
//	}
//};
//
////�����и��ӹ�ϵ�������࣬C++���Բ�ͨ������ǿת
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//
//	virtual void eat()
//	{
//		cout << "Сè�ڳԷ�" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	virtual void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//
//	virtual void eat()
//	{
//		cout << "С���ڳԷ�" << endl;
//	}
//};
//
//void DoSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
////void Test01()
////{
////	Cat cat;
////	DoSpeak(cat);
////}
//
//void Test02()
//{
//	Animal* animal = new Cat;
//	//animal->speak();
//	//*(int*)*(int*)animal speak�����ĵ�ַ
//	((void(*)())(*(int*)*(int*)animal))();
//}


//��̬ת�� static_cast �������νṹ�л���(����)��������(����)֮��ָ������õ�ת��
//��������ת��(���������ָ�������ת���ɻ����ʾ)�ǰ�ȫ��
//��������ת��(�ѻ���ָ�������ת�����������ʾ)ʱ������û�ж�̬���ͼ�飬�����ǲ���ȫ��

//void Test01()
//{
//	//������������
//	char a = 'a';
//
//	//static_cast<Ŀ������>(ԭ����)
//	double d = static_cast<double>(a);
//
//	cout << d << endl;
//}
//
//class Base
//{
//public:
//	virtual void func() {};
//};
//
//class Son :public Base
//{
//public:
//	virtual void func() {};
//};
//
//class Other
//{
//
//};
//
//void Test02()
//{
//	//�Զ�����������
//	Base* base = NULL;
//	Son* son = NULL;
//
//	//baseתΪSon  ��������ת�� ����ȫ
//	Son* son2 = static_cast<Son*>(base);
//
//	//son תΪ base ��������ת��
//	Base* base2 = static_cast<Base*>(son);
//
//	//base תΪ orther
//	//û�и��ӹ�ϵ����������֮�����޷�ת���ɹ���
//	Other* other = static_cast<Other*>(base);
//
//}


//��̬����ת��(dynamic_cast)  ��Ҫ�������μ������ת��������ת��
//�����μ��������ת��ʱ��dynamic_cast��static_cast��Ч����һ���� 
//�ڽ�������ת��ʱ��dynamic_cast�������ͼ��Ĺ��ܣ���static_cast����ȫ
//void Test01()
//{
//	//������������  ������������������֮���ת��
//	//char c = 'c';
//	//double d = dynamic_cast<double>(c);
//
//	//�Զ�����������
//	Base* base = NULL;
//	Son* son = NULL;
//
//	//baseתΪSon*���ͣ�����ȫ  ת��ʧ��
//	//Son* son2 = dynamic_cast<Son*>(base);
//
//	//son תΪbase*  ��ȫ
//	Base* base2 = dynamic_cast<Base*>(son);
//
//	//baseתΪother* ʧ��
//	//Other* other = dynamic_cast<Other*>(base);
//
//	//���������̬������֮��ת�����ǰ�ȫ��
//	Base* base3 = new Son;
//	//��base3ת��ΪSon*
//	Son* son = dynamic_cast<Son*>(base3);
//}


//����ת��(const_cast) ������������޸����͵�const����
//����ָ�뱻ת���ɷǳ���ָ�룬������Ȼָ��ԭ���Ķ���
//�������ñ�ת���ɷǳ������ã�������Ȼָ��ԭ���Ķ���
//����ֱ�ӶԷ�ָ��ͷ����õı���ʹ��const_cast������ȥֱ���Ƴ�����const
//void Test01()
//{
//	//ָ��֮���ת��
//	const int* p = NULL;
//	//��const int* תΪint*
//	int* p2 = const_cast<int*>(p);
//
//	//��p2תΪconst int*
//	const int* p3 = const_cast<const int*>(p2);
//
//	//����֮���ת��
//	const int a = 10;
//	const int& aRef = a;
//	int& aRef2 = const_cast<int&>(aRef);
//
//	//�����ԶԷ�ָ��������������cosnt_castת��
//	//int b = const_cast<int>(a);
//}


//���½���ת��(reinterpret_cast)�������ȫ��һ��ת�����ƣ����п��ܳ�����
//��Ҫ���ڽ�һ�����ݴ�һ������ת��Ϊ��һ�����ͣ������Խ�һ��ָ��ת����һ��������Ҳ���Խ�һ������ת����һ��ָ��
//void Test01()
//{
//	//int a = 10;
//	//int* p = reinterpret_cast<int*>(a);
//
//	//��base*תΪother*
//	Base* base = NULL;
//	Other* other = reinterpret_cast<Other*>(base);
//}

//class MyException
//{
//public:
//	void PrintError()
//	{
//		cout << "���Լ����쳣��Ĵ���" << endl;
//	}
//};
//
//class Person
//{
//public:
//	Person(string name)
//	{
//		this->m_Name = name;
//		cout <<this->m_Name<< "��Ĭ�Ϲ��캯��" << endl;
//	}
//
//	~Person()
//	{
//		cout << this->m_Name << "����������" << endl;
//	}
//
//	string m_Name;
//};
//
////�쳣�Ļ����﷨
//int MyDivide(int a,int b)
//{
//	if (b == 0)
//	{
//		//return -1;//c���Դ����쳣ȱ�����ڷ��ص�ֵû��һ��ͳһ��, ����ֵ�������쳣�Ľ��Ҳ��������ȷ�Ľ��
//		//�׳��쳣
//		//throw - 1;
//		//throw 3.14;
//		//ջ����  ��try����鿪ʼ����throw�׳��쳣ǰ������ջ�ϵĶ��󶼱��ͷŵ����ͷŵ�˳��͹����˳�����෴��
//		//������̳�Ϊջ����
//		Person p1("str1");
//		Person p2("str2");
//		cout << "aaa" << endl;
//
//
//		throw MyException();//�׳�һ��MyException
//	}
//	return a / b;
//}
//
//void Test01()
//{
//	int a = 10;
//	int b = 0;
//
//	//����ִ��һ�ο��ܳ����쳣�Ĵ���
//	try
//	{
//		int ret = MyDivide(a, b);
//		cout << "ret�Ľ��Ϊ��" << ret << endl;
//	}
//	catch (int)//�����쳣
//	{
//		cout << "int���͵��쳣����" << endl;
//	}
//	catch (double)//�����쳣
//	{
//		//��������double���봦������쳣������������׳�����쳣
//		cout << "double���͵��쳣����" << endl;
//		throw;
//	}
//	catch (MyException e)//�����쳣
//	{
//		e.PrintError();
//	}
//	catch (...)//�����쳣
//	{
//		cout << "�������͵��쳣����" << endl;
//	}
//	
//
//}
//
//int main()
//{
//	try
//	{
//		Test01();
//	}
//	catch (int)//�쳣����Ҫ���˴������û���κεĴ���������Զ�����һ��terminate�������ó����жϵ�
//	{
//		cout << "main�����µ�int���͵��쳣����" << endl;
//	}
//	catch (double)//�����쳣
//	{
//		
//		cout << "main�����µ�double���͵��쳣����" << endl;
//	}
//	catch (...)//�����쳣
//	{
//		cout << "main�����µ��������͵��쳣����" << endl;
//	}
//	//Test01();
//
//	system("pause");
//	return 0;
//}

////�쳣�Ľӿ�����
//void func()throw(double)//ֻ����func���׳�double���͵��쳣
//{
//	throw 1;
//}
//
//void Test01()
//{
//	try
//	{
//		func();
//	}
//	catch (double)
//	{
//		cout << "double���͵��쳣����" << endl;
//	}
//	catch (int)
//	{
//		cout << "int���͵��쳣����" << endl;
//	}
//}

////�쳣��������������
//class MyException
//{
//public:
//	MyException()
//	{
//		cout << "MyException���캯������" << endl;
//	}
//
//	MyException(const MyException& e)
//	{
//		cout << "MyException�������캯������" << endl;
//	}
//
//	~MyException()
//	{
//		cout << "MyException������������" << endl;
//	}
//};
//
//void DoWork()
//{
//	//throw MyException();
//	//throw &MyException();
//	throw new MyException();
//}
//
//void Test01()
//{
//	try
//	{
//		DoWork();
//	}
//	//MyException���÷�ʽ���� ���������ַ�ʽ��ʡ����
//	//MyException* e��ʽ���գ� �׳�&MyException()�������󣬶����ͷŵ����������ٲ���e��
//	//MyException* e��ʽ���գ� �׳�new MyException()�����������Ķ�����Ҫ�ֶ��ͷ� delete e
//	catch (MyException* e)//MyException����ÿ�������
//	{
//		cout << "MyException���쳣����" << endl;
//		delete e;
//	}
//}

////�쳣�Ķ�̬
////�쳣����
//class BaseException
//{
//public:
//	virtual void PrintError() = 0;
//};
//
////��ָ���쳣
//class NULLPointException :public BaseException
//{
//public:
//	virtual void PrintError()
//	{
//		cout << "��ָ���쳣" << endl;
//	}
//};
//
////Խ���쳣
//class OutOfRangeException :public BaseException
//{
//public:
//	virtual void PrintError()
//	{
//		cout << "Խ���쳣" << endl;
//	}
//};
//
//void DoWork()
//{
//	//throw NULLPointException();
//	throw OutOfRangeException();
//}
//
//void Test01()
//{
//	try
//	{
//		DoWork();
//	}
//	catch (BaseException& e)
//	{
//		e.PrintError();
//	}
//}

////ϵͳ�ı�׼�쳣 ��Ҫ����ͷ�ļ�#include<stdexcept>  ���е��쳣�඼��һ��what()����������const char*����
//class Person
//{
//public:
//	Person(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			//����Խ����
//			//throw out_of_range("���������0-150֮��");
//			throw length_error("���������0-150֮��");
//		}
//		this->m_Age = age;
//	}
//	int m_Age;
//};
//
//void Test01()
//{
//	try
//	{
//		Person p1(151);
//	}
//	catch(exception&c)
//	{
//		cout << c.what() << endl;
//	}
//}


//��д�Լ����쳣��
class MyOutOfRange :public exception
{
public:
	MyOutOfRange(char* ErrorInfo)
	{
		//��char*תΪString
		this->m_ErrorInfo = string(ErrorInfo);
	}

	MyOutOfRange(string ErrorInfo)
	{
		//��char*תΪString
		this->m_ErrorInfo = ErrorInfo;
	}

	virtual ~MyOutOfRange() noexcept
	{
		
	}

	char const* what() const
	{
		//��ν�stringתΪconst char*
		//.c_str()��stringתΪconst char*
		return this->m_ErrorInfo.c_str();
	}

	//�����û������ַ���
	string m_ErrorInfo;
};

class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age>150)
		{
			//����Խ����
			//throw out_of_range("���������0-150֮��");
			//throw length_error("���������0-150֮��");
			throw MyOutOfRange("���Լ����쳣�����������0-150֮��");
			//throw MyOutOfRange(string("���Լ����쳣�����������0-150֮��"));
		}
		this->m_Age = age;
	}
	int m_Age;
};

void Test01()
{
	try
	{
		Person p1(151);
	}
	catch(exception&c)
	{
		cout << c.what() << endl;
	}
}

int main()
{
	Test01();

	system("pause");
	return 0;
}