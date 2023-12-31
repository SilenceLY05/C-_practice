#include<iostream>
using namespace std;

//作用：通过重载递增运算符，实现自己的整型数据
//后置递增返回值 前置递增返回引用

//自定义整形
//class Myinteger
//{
//	friend ostream& operator<<(ostream& cout, Myinteger myint);
//
//public:
//	Myinteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符  返回引用是为了一直对一个数据进行递增操作
//	Myinteger& operator++()
//	{
//		//先进行++运算 再将自身进行返回
//		m_Num++;
//		return *this;
//	}
//
//	//重载后置++运算符  int 代表的是占位参数 可以用于区分前置和后置递增
//	Myinteger operator++(int)
//	{
//		//先记录当时结果 再将进行递增 最后将记录的结果返回
//		Myinteger temp = *this;
//		m_Num++;
//		return temp;
//	}
//
//
//private:
//	int m_Num;
//
//};
//
////重载左运算符
//ostream& operator<<(ostream& cout, Myinteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	Myinteger myint;
//
//	cout << ++myint << endl;
//	
//
//}
//
//void test02()
//{
//	Myinteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//
//	//test01();
//
//	test02();
//	system("pause");
//	return 0;
//}