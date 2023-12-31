#include<iostream>
using namespace std;

//纯虚函数语法：virtual 返回值类型 函数名 （参数列表）= 0；

//class Base
//{
//public:
//	//纯虚函数
//	//当类中有了纯虚函数 这个类也被称为抽象类
//    //抽象类特点：无法实例化对象
//	virtual void func() = 0;
//	
//};
//
//class son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func函数的调用" << endl;
//	}
//
//};
//
//void test01()
//{
//	//子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//	Base* base = new son;
//	base->func();
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
