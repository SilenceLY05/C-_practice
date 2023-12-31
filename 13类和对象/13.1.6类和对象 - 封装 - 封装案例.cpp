#include<iostream>
using namespace std;

class Cube
{

public:
	//行为
	// 设置获取长宽高
	void setL(int l)
	{
		m_L = l;
	}

	int getL()
	{
		return m_L;
	}

	void setW(int w)
	{
		m_W = w;
	}

	int getW()
	{
		return m_W;
	}

	void setH(int h)
	{
		m_H = h;
	}

	int getH()
	{
		return m_H;
	}
	//获取立方体面积
	int calculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	//获取立方体体积
	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:
	//属性
	int m_L;
	int m_W;
	int m_H;

};

//利用全局函数来判断两个立方体是否相等
bool isSame(Cube &c1,Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}

	return false;
}

int main5()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;

	//创建第二个立方体
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1和c2是相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}

	ret = c1.isSameByClass(c2);//利用成员函数判断
	if (ret)
	{
		cout << "成员函数判断c1和c2是相等的" << endl;
	}
	else
	{
		cout << "成员函数判c1和c2是不相等的" << endl;
	}


	system("pause");
	return 0;
}