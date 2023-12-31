#include<iostream>
using namespace std;

class Cube
{

public:
	//��Ϊ
	// ���û�ȡ�����
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
	//��ȡ���������
	int calculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}
	//��ȡ���������
	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:
	//����
	int m_L;
	int m_W;
	int m_H;

};

//����ȫ�ֺ������ж������������Ƿ����
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

	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
	cout << "c1�����Ϊ��" << c1.calculateV() << endl;

	//�����ڶ���������
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "c1��c2�ǲ���ȵ�" << endl;
	}

	ret = c1.isSameByClass(c2);//���ó�Ա�����ж�
	if (ret)
	{
		cout << "��Ա�����ж�c1��c2����ȵ�" << endl;
	}
	else
	{
		cout << "��Ա������c1��c2�ǲ���ȵ�" << endl;
	}


	system("pause");
	return 0;
}