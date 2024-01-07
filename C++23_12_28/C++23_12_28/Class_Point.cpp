#include "Class_Point.h"
void Point::SetX(int x)
{
	m_X = x;
}

int Point::getX()
{
	return m_X;
}

void Point::SetY(int y)
{
	m_Y = y;
}

int Point::getY()
{
	return m_Y;
}




//设置半径 
void Circle::SetR(int r)
{
	m_R = r;
}


//获取半径

int Circle::getR()
{
	return m_R;
}

//设置圆心
void Circle::SetCenter(Point center)
{
	m_Center = center;
}

//获取圆心
Point Circle::GetCenter()
{
	return m_Center;
}

void Circle::isInCircle(Point& p)
{
	int ret = (p.getX() - m_Center.getX()) * (p.getX() - m_Center.getX())
		+ (p.getY() - m_Center.getY()) * (p.getY() - m_Center.getY());

	int ret2 = m_R * m_R;

	if (ret > ret2)
	{
		cout << "点在圆外" << endl;
	}
	else if (ret == ret2)
	{
		cout << "点在圆上" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

