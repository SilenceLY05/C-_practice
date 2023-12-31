#include<iostream>
using namespace std;

//class AbstructDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void Pourincup() = 0;
//
//	//加入辅料
//	virtual void Putsomething() = 0;
//
//	//制作饮品
//	void Makedrink()
//	{
//		Boil();
//		Brew();
//		Pourincup();
//		Putsomething();
//
//	}
//};
//
//class Coffee :public AbstructDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void Pourincup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void Putsomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
//class Tea :public AbstructDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	virtual void Pourincup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void Putsomething()
//	{
//		cout << "加入柠檬" << endl;
//	}
//};
//
////制作函数
//void doWork(AbstructDrinking *abs)//AbstructDrinking *abs = new Coffee
//{
//	abs->Makedrink();
//	delete abs;//释放
//}
//
//void test01()
//{
//	doWork(new Coffee);
//
//	doWork(new Tea);
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}