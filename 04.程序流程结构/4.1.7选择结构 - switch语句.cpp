#include<iostream>
using namespace std;

int main7()
{
	/*
	switch(���ʽ)
	{
	     case���1:ִ�����;break;
		 case���2:ִ�����;break;
		 ��
	     default:ִ�����;break;
	}
	*/

	//����Ӱ���д�֣�10~9�� ����   8~7�� �ǳ��� 6~5�� һ��  5��һ�� ��Ƭ

	//1����ʾ�û�����Ӱ���
	cout << "�����Ӱ���д��" << endl;
	//2���û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	//3�������û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;
	case 7:
		cout << "����Ϊ�Ƿǳ��õĵ�Ӱ" << endl;
		break;
	case 6:
		cout << "����Ϊ��һ���Ӱ" << endl;
		break;
	case 5:
		cout << "����Ϊ��һ���Ӱ" << endl;
		break;
	default:
		cout << "����Ϊ��һ����Ƭ" << endl;
		break;
	}

	//if �� switch������
	//switch��ȱ�㣺�жϵ�ʱ��ֻ�������λ��ַ��ͣ���������һ������
	//        �ŵ㣺�ṹ������ִ��Ч�ʸ�
	system("pause");
	return 0;
}