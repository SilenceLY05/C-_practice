#include<iostream>
using namespace std;

//���һ��Բ�࣬����Բ���ܳ�
//Բ���ܳ��Ĺ�ʽl=2*PI*R
const double PI = 3.14;

//class ������Ƶ�һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:

	//����
	//�뾶
	int m_r;

	//��Ϊ
	//��ȡԲ���ܳ�
	double calculteZC()
	{
		return 2 * PI * m_r;
	}
};


int main0()
{
	//ͨ��Բ�ഴ�������Բ
	//ʵ������ͨ��һ���ഴ��һ������Ĺ��̣�
	Circle c1;
	//��Բ��������Խ��ֵ����
	c1.m_r = 10;

	cout << "Բ���ܳ�Ϊ��" << c1.calculteZC() << endl;

	system("pause");
	return 0;
}