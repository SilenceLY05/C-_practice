#include<iostream>
using namespace std;
#include<string>

//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构函数
//解决方式：将父类中的析构函数改为虚析构或者纯虚析构

//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal构造函数调用" << endl;
//	}
//
//	//利用虚析构可以解决父类指针释放子类对象时不干净的问题
// 
//	
//	//纯虚析构  需要声明也需要实现
//	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//
//	//纯虚函数
//	virtual void speak() = 0;
//
//};
//
//
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name<<"小猫在说话" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string *m_Name;
//
//};
//
//void test01()
//{
//	Animal* animal = new Cat("tom");
//	animal->speak();
//	//父类指针在析构时 不会调用子类中析构函数 导致子类如果有堆区属性，会出现内存泄漏情况
//	delete animal;
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}