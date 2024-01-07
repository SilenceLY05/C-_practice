#pragma once
#include<iostream>
using namespace std;

class Point
{
public:
	void SetX(int x);

	int getX();

	void SetY(int y);

	int getY();

private:
	int m_X;
	int m_Y;
};


class Circle
{
public:
	//设置半径 
	void SetR(int r);

	//获取半径
	int getR();

	//设置圆心
	void SetCenter(Point center);

	//获取圆心
	Point GetCenter();

	void isInCircle(Point& p);

private:
	//在一个类中可以让另一个类 作为本类中的成员
	Point m_Center;
	int m_R;
};
