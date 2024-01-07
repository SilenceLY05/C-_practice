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
	//���ð뾶 
	void SetR(int r);

	//��ȡ�뾶
	int getR();

	//����Բ��
	void SetCenter(Point center);

	//��ȡԲ��
	Point GetCenter();

	void isInCircle(Point& p);

private:
	//��һ�����п�������һ���� ��Ϊ�����еĳ�Ա
	Point m_Center;
	int m_R;
};
