#include<iostream>
using namespace std;
#include "Circle.h"
#include "Point.h"

//���һ��Բ����͵����������Բ�Ĺ�ϵ
//���һ������
//class Point
//{
//public:
//	//����x����
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx����
//	int getX()
//	{
//		return m_X;
//	}
//	//����y����
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡy����
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
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	// ��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	// ����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//private:
//	int m_R;//�뾶
//
//	//�����п�������һ���࣬��Ϊ�����еĳ�Ա
//	Point m_Center;//Բ��
//};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle &c,Point &p)
{
	//��������֮�����ƽ��
	int distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getX() - p.getY()) * (c.getCenter().getX() - p.getY());

	//����뾶ƽ��
	int rdistance = c.getR() * c.getR();

	//�жϹ�ϵ
	if (distance == rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance < rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main6()
{

	//����һ��Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//����һ����
	Point p1;
	p1.setX(10);
	p1.setY(10);

	Point p2;
	p2.setX(20);
	p2.setY(20);

	Point p3;
	p3.setX(5);
	p3.setY(5);


	//�жϹ�ϵ
	isInCircle(c, p1);
	isInCircle(c, p2);
	isInCircle(c, p3);

	system("pause");
	return 0;
}