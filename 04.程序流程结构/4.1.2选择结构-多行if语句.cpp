#include<iostream>
using namespace std;

int main2()
{
	//ѡ��ṹ - ����if���

	//���뿼�Է���
	int score = 0;
	cout << "���������ĸ߿�������" << endl;
	cin >> score;

	//��ʾ�û�����ķ���
	cout << "������ķ���Ϊ��" << score << endl;


	//�ж�����ķ������������600����ӡ����һ���������ӡδ����һ��
	if (score > 600)//����600ִ������������ڵ�����
	{
		cout << "��ϲ������һ����ѧ��" << endl;
	}
	else//������600ִ������������ڵ�����
	{
		cout << "���ź���δ�ܿ���һ����ѧ" << endl;
	}
	system("pause");
	return 0;
}