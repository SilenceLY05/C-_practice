#include <iostream>
using namespace std;
#include <fstream>
#include <string>

////�ֱ�������ͨ�Ͷ�̬д�� ����������������м�������
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//
//
//		//��չ�µĲ�����Ҫ�޸�Դ��
//		//��ʵ�����������ᳫ����ԭ�� - ����չ���п��������޸Ľ��йر�
//
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//
//
//void Test01()
//{
//	//����һ������������
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << " = " << c.getResult("+") << endl;
//}
//
//
////���ö�̬ʵ�ּ�����
////��̬�ô�����֯�ṹ�������ɶ���ǿ������ǰ�ںͺ��ڵ���չά���Ը�
//
////ʵ�ּ������ĳ�����
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////������������
//class SubCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷�������
//class MultCalculator :public AbstractCalculator
//{
//public:
//
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//
//void Test02()
//{
//	//��̬ʹ������������ָ���������ָ���������
//	AbstractCalculator* ac = new AddCalculator;
//	ac->m_Num1 = 10;
//	ac->m_Num2 = 10;
//	cout << ac->getResult() << endl;
//	//�����ǵ�����
//	delete ac;
//	
//	ac = new SubCalculator;
//	ac->m_Num1 = 100;
//	ac->m_Num2 = 20;
//	cout << ac->getResult() << endl;
//}

////���麯���ͳ�����
////���麯���﷨��virtual ����ֵ���� ������ (�����б�) = 0;
////���������˴��麯���������Ҳ��Ϊ������
////�������ص㣺�޷�ʵ�������� ���������д�������еĴ��麯��������Ҳ���ڳ�����
//class Base
//{
//public:
//	//���麯��  ֻҪ��һ�����麯��������Ϊ������  
//	virtual void Func() = 0;
//
//};
//
//class Son : public Base
//{
//public:
//	virtual void Func()
//	{
//		cout << "Func��������" << endl;
//	}
//};
//
//void Test01()
//{
//	//Base ba;  �޷�ʵ��������
//	//Son s;���������д�������еĴ��麯��������Ҳ���ڳ�����
//	Base* b1 = new Son;
//	b1->Func();
//}

//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//�ӵ���
//	virtual void PutSomething() = 0;
//
//	//������Ʒ
//	void MakeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee :public AbstractDrinking
//{
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//�ӵ���
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
//
//class Tea :public AbstractDrinking
//{
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//�ӵ���
//	virtual void PutSomething()
//	{
//		cout << "�������" << endl;
//	}
//};
//
////��������
//void DoWork(AbstractDrinking* ad)
//{
//	ad->MakeDrink();
//	delete ad;
//}
//
//void Test01()
//{
//	DoWork(new Coffee);
//
//	DoWork(new Tea);
//}


//�������ʹ������� ��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ�������������� �����ʽ�������е������޸�Ϊ��������������
//���ԣ����Խ������ָ���ͷ�������� ����Ҫ����ĺ���ʵ�� 
//��������Ǵ����������������ڳ����࣬�޷�ʵ��������
//�������﷨�� virtual ~����(){}     �������� virtual ~����() = 0;
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "����Animal�Ĺ��캯������" << endl;
//	}
//	virtual void speak() = 0;
//
//	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
//	//virtual ~Animal()
//	//{
//	//	cout << "����Animal��������������" << endl;
//	//}
//
//	virtual ~Animal() = 0;//��Ҫ����Ҳ��Ҫʵ��,���˴�������֮�������Ҳ��������࣬�޷�ʵ��������
//};
////Animal�������µ�һ����������
//Animal:: ~Animal()
//{
//
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat�Ĺ��캯������" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name<<"Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat��������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string* m_Name;
//};
//
//void Test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//����ָ����������ʱ�򣬲��Ե��������е�������������������������ж������ԣ������ڴ�й©
//	delete animal;
//}


//class CPU
//{
//public:
//	//�������ļ��㺯��
//	virtual void caculate() = 0;
//};
//
//class VideoCard
//{
//public:
//	virtual void display() = 0;
//};
//
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
//
//class Computer 
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	void work()
//	{
//		m_cpu->caculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//
//private:
//	CPU* m_cpu;
//	VideoCard* m_vc;
//	Memory* m_mem;
//
//};
//
//class InterCpu :public CPU
//{
//public:
//	void caculate()
//	{
//		cout << "Intern��CPU��ʼ������" << endl;
//	}
//};
//
//class InterVideo :public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "Intern���Կ���ʼ��ʾ��" << endl;
//	}
//};
//
//class InterMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "Intern���ڴ�����ʼ�洢��" << endl;
//	}
//};
//
//
//class LenovoCpu :public CPU
//{
//public:
//	void caculate()
//	{
//		cout << "Lenovo��CPU��ʼ������" << endl;
//	}
//};
//
//class LenovoVideo :public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "Lenovo���Կ���ʼ��ʾ��" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "Lenovo���ڴ�����ʼ�洢��" << endl;
//	}
//};
//
//
//void Test01()
//{
//	
//	CPU* intercpu = new InterCpu;
//	VideoCard* intervc = new LenovoVideo;
//	Memory* intermem = new InterMemory;
//	Computer* cp1 = new Computer(intercpu, intervc, intermem);
//	cp1->work();
//	delete cp1;
//}


//C++�ж��ļ�������Ҫ����ͷ�ļ�<fstream>
//�ļ����ͷ�Ϊ���֣�1.�ı����� �ļ����ı���ASCII����ʽ�洢�ڼ������  2.�������ļ� �ļ����ı��Ķ�������ʽ�洢�ڼ������
//�����ļ��������� ofstream:д����   ifstream:������  fstream:��д����

//д�ļ����裺1.����ͷ�ļ� 2.���������� ofstream ofs;  3.���ļ� ofs.open("�ļ�·��",�򿪷�ʽ); 
//4.д���� ofs<<"д�������";  5.�ر��ļ� ofs.close()

//�ļ��򿪷�ʽ��ios::inΪ���ļ������ļ� ios::outΪд�ļ������ļ� ios::ate��ʼλ�ã��ļ�β
//ios::app׷�ӷ�ʽд�ļ� ios::trunc����ļ�������ɾ�����ٴ��� ios::binary�����Ʒ�ʽ

//void Test01()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "���������� ���䣺12" << endl;
//	ofs << "���������� ���䣺15" << endl;
//	ofs.close();
//}


////���ļ����裺1.����ͷ�ļ� 2.���������� ifstream ifs;  3.���ļ� ifs.open("�ļ�·��",�򿪷�ʽ); 
////4.������ ���ַ�ʽ��ȡ  5.�ر��ļ� ifs.close()
//
//void Test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	////��һ��
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////�ڶ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////������
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//	ifs.close();
//}

////�����Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write 
////����ԭ�ͣ� ostream& write(const char*buffer,int len);  ��������:�ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д�ֽ���
//
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void Test01()
//{
//	ofstream ofs("person.txt", ios::out | ios::binary);
//	//ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//
//}


//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//����ԭ�ͣ�istream& read(char* buffer,int len);
class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void Test01()
{
	ifstream ifs("person.txt", ios::in | ios::binary);
	//ofs.open("person.txt", ios::out | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_Name << "  ���䣺" << p.m_Age << endl;
	ifs.close();

}

int main()
{
	Test01();

	system("pause");
	return 0;
}


