#include <iostream>
using namespace std;
#include<string>
#include "Class_Point.h"

////��װ��C++����������������֮һ
////��װ�����壺�����Ժ���Ϊ��Ϊһ�����壬���������е����񣬽����Ժ���Ϊ����Ȩ�޿���
////��װ����һ����������ʱ�����Ժ���Ϊд��һ���������
////�﷨��class ����(����Ȩ�ޣ�����/��Ϊ)  ���е����Ժ���Ϊͳһ��Ϊ��Ա
//const double PI = 3.14;
//
//class Circle
//{
//	//����Ȩ��
//public:
//	//����
//	int m_R;
//
//	//��Ϊ  - ͨ��ʹ��һ������
//	double calculateZC()
//	{
//		return 2 * PI * m_R;
//	}
//}; 
//
////���һ��ѧ����������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾ������ѧ��
//class Student
//{
//public:
//	//����
//	int m_Id;
//	string m_Name;
//
//	//��Ϊ
//	void ShowMessage()
//	{
//		cout << "ѧ������Ϊ��" << m_Name << "  ѧ��IDΪ��" << m_Id << endl;
//	}
//
//	//��������ֵ
//	void SetMessage(string name,int number)
//	{
//		m_Name = name;
//		m_Id = number;
//	}
//};
//
//
//int main()
//{
//	////ͨ��Բ�� ���������Բ
//	////ʵ���� (ͨ��һ���� ����һ������Ĺ���)
//	//Circle c1;
//
//	////��Բ��������Խ��и�ֵ����
//	//c1.m_R = 4;
//
//	//cout << "Բ���ܳ�Ϊ = " << c1.calculateZC() << endl;
//
//	//����һ�������ѧ��
//	Student s1;
//	s1.SetMessage("����",123000123);
//	s1.ShowMessage();
//
//	Student s2;
//	s2.SetMessage("����", 123000124);
//	s2.ShowMessage();
//
//
//	system("pause");
//	return 0;
//}


////��װ��������������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
////����Ȩ�������֣�public ����Ȩ��(������Է���)   protected ����Ȩ��(���ⲻ���Է���)   private ˽��Ȩ��(���ⲻ���Է���)
//
//
//class Person
//{
//public:
//	string m_Name;
//protected:
//	string m_Car;
//private:
//	int m_Password;
//
//public:
//	void Func()
//	{
//		m_Name = "����";
//		m_Car = "������";
//		m_Password = 123456;
//	}
//
//};
//
//
//int main()
//{
//	Person p1;
//
//	p1.Func();
//	cout << p1.m_Name << endl;
//
//	system("pause");
//	return 0;
//}


////c++��struct��classΨһ��������Ĭ�ϵķ���Ȩ�޲�ͬ
////����structĬ��Ȩ��Ϊ������ classĬ��Ȩ��Ϊ˽��
//
//class C1
//{
//	int m_A;
//};
//
//struct C2
//{
//	int m_A;
//};
//
//int main()
//{
//	C1 c1;
//	C2 c2;
//
//	c1.m_A = 10;
//	c2.m_A = 10;
//	system("pause");
//	return 0;
//}


////��Ա��������Ϊ˽��
////�ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��  �ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
//
//
//class  Person
//{
//public:
//
//	void SetName(string name)
//	{
//		m_Name = name;
//	}
//	string getname()
//	{
//		return m_Name;
//	}
//
//	void SetAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			cout << "�����������󣬸���ʧ��" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	int getage()
//	{
//		return m_Age;
//	}
//
//	void SetIdol(string idol)
//	{
//		m_Idol = idol;
//	}
//
//private:
//	string m_Name;   //���� �ɶ���д
//
//	int m_Age = 18;   //���� ֻ��  Ҳ����д �����������0��150֮�䣩
//
//	string m_Idol;  //ż�� ֻд
//
//};
//
//
//int main()
//{
//	Person p1;
//
//	p1.SetName("����");
//	cout << "����Ϊ��" << p1.getname() << endl;
//
//	p1.SetIdol("����");
//	p1.SetAge(199);
//	cout << "����Ϊ��" << p1.getage() << endl;
//
//
//	system("pause");
//	return 0;
//}


//class Cube
//{
//public:
//	void SetHigh(int high)
//	{
//		m_H = high;
//	}
//
//	int getHigh()
//	{
//		return m_H;
//	}
//
//	void SetLength(int length)
//	{
//		m_L = length;
//	}
//
//	int getLength()
//	{
//		return m_L;
//	}
//
//	void SetWidth(int width)
//	{
//		m_W = width;
//	}
//
//	int getWidth()
//	{
//		return m_W;
//	}
//
//	int CalS(int m_H, int m_W, int m_L)
//	{
//		return (m_H * m_W * 2 + m_H * m_L * 2 + m_W * m_L * 2);
//	}
//
//	int CalV(int m_H, int m_W, int m_L)
//	{
//		return m_H * m_W * m_L;
//	}
//
//	//���ó�Ա�����ж������������Ƿ����
//	bool isSameByClass(Cube &c)
//	{
//		if (m_L == c.getLength() && m_W == c.getWidth() && m_H == c.getHigh())
//			return true;
//		else
//			return false;
//	}
//
//private:
//	int m_W;
//	int m_H;
//	int m_L;
//};
//
//
////����ȫ�ֺ������ж������������Ƿ����
//bool isSame(Cube &c1, Cube &c2)
//{
//	if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHigh() == c2.getHigh())
//		return true;
//	else
//		return false;
//}
//
//
//int main()
//{
//	Cube c1;
//	c1.SetHigh(10);
//	c1.SetLength(12);
//	c1.SetWidth(14);
//
//	int H = c1.getHigh();
//	int L = c1.getLength();
//	int W = c1.getWidth();
//	cout << "�������Ϊ��" << c1.getHigh() << endl;
//	cout << "�����峤Ϊ��" << c1.getLength() << endl;
//	cout << "�������Ϊ��" << c1.getWidth() << endl;
//
//	cout << "����������Ϊ��" << c1.CalS(H, W, L) << endl;
//	cout << "����������Ϊ��" << c1.CalV(H, W, L) << endl;
//
//	Cube c2;
//	c2.SetHigh(10);
//	c2.SetLength(12);
//	c2.SetWidth(14);
//
//	bool ret = isSame(c1, c2);
//
//	if (ret)
//		cout << "c1��c2���" << endl;
//	else
//		cout << "c1��c2�����" << endl;
//
//
//	//���ó�Ա�����ж�
//	bool ret2 = c1.isSameByClass(c2);
//
//	if (ret2)
//		cout << "c1��c2���" << endl;
//	else
//		cout << "c1��c2�����" << endl;
//	system("pause");
//	return 0;
//}






////�жϵ���Բ�Ĺ�ϵ
//void isInCircle(Circle& c, Point& p)
//{
//	int ret = (p.getX() - c.GetCenter().getX()) * (p.getX() - c.GetCenter().getX())
//		+ (p.getY() - c.GetCenter().getY()) * (p.getY() - c.GetCenter().getY());
//
//	int ret2 = c.getR() * c.getR();
//
//	if (ret > ret2)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (ret == ret2)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//
//
//int main()
//{
//	Point p;
//	Point p2;
//	Circle c;
//	p.SetX(10);
//	p.SetY(10);
//	p2.SetX(0);
//	p2.SetY(0);
//
//	c.SetCenter(p2);
//	c.SetR(5);
//
//	isInCircle(c, p);
//
//	c.isInCircle(p);
//
//	system("pause");
//	return 0;
//}


////���캯������Ҫ�������ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ�����캯���ɱ������Զ����ã������ֶ�����  ����(){}
////������������Ҫ�������ڶ�������ǰϵͳ�Զ����ã�ִ��һЩ������  ~����(){}
//
//class Person
//{
//public:
//	//1.1���캯��
//	Person()
//	{
//		cout << "Person���캯���ĵ���" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person���������ĵ���" << endl;
//	}
//};
//
//
//void Test01()
//{
//	Person p;
//
//}
//
//int main()
//{
//	Test01();
//
//	//��main���������δ���ͷţ�����ֻ�й���û������
//	Person p2;
//
//	system("pause");
//	return 0;
//}



//���캯���ķ��༰����
//���ַ��෽ʽ����������Ϊ �вι�����޲ι���  �����ͷ�Ϊ ��ͨ����Ϳ�������
//���ֵ��÷�ʽ�����ŷ� ��ʾ�� ��ʽת����

//�޲ι���
class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯������" << endl;
	}


	//�������캯��
	Person(const Person &p)
	{
		//������������ϵ��������Կ�����������
		age = p.age;
		cout << "Person�Ŀ������캯������" << endl;
	}

	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int age;
};


void Test()
{
	////���ŷ�
	//Person p;//Ĭ�Ϲ��캯������
	//Person p2(10); //�вι��캯������
	//Person p3(p2);


	////ע������  ����Ĭ�Ϲ��캯����ʱ��Ҫ��()
	////��Ϊ����������Ϊ��һ������������,������Ϊ�ڴ�������
	//cout << "p2������Ϊ�� " << p2.age << endl;
	//cout << "p3������Ϊ�� " << p3.age << endl;

	////��ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);

	////Person(10);//��������  �ص㣺��ǰ��ִ�н�����ϵͳ������������������

	////cout << "aaa" << endl;

	////ע������2 ��Ҫ���ÿ������캯����ʼ����������
	//Person(p3);//��ʾ�ض��� ����������ΪPerson(p3) == Person p3  ����Ϊ�Ƕ�������


	//��ʽת����
	Person p4 = 10;//�൱�� Person p3 = Person(10)
	Person p5 = p4;
}


int main()
{
	Test();

	system("pause");
	return 0;
}
