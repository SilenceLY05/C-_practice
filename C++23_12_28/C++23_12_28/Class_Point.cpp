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




//���ð뾶 
void Circle::SetR(int r)
{
	m_R = r;
}


//��ȡ�뾶

int Circle::getR()
{
	return m_R;
}

//����Բ��
void Circle::SetCenter(Point center)
{
	m_Center = center;
}

//��ȡԲ��
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
		cout << "����Բ��" << endl;
	}
	else if (ret == ret2)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

