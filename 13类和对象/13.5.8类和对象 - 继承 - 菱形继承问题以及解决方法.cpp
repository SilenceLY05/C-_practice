#include<iostream>
using namespace std;

//class Animal
//{
//public:
//	int m_Age;
//};
//
////利用虚继承可以解决菱形继承的问题
////在继承之前加上关键字virtual变为虚继承
////Animal类称为虚基类
//
//class Sheep:virtual public Animal
//{
//public:
//
//	
//
//};
//
//class Camel :virtual public Animal
//{
//public:
//
//
//};
//
//class Sheeptuo :public Sheep, public Camel
//{
//public:
//
//
//};
//
//void test01()
//{
//	Sheeptuo st;
//	st.Sheep::m_Age = 18;
//	st.Camel::m_Age = 28;
//	//当菱形继承的时候，有两个父类拥有相同的数据，需要加以作用域区分
//	cout << "Sheep::m_Age = " << st.Sheep::m_Age << endl;
//	cout << "Camel::m_Age = " << st.Camel::m_Age << endl;
//
//	//这份数据只要有一份就可以，菱形数据导致有两份，导致资源浪费
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}