#include<iostream>
using namespace std;

//classĬ��Ȩ��Ϊ˽��
class C1
{
	int m_A;//Ĭ��Ȩ�� ��˽��
 };

//structĬ��Ȩ��Ϊ����
struct C2
{
	int m_A;//Ĭ��Ȩ�� �ǹ���
};

int main3()
{
	C1 c1;
	//c1.m_A = 100;//��class��Ĭ�ϵ�Ȩ��Ϊ˽��Ȩ�ޣ���˲����Է���

	C2 c2;
	c2.m_A = 100;//��struct��Ĭ�ϵ�Ȩ��Ϊ����Ȩ�ޣ���˿��Է���
	system("pause");
	return 0;
}