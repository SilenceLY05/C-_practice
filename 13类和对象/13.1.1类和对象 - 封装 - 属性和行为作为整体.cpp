#include<iostream>
using namespace std;

//设计一个圆类，来求圆的周长
//圆球周长的公式l=2*PI*R
const double PI = 3.14;

//class 代表设计的一个类，类后面紧跟着的就是类名称
class Circle
{
	//访问权限
	//公共权限
public:

	//属性
	//半径
	int m_r;

	//行为
	//获取圆的周长
	double calculteZC()
	{
		return 2 * PI * m_r;
	}
};


int main0()
{
	//通过圆类创建具体的圆
	//实例化（通过一个类创建一个对象的过程）
	Circle c1;
	//给圆对象的属性进项赋值操作
	c1.m_r = 10;

	cout << "圆的周长为：" << c1.calculteZC() << endl;

	system("pause");
	return 0;
}