#include <iostream>
using namespace std;
#include <fstream>
#include <string>

////分别利用普通和多态写法 设计两个操作数进行计算器类
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
//		//扩展新的操作需要修改源码
//		//真实开发中我们提倡开闭原则 - 对扩展进行开发，对修改进行关闭
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
//	//创建一个计算器对象
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << " = " << c.getResult("+") << endl;
//}
//
//
////利用多态实现计算器
////多态好处：组织结构清晰，可读性强，对于前期和后期的扩展维护性高
//
////实现计算器的抽象类
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
////加法计算器类
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
////减法计算器类
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
////乘法计算器
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
//	//多态使用条件：父类指针或者引用指向子类对象
//	AbstractCalculator* ac = new AddCalculator;
//	ac->m_Num1 = 10;
//	ac->m_Num2 = 10;
//	cout << ac->getResult() << endl;
//	//用完后记得销毁
//	delete ac;
//	
//	ac = new SubCalculator;
//	ac->m_Num1 = 100;
//	ac->m_Num2 = 20;
//	cout << ac->getResult() << endl;
//}

////纯虚函数和抽象类
////纯虚函数语法：virtual 返回值类型 函数名 (参数列表) = 0;
////当类中有了纯虚函数，这个类也称为抽象类
////抽象类特点：无法实例化对象 子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//class Base
//{
//public:
//	//纯虚函数  只要有一个纯虚函数这个类称为抽象类  
//	virtual void Func() = 0;
//
//};
//
//class Son : public Base
//{
//public:
//	virtual void Func()
//	{
//		cout << "Func函数调用" << endl;
//	}
//};
//
//void Test01()
//{
//	//Base ba;  无法实例化对象
//	//Son s;子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//	Base* b1 = new Son;
//	b1->Func();
//}

//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加调料
//	virtual void PutSomething() = 0;
//
//	//制作饮品
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
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加调料
//	virtual void PutSomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
//
//class Tea :public AbstractDrinking
//{
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加调料
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
//
////制作函数
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


//虚析构和纯虚析构 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构函数 解决方式：父类中的析构修改为虚析构或纯虚析构
//共性：可以解决父类指针释放子类对象 都需要具体的函数实现 
//区别：如果是纯虚析构，该列属于抽象类，无法实例化对象
//虚析构语法： virtual ~类名(){}     纯虚析构 virtual ~类名() = 0;
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "父类Animal的构造函数调用" << endl;
//	}
//	virtual void speak() = 0;
//
//	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//	//virtual ~Animal()
//	//{
//	//	cout << "父类Animal的析构函数调用" << endl;
//	//}
//
//	virtual ~Animal() = 0;//需要声明也需要实现,有了纯虚析构之后，这个类也书序抽象类，无法实例化对象
//};
////Animal作用域下的一个纯虚析构
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
//		cout << "Cat的构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name<<"小猫在说话" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat的析构函数调用" << endl;
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
//	//父类指针在析构的时候，不对调用子类中的析构函数，导致子类中如果有堆区属性，出现内存泄漏
//	delete animal;
//}


//class CPU
//{
//public:
//	//抽象函数的计算函数
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
//		cout << "Intern的CPU开始计算了" << endl;
//	}
//};
//
//class InterVideo :public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "Intern的显卡开始显示了" << endl;
//	}
//};
//
//class InterMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "Intern的内存条开始存储了" << endl;
//	}
//};
//
//
//class LenovoCpu :public CPU
//{
//public:
//	void caculate()
//	{
//		cout << "Lenovo的CPU开始计算了" << endl;
//	}
//};
//
//class LenovoVideo :public VideoCard
//{
//public:
//	void display()
//	{
//		cout << "Lenovo的显卡开始显示了" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	void storage()
//	{
//		cout << "Lenovo的内存条开始存储了" << endl;
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


//C++中对文件操作需要包含头文件<fstream>
//文件类型分为两种：1.文本类型 文件以文本的ASCII码形式存储在计算机中  2.二进制文件 文件以文本的二进制形式存储在计算机中
//操作文件的三大类 ofstream:写操作   ifstream:读操作  fstream:读写操作

//写文件步骤：1.包含头文件 2.创建流对象 ofstream ofs;  3.打开文件 ofs.open("文件路径",打开方式); 
//4.写数据 ofs<<"写入的数据";  5.关闭文件 ofs.close()

//文件打开方式：ios::in为读文件而打开文件 ios::out为写文件而打开文件 ios::ate初始位置：文件尾
//ios::app追加方式写文件 ios::trunc如果文件存在先删除，再创建 ios::binary二进制方式

//void Test01()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "姓名：张三 年龄：12" << endl;
//	ofs << "姓名：李四 年龄：15" << endl;
//	ofs.close();
//}


////读文件步骤：1.包含头文件 2.创建流对象 ifstream ifs;  3.打开文件 ifs.open("文件路径",打开方式); 
////4.读数据 四种方式读取  5.关闭文件 ifs.close()
//
//void Test01()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	////第一种
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第二种
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第三种
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第四种
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//	ifs.close();
//}

////二进制方式写文件主要利用流对象调用成员函数write 
////函数原型： ostream& write(const char*buffer,int len);  参数解释:字符指针buffer指向内存中一段存储空间，len是读写字节数
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
//	Person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//
//}


//二进制方式读文件主要利用流对象调用成员函数read
//函数原型：istream& read(char* buffer,int len);
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
		cout << "文件打开失败" << endl;
		return;
	}
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << "  年龄：" << p.m_Age << endl;
	ifs.close();

}

int main()
{
	Test01();

	system("pause");
	return 0;
}


