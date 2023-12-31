#include<iostream>
using namespace std;
#include <string>

//class Building;
//
//class Goodgay
//{
//public:
//	Goodgay();
//
//	void visit();//让visit函数可以访问Building中的私有成员
//	void visit2();//让visit函数不可以访问Building中的私有成员
//
//	Building* building;
//
//};
//
//class Building
//{
//	friend void Goodgay::visit();
//
//public:
//	Building();
//
//public:
//	string m_settingroom;
//
//
//private:
//	string m_bedroom;
//
//};
//
////类外实现成员函数
//Building::Building()
//{
//	m_bedroom = "卧室";
//	m_settingroom = "客厅";
//}
//
//Goodgay::Goodgay()
//{
//	building = new Building;
//}
//
//void Goodgay::visit()
//{
//	cout << "visit函数正在访问：" << building->m_settingroom << endl;
//
//	cout << "visit函数正在访问：" << building->m_bedroom << endl;
//}
//void Goodgay::visit2()
//{
//	cout << "visit2函数正在访问：" << building->m_settingroom << endl;
//}
//
//void test01()
//{
//	Goodgay gg;
//	gg.visit();
//	gg.visit2();
//	
//
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