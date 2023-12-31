#include<iostream>
using namespace std;

//按参数分类：有参构造（默认构造）和无参构造

//按类型分类：普通构造和拷贝构造

//class person
//
//{
//
//public:
//	//构造函数  无参
//	person()
//	{
//		cout << "person1 的无参构造函数调用" << endl;
//	}
//
//	person(int a)
//	{
//
//		age = a;
//		cout << "person1 的有参构造函数调用" << endl;
//	}
//
//	//拷贝构造函数
//	person(const person &p)
//	{
//		//将传入的人身上的所有属性拷贝到我的身上
//		cout << "person1 的拷贝构造函数调用" << endl;
//		age = p.age;
//	}
//
//	~person()
//	{
//		cout << "person1 的析构函数调用" << endl;
//	}
//
//	int age;
//};
//
////三种调用方式
//
//void test01()
//{
//	//括号法
//	//person p1;//默认构造函数的调用
//	//person p2(10);//有参构造函数的调用
//	//person p3(p2);//拷贝构造函数
//
//	//注意事项：调用默认构造函数的时候，不要加（）
//	//person p1(); 这行代码编译器会认为是函数的声明，不会认为在创建对象
//
//	//cout << "p2的年龄：" << p2.age << endl;
//	//cout << "p3的年龄：" << p3.age << endl;
//
//    //显示法
//	person p1;
//	person p2 = person(10);//有参构造
//	person p3 = person(p2);//调用拷贝构造
//
//	//person(10);//匿名对象  特点：当前行执行结束后 系统会立即回收掉匿名对象
//	//cout << "aaaa" << endl;
//
//	//注意事项2：不要利用拷贝构造函数来初始化匿名对象
//	//person(p3);//编译器会以为person(p3) == person p3
//
//    //隐式转换法
//	person p4 = 10;//相当于写了person p4 = person(10);   有参构造
//	person p5 = p4;//拷贝构造
//	
//}
//
//
//
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}