#include <iostream>
using namespace std;


//�̳е��﷨��class ���� ���̳з�ʽ  ����  ����Ҳ��Ϊ������ ����Ҳ��Ϊ����

//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��python��c++...(���������б�)" << endl;
//	}
//
//	void content()
//	{
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
//
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��python��c++...(���������б�)" << endl;
//	}
//
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
//void Test01()
//{
//	cout << "Java������Ƶҳ�����£�" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "---------------------" << endl;
//
//	cout << "Python������Ƶҳ�����£�" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//}


////�̳�ʵ��ҳ��
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��python��c++...(���������б�)" << endl;
//	}
//
//};
//
////Java
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "JAVAѧ����Ƶ" << endl;
//	}
//};
//
////Python
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////Python
//class CPP : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//
//void Test01()
//{
//	Java ja;
//	Python py;
//	CPP cpp;
//	cout << "Java������Ƶҳ�����£�" << endl;
//	ja.header(); 
//}

////�̳з�ʽһ�������֣������̳� �����̳� ˽�м̳�
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////�����̳�
//class Son1 :public Base1
//{
//public:
//	void Func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�����ݵ������������ǹ���Ȩ��
//		m_B = 10;//�����еı���Ȩ�����ݵ������������Ǳ���Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�����ݵ�������������˽��Ȩ�� ���ʲ���
//	}
//};
//
//
////�����̳�
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2
//{
//public:
//	void Func()
//	{
//		m_A = 100;//�����еĹ���Ȩ�����ݵ������б�Ϊ����Ȩ��
//		m_B = 100;//�����еı���Ȩ�����ݵ������������Ǳ���Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�����ݵ�������������˽��Ȩ�� ���ʲ���
//	}
//};
//
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void Func()
//	{
//		m_A = 100;//�����еĹ���Ȩ�����ݵ������б�Ϊ˽��Ȩ��
//		m_B = 100;//�����еı���Ȩ�����ݵ�������������˽��Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�����ݵ�������������˽��Ȩ�� ���ʲ���
//	}
//};
//
//void Test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//��Son1�� m_B�Ǳ���Ȩ�� ������ʲ���
//}
//
//void Test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;//��Son2�У�m_A��Ϊ����Ȩ�ޣ����������ʲ���
//	//s2.m_B = 100;//��Son2�У�m_B����Ȩ�ޣ����������ʲ���
//}
//
//void Test03()
//{
//	Son3 s3;
//	//s3.m_A = 100;//��Son3�� ��Ϊ˽�г�Ա ������ʲ���
//	//s3.m_B = 100;//��Son3�� ��Ϊ˽�г�Ա ������ʲ���
//}
//
//class GrandSon3:public Son3
//{
//public:
//	void Func()
//	{
//		m_A = 100;
//		m_B = 100;
//	}
//}



////���ÿ�����Ա������ʾ���߲鿴����ģ�� ��ת�̷� F:  ��ת�ļ�·�� cd ����·����  �鿴����  cl /d1 reportSingleClassLayout���� �ļ���
////�̳��еĶ���ģ��
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;//˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ
//};
//
//class Son1 :public Base
//{
//public:
//	int m_D;
//};
//
//
//
//void Test01()
//{
//	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	//������˽�г�Ա�����Ǳ��������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���ȥ��
//	cout << "size of Son1:" << sizeof(Son1) << endl;
//}

////�̳��й��������  ����̳и���󣬵������������Ҳ����ø���Ĺ��캯�� ���������Ĺ��������˳��˭��˭��
////�ȵ��ø��๹�� �ٵ������๹��  ���ٵ�ʱ���ȵ������������ �ڵ��ø��������
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base���캯����" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base����������" << endl;
//	}
//};
//
//class Son1 : public Base
//{
//public:
//	Son1()
//	{
//		cout << "Son1���캯����" << endl;
//	}
//
//	~Son1()
//	{
//		cout << "Son1����������" << endl;
//	}
//};
//
//void Test01()
//{
//	Son1 s1;
//
//}

////�̳�ͬ����Ա����ʽ����������ͬ����Ա ֱ�ӷ��ʼ��� ���ʸ���ͬ����Ա ��Ҫ��������
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void Func()
//	{
//		cout << "Base - Func()����" << endl;
//	}
//
//	void Func(int a)
//	{
//		m_A = a;
//		cout << "Son1 - Func()����,m_A = " << m_A << endl;
//	}
//
//	int m_A;
//};
//
//
//class Son1 :public Base
//{
//public:
//	Son1()
//	{
//		m_A = 200;
//	}
//
//	void Func()
//	{
//		cout << "Son1 - Func()����" << endl;
//	}
//
//
//
//	int m_A;
//};
//
////ͬ����Ա���Դ���ʽ
//void Test01()
//{
//	Son1 s1;
//	cout << "Son1�µ�m_A = "<<s1.m_A << endl;
//	cout << "Base�µ�m_A = " << s1.Base::m_A << endl;
//}
//
////ͬ����Ա��������ʽ
//void Test02()
//{
//	Son1 s1;
//	s1.Func();
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
//	s1.Base::Func(); 
//	s1.Base::Func(500);
//}

////��̬��Ա�ͷǾ�̬��Ա����ͬ��������ʽ��һֱ ��������ͬ����Աֱ�ӷ��� ���ʸ���ͬ����Ա��������
//class Base
//{
//public:
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//	static int m_A;
//};
//int Base::m_A = 100;
//
//class Son1 :public Base
//{
//public:
//	static void func()
//	{
//		cout << "Son1 - static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Son1 - static void func(int a)" << endl;
//	}
//	static int m_A;
//};
//
//int Son1::m_A = 200;
//
//void Test01()
//{
//	Son1 s1;
//	s1.func();
//	s1.func(100);
//	s1.Base::func();
//	s1.Base::func(100);
//	cout << s1.m_A << endl;
//	cout << s1.Base::m_A << endl;
//	cout << Son1::Base::m_A << endl;
//}


////��̳��﷨ C++����һ����̳ж���� class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2...
////��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������  ʵ�ʿ����в������ö�̳�
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	int m_A;
//};
//
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//	int m_A;
//};
//
//class Son1 :public Base, public Base2
//{
//public:
//	Son1()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//	int m_C;
//	int m_D;
//};
//
//void Test01()
//{
//	Son1 s1;
//	cout << "size of Son = " << sizeof(s1) << endl;
//	cout << "m_A = " << s1.Base::m_A << endl;
//	cout << "m_A = " << s1.Base2::m_A << endl;
//}

////���μ̳У�����������̳�ͬһ�����࣬����ĳ����ͬ�¼̳������������� ���ּ̳б���Ϊ���μ̳л�����ʯ�̳�
////������
//class Animal
//{
//public:
//	int m_Age;
//};
//
////������̳п��Խ�����μ̳е����� �ڼ̳�֮ǰ����virtual��Ϊ��̳� Animal���Ϊ�����
////vbptr v-virtual  b-base  ptr - pointer  ָ��vbtable
////����
//class Sheep :virtual public Animal
//{
//
//};
//
////����
//class Tuo :virtual public Animal
//{
//
//};
////������
//class SheepTuo :public Sheep, public Tuo
//{
//
//};
//
//void Test01()
//{
//	SheepTuo st;
//	st.Sheep::m_Age = 18;
//	st.Tuo::m_Age = 28;
//	//���������μ̳е�ʱ������������ӵ����ͬ�����ݣ���Ҫ��������������
//	cout << st.Sheep::m_Age << endl;
//	cout << st.Tuo::m_Age << endl;
//	cout << st.m_Age << endl;
//	//�������ֻҪ��һ�ݾͿ��ԣ����μ̳е������������ݣ���Դ�˷�
//}

//��̬��Ϊ����  ��̬��̬���������غ�������������ھ�̬��̬�����ú�����  ��̬��̬����������麯��ʵ������ʱ��̬
//��̬��̬�Ͷ�̬��̬�����𣺾�̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
//��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ

//��̬��̬����������1.�м̳й�ϵ  2.������д������麯��
//��̬��̬ʹ�ã������ָ�����������ָ������Ķ���

//class Aniaml
//{
//public:
//	virtual void speak() //�麯��
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat : public Aniaml
//{
//public:
//	//��д����������ֵ���� ������ �����б� ��ȫ��ͬ
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog : public Aniaml
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
////ִ��˵������ ��ַ��󶨣��ڱ���׶�ȷ��������ַ
////�����ִ��è˵������ô��������ĵ�ַ��������󶨣���Ҫ�����н׶ΰ󶨣���ַ���
//void dospeak(Aniaml &animal)//Animal&animal = cat
//{
//	animal.speak();
//}
//
//void Test01()
//{
//	Cat cat;
//	Aniaml animal;
//	Dog dog;
//	dospeak(animal);
//	dospeak(dog);
//}



class Aniaml
{
public:
	virtual void speak() 
	{
		cout << "������˵��" << endl;
	}
};

class Cat : public Aniaml
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog : public Aniaml
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

void dospeak(Aniaml &animal)//Animal&animal = cat
{
	animal.speak();
}

void Test01()
{
	Cat cat;
	Aniaml animal;
	Dog dog;
	dospeak(cat);
	dospeak(dog);
}

void Test02()
{
	//�麯��  ����virtual���ڱ�Ϊָ�� vfptr(�麯��ָ��)  virtual function pointer
	//�麯��ָ��ָ���麯����  ���ڼ�¼�麯���ĵ�ַ
	//��������д������麯�� �����е��麯�����ڲ����滻��������麯����ַ �������ָ���������ָ���������ʱ���ͷ����˶�̬
	cout << "size of Animal = " << sizeof(Aniaml) << endl;
}

int main()
{
	Test01();
	Test02();

	system("pause");
	return 0;
}