#include<iostream>
using namespace std;

int main1()
{
	//ѡ��ṹ ����if���
	//�û�������������������600������Ϊ����1����ѧ����Ļ�����

	//1���û�������� 2����ӡ�û�������� 3���жϷ����Ƿ����600
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	cout << "������ķ���Ϊ��" << score << endl;

	//if ���������治Ҫ����ֺ�
	if (score >= 600) 
	{
		cout << "��ϲ������һ����ѧ��" << endl;
	}
	system("pause");
	return 0;
}