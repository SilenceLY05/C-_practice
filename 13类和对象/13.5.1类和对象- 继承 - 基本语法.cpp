#include<iostream>
using namespace std;

//普通实现页面

//JAVA页面

//class Java
//{
//public:
//
//	void header()
//	{
//		cout << "首页、公开课、登录、注册…（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图…（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "JAVA、Python、C++…（公共分类）" << endl;
//	}
//
//	void content()
//	{
//		cout << "JAVA学科的视频" << endl;
//	}
//
//};
//
////Python
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册…（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图…（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "JAVA、Python、C++…（公共分类）" << endl;
//	}
//
//	void content()
//	{
//		cout << "Python学科的视频" << endl;
//	}
//
//};


//继承实现页面
//继承语法：class 子类：public(继承方式) Basepage(父类)
//子类 也称为派生类
//父类 也称为基类

//公告页面
//class Basepage
//{
//public:
//	
//	void header()
//	{
//		cout << "首页、公开课、登录、注册…（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图…（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "JAVA、Python、C++…（公共分类）" << endl;
//	}
//
//
//};
//
////Java页面
//class Java :public Basepage
//{
//public:
//	void content()
//	{
//		cout << "JAVA学科视频" << endl;
//	}
//};
//
////Python页面
//class Python :public Basepage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++页面
//class CPP :public Basepage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//
//void test01()
//{
//	cout << "JAVA下载视频页面如下" << endl; 
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "-------------------------" << endl;
//
//	cout << "Python下载视频页面如下" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "-------------------------" << endl;
//
//	cout << "C++下载视频页面如下" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//	cout << "-------------------------" << endl;
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