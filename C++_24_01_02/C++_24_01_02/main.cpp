#include <iostream>
using namespace std;

//C++对象模型和this指针
//在C++中，类内的成员变量和成员函数分开存储，只有非静态成员变量才属于类的对象上


//class Person
//{
//public:
//	int m_A;//非静态成员变量,属于类的对象上
//	static int m_B;//静态成员变量,不属于类的对象上
//
//	void func()//非静态成员函数,不属于类的对象上
//	{
//
//	}
//
//	static void Func2()//静态成员函数,不属于类的对象上
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
//	cout << sizeof(p) << endl;//空对象占用内存空间位：一个字节
//	//C++编译器会给每个空对象分配一个字节的空间，为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//}
//
//
//void Test02()
//{
//	Person p;
//	cout << sizeof(p) << endl;
//}


////this指针指向被调用的成员函数所属的对象,this指针是隐含每一个非静态成员函数内的一种指针
////this指针用途：1、当形参和成员变量同名时，可以用this指针来区分 2、在类的非静态成员函数中返回对象本身，可以用return *this
//
//class Person
//{
//public:
//	Person(int m_Age)
//	{
//		this->m_Age = m_Age;
//	}
//	//如果要返回本体，需要用引用的方式进行返回.如果以值的方式返回，则创建了个新的对象
//	Person& PersonAddAge(Person &p)
//	{
//		this->m_Age += p.m_Age;
//		//this是指向p2的指针，而*this指向的就是p2这个对象本体
//		return *this;
//	}
//	int m_Age;
//};
//
//void Test01()
//{
//	Person p1(10);
//	cout << "p1的年龄为：" << p1.m_Age << endl;
//}
//
//void Test02()
//{
//	Person p1(10);
//	Person p2(10);
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2年龄为：" << p2.m_Age << endl;
//}

////空指针访问成员函数：C++中空指针也是可以调用成员函数的，但是要注意有没有用到this指针。如果用到需要加以判断
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
//		//报错原因是因为传入的指针为NULL
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

////const修饰成员函数
////成员函数后加const后成为常函数 常函数内不可能修改成员属性 成员属性声明时加关键字mutable后，在常函数中依然可以修改
////常对象：声明对象前加const称该对象为常对象 常对象只能调用常函数
//
//class Person
//{
//public:
//	//this指针的本质是指针常量，指针的指向是不可以修改的
//	//在成员函数后面加上const修饰的是this指针，让指针指向的值也不能修改
//	void ShowPerson() const
//	{
//		//m_A = 100;
//		//this = NULL;  //this指针不可以修改指针的指向
//		this->m_B = 100;
//	}
//
//	void Func()
//	{
//
//	}
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中也可以修改
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
//	const Person p;//在对象前加const，变为常对象
//	//p.m_A = 100;
//	p.m_B = 400;//m_B 是特殊值，在常对象下也是可以修改的
//
//	//常对象只能调用常函数
//	p.ShowPerson();
//	//p.Func();常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
//
//}


//友元：让一个函数或者类 访问另一个类中的私有成员 关键字为friend
//友元的三种实现：全局函数做友元 类做友元 成员函数做友元

////全局函数做友元
//class Building
//{
//	//GoodGay全局函数是Building好朋友，可以访问Building内的私有成员
//	friend void GoodGay(Building& building);
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//	string m_SittingRoom; // 客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//void GoodGay(Building &building)
//{
//	cout << "好朋友的全局函数正在访问：" << building.m_SittingRoom << endl;
//	cout << "好朋友的全局函数正在访问：" << building.m_BedRoom << endl;
//}
//
//void Test01()
//{
//	Building build;
//	GoodGay(build);
//}

////类做友元
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//参观函数访问Building中的属性
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
//	string m_SittingRoom; // 客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	//创建一个建筑物的对象
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "好朋友类正在访问：" << building->m_SittingRoom << endl;
//	cout << "好朋友类正在访问：" << building->m_BedRoom << endl;
//}
//
//
//
//void Test01()
//{
//	GoodGay gg;
//	gg.visit();
//}


////成员函数做友元
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit(); //让visit函数可以访问Building中的私有成员
//	void visit2();//让visit函数不可以访问Building中的私有成员
//
//	Building* building;
//};
//
//
//class Building
//{
//	friend void GoodGay::visit();//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有内容
//public:
//	Building();
//	string m_SittingRoom; // 客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	//创建一个建筑物的对象
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit正在访问：" << building->m_SittingRoom << endl;
//	cout << "visit正在访问：" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "visit2正在访问：" << building->m_SittingRoom << endl;
//}
//
//
//void Test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}


////运算符重载：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
////对于内置数据类型，编译器知道如何运算
////加号运算符重载：实现两个自动以数据类型相加的运算
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
//	////成员函数实现 + 号运算符重载
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
////通过全局函数实现
//Person operator+(Person p1, Person p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
////函数重载版本
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
//	//运算符重载也可以发生函数重载
//	Person p3 = p1 + 10;//Person + int 
//
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}


////左移运算符重载：可以输出自定义数据类型
////重载左移运算符配合友元可以实现输出自定义数据类型
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
//	////成员函数实现不了 p<<cout不是我们想要的效果
//	//void operator<<(Person& p)
//	//{
//	//}
//private:
//	int m_A;
//	int m_B;
//};
//
////只能利用全局函数重载运算符
//ostream& operator<<(ostream& out, Person p)  //本质 operator<<(cout , p) 简化 cout << p
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


////递增运算符重载：通过重载递增运算符，实现自己的整型数据
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符。
//	MyInteger& operator++() //返回引用是为了一直对一个数据进行递增操作
//	{
//		m_Num++;
//		return *this;
//	}
//
//	//重载后置++运算符。  这里的int代表的是占位参数可以用于区分前置和后置递增
//	MyInteger operator++(int)//后置返回的是一个局部对象，如果返回引用，函数结束后局部对象会被释放，所以返回值
//	{
//		//先 记录当前结果
//		MyInteger temp = *this;
//		//后 递增
//		m_Num++;
//		//记录的结果返回
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


////赋值运算符重载
////C++编译器至少给一个类添加4个函数 构造 析构 拷贝 赋值运算符 operator=，对属性进行值拷贝 如果类中有属性指向堆区，
////做赋值操作时也会出现深浅拷贝问题
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
//		//编译器提供的是浅拷贝 应该先判断是否有属性在堆区，如果有先释放干净，再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//
//		//返回对象本身
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
//	p3 = p2 = p1;//赋值操作
//
//	cout << *p1.m_Age << endl;
//	cout << *p2.m_Age << endl;
//	cout << *p3.m_Age << endl;
//}


////关系运算符重载：可以让两个自定义类型对象进行对比操作
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	//重载 == 号
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
//	Person p1("张三", 18);
//	Person p2("李四", 18);
//		
//	if (p1 == p2)
//	{
//		cout << "p1和p2是相等的" << endl;
//	}
//	else {
//		cout << "p1和p2是不相等的" << endl;
//	}
//
//	if (p1 != p2)
//	{
//		cout << "p1和p2是不相等的" << endl;
//	}
//	else {
//		cout << "p1和p2是相等的" << endl;
//	}
//}


//函数调用运算符()重载，由于重载后使用的方式非常像函数的调用，因此称为仿函数 仿函数没有固定写法，非常灵活
class MyPrint
{
public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

//加法类
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

	//匿名函数对象  通过类型名+()可以创建出来一个匿名对象
	cout << Myadd()(100, 100) << endl;
}

int main()
{
	Test01();


	system("pause");
	return 0;
}