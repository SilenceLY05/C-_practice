#include<iostream>
using namespace std;

//友元的目的就是让一个函数或者类 访问另一个类中的私有成员  关键字friend

//友元的三种实现方法

//1、全局函数做友元

//2、类做友元

//3、成员函数做友元


//建筑物
//class Building
//{
//	//goodgay是全局函数的好朋友 可以访问building 中的私有成员
//	friend void goodgay(Building* building);*******
//public:
//	Building()
//	{
//		m_settingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//
//public:
//	string m_settingroom;//客厅
//
//private:
//	string m_bedroom;//卧室
//};
//
////全局函数
//
//void goodgay(Building *building)
//{
//	cout << "好基友全局函数正在访问：" << building->m_settingroom << endl;
//
//	cout << "好基友全局函数正在访问：" << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodgay(&building);
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}