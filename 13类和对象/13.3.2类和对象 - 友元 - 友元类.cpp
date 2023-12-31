#include<iostream>
using namespace std;

//class Building;
//
//class Goodgay
//{
//public:
//	Goodgay();
//
//	void visit();//参观函数 访问building里的属性
//
//	Building* building;
//};
//
//class Building
//{
//	//Goodgay类是本类的好朋友，可以访问私有成员
//	friend class Goodgay;
//public:
//	Building();
//
//public:
//	string m_settingroom;
//	
//
//private:
//	string m_bedroom;
//};
//
////类外写成员函数
//Building::Building() 
//{
//	m_bedroom = "卧室";
//	m_settingroom = "客厅";
//}
//
//Goodgay::Goodgay()
//{
//	//创建建筑物对象
//	building = new Building;
//}
//
//void Goodgay::visit()
//{
//	cout << "好基友类正在访问：" << building->m_settingroom << endl;
//
//	cout << "好基友类正在访问：" << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	Goodgay gg;
//	gg.visit();
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