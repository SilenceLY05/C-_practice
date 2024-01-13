#include <iostream>
using namespace std;


//继承的语法：class 子类 ：继承方式  父类  子类也称为派生类 父类也称为基类

//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、python、c++...(公共分类列表)" << endl;
//	}
//
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
//
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、python、c++...(公共分类列表)" << endl;
//	}
//
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
//void Test01()
//{
//	cout << "Java下载视频页面如下：" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "---------------------" << endl;
//
//	cout << "Python下载视频页面如下：" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//}


////继承实现页面
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...(公共底部)" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、python、c++...(公共分类列表)" << endl;
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
//		cout << "JAVA学科视频" << endl;
//	}
//};
//
////Python
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////Python
//class CPP : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//
//void Test01()
//{
//	Java ja;
//	Python py;
//	CPP cpp;
//	cout << "Java下载视频页面如下：" << endl;
//	ja.header(); 
//}

////继承方式一共有三种：公共继承 保护继承 私有继承
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
////公共继承
//class Son1 :public Base1
//{
//public:
//	void Func()
//	{
//		m_A = 10;//父类中的公共权限内容到子类中依旧是公共权限
//		m_B = 10;//父类中的保护权限内容到子类中依旧是保护权限
//		//m_C = 10;//父类中的私有权限内容到子类中依旧是私有权限 访问不到
//	}
//};
//
//
////保护继承
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
//		m_A = 100;//父类中的公共权限内容到子类中变为保护权限
//		m_B = 100;//父类中的保护权限内容到子类中依旧是保护权限
//		//m_C = 10;//父类中的私有权限内容到子类中依旧是私有权限 访问不到
//	}
//};
//
////私有继承
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
//		m_A = 100;//父类中的公共权限内容到子类中变为私有权限
//		m_B = 100;//父类中的保护权限内容到子类中依旧是私有权限
//		//m_C = 10;//父类中的私有权限内容到子类中依旧是私有权限 访问不到
//	}
//};
//
//void Test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//到Son1中 m_B是保护权限 类外访问不到
//}
//
//void Test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;//在Son2中，m_A变为保护权限，因此类外访问不到
//	//s2.m_B = 100;//在Son2中，m_B保护权限，因此类外访问不到
//}
//
//void Test03()
//{
//	Son3 s3;
//	//s3.m_A = 100;//到Son3中 变为私有成员 类外访问不到
//	//s3.m_B = 100;//到Son3中 变为私有成员 类外访问不到
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



////利用开发人员命令提示工具查看对象模型 跳转盘符 F:  跳转文件路径 cd 具体路径下  查看命名  cl /d1 reportSingleClassLayout类名 文件名
////继承中的对象模型
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;//私有成员只是被隐藏了，但是还是会继承下去
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
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了
//	cout << "size of Son1:" << sizeof(Son1) << endl;
//}

////继承中构造和析构  子类继承父类后，当创建子类对象，也会调用父类的构造函数 父类和子类的构造和析构顺序谁先谁后
////先调用父类构造 再调用子类构造  销毁的时候先调用子类的析构 在调用父类的析构
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数！" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base析构函数！" << endl;
//	}
//};
//
//class Son1 : public Base
//{
//public:
//	Son1()
//	{
//		cout << "Son1构造函数！" << endl;
//	}
//
//	~Son1()
//	{
//		cout << "Son1析构函数！" << endl;
//	}
//};
//
//void Test01()
//{
//	Son1 s1;
//
//}

////继承同名成员处理方式：访问子类同名成员 直接访问即可 访问父类同名成员 需要加作用域
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//	void Func()
//	{
//		cout << "Base - Func()调用" << endl;
//	}
//
//	void Func(int a)
//	{
//		m_A = a;
//		cout << "Son1 - Func()调用,m_A = " << m_A << endl;
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
//		cout << "Son1 - Func()调用" << endl;
//	}
//
//
//
//	int m_A;
//};
//
////同名成员属性处理方式
//void Test01()
//{
//	Son1 s1;
//	cout << "Son1下的m_A = "<<s1.m_A << endl;
//	cout << "Base下的m_A = " << s1.Base::m_A << endl;
//}
//
////同名成员函数处理方式
//void Test02()
//{
//	Son1 s1;
//	s1.Func();
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//	s1.Base::Func(); 
//	s1.Base::Func(500);
//}

////静态成员和非静态成员出现同名，处理方式是一直 访问子类同名成员直接访问 访问父类同名成员加作用域
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


////多继承语法 C++允许一个类继承多个类 class 子类：继承方式 父类1，继承方式 父类2...
////多继承可能会引发父类中有同名成员出现，需要加作用域区分  实际开发中不建议用多继承
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

////菱形继承：两个派生类继承同一个基类，又有某个类同事继承着两个派生类 这种继承被称为菱形继承或者钻石继承
////动物类
//class Animal
//{
//public:
//	int m_Age;
//};
//
////利用虚继承可以解决菱形继承的问题 在继承之前加上virtual变为虚继承 Animal类称为虚基类
////vbptr v-virtual  b-base  ptr - pointer  指向vbtable
////羊类
//class Sheep :virtual public Animal
//{
//
//};
//
////驼类
//class Tuo :virtual public Animal
//{
//
//};
////羊驼类
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
//	//当出现菱形继承的时候有两个父类拥有相同的数据，需要加以作用域区分
//	cout << st.Sheep::m_Age << endl;
//	cout << st.Tuo::m_Age << endl;
//	cout << st.m_Age << endl;
//	//这份数据只要有一份就可以，菱形继承导致数据有两份，资源浪费
//}

//多态分为两类  静态多态：函数重载和运算符重载属于静态多态，复用函数名  动态多态：派生类和虚函数实现运行时多态
//静态多态和动态多态的区别：静态多态的函数地址早绑定 - 编译阶段确定函数地址
//动态多态的函数地址晚绑定 - 运行阶段确定函数地址

//动态多态满足条件：1.有继承关系  2.子类重写父类的虚函数
//动态多态使用：父类的指针或者引用来指向子类的对象

//class Aniaml
//{
//public:
//	virtual void speak() //虚函数
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat : public Aniaml
//{
//public:
//	//重写：函数返回值类型 函数名 参数列表 完全相同
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog : public Aniaml
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
////执行说话函数 地址早绑定，在编译阶段确定函数地址
////如果想执行猫说话，那么这个函数的地址不能提起绑定，需要在运行阶段绑定，地址晚绑定
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
		cout << "动物在说话" << endl;
	}
};

class Cat : public Aniaml
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Aniaml
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
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
	//虚函数  加上virtual类内变为指针 vfptr(虚函数指针)  virtual function pointer
	//虚函数指针指向虚函数表  表内记录虚函数的地址
	//当子类重写父类的虚函数 子类中的虚函数表内部会替换成子类的虚函数地址 当父类的指针或者引用指向子类对象时，就发生了多态
	cout << "size of Animal = " << sizeof(Aniaml) << endl;
}

int main()
{
	Test01();
	Test02();

	system("pause");
	return 0;
}