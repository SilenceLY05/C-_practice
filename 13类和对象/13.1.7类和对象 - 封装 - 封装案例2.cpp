#include<iostream>
using namespace std;
#include "Circle.h"
#include "Point.h"

//设计一个圆形类和点型类计算点和圆的关系
//设计一个点类
//class Point
//{
//public:
//	//设置x坐标
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取x坐标
//	int getX()
//	{
//		return m_X;
//	}
//	//设置y坐标
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取y坐标
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	// 获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	// 设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;//半径
//
//	//在类中可以让另一个类，作为本类中的成员
//	Point m_Center;//圆心
//};

//判断点和圆的关系
void isInCircle(Circle &c,Point &p)
{
	//计算两点之间距离平方
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getX() - p.getY()) * (c.getCenter().getX() - p.getY());

	//计算半径平方
	int rdistance = c.getR() * c.getR();

	//判断关系
	if (distance == rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance < rdistance)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}

int main6()
{

	//创建一个圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建一个点
	Point p1;
	p1.setX(10);
	p1.setY(10);

	Point p2;
	p2.setX(20);
	p2.setY(20);

	Point p3;
	p3.setX(5);
	p3.setY(5);


	//判断关系
	isInCircle(c, p1);
	isInCircle(c, p2);
	isInCircle(c, p3);

	system("pause");
	return 0;
}