#include<iostream>
using namespace std;

// �������������߱������������Ƽ���ε��ú�����������ʵ��������Ե�������
//�������������Զ�Σ����Ǻ����Ķ���ֻ��һ��
//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ

//��ǰ���߱������������ڣ��������ú���������
//����������
int max(int a, int b);

int main4()
{
	int a = 10;
	int b = 3;
	cout << max(a, b) << endl;
	system("pause");
	return 0;
}

//���庯��
int max(int a, int b)
{
	return a > b ? a : b;
}