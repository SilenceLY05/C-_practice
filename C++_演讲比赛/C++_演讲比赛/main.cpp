#include<iostream>
using namespace std;
#include "speechManager.h"


//�������򣺹�12�˲μ� ���������� ��һ��Ϊ��̭�� �ڶ���Ϊ����  ���Ϊ10001~10012
//���������ÿ��6��  ��һ�ַ�Ϊ2�飬��ѡ�ֱ�ų�ǩ˳���ݽ� ʮ����ί��֣�ȥ����ߺ���� ƽ����Ϊ�ɼ�
//��̭���ں����� ǰ��������������һ��  �ڶ���Ϊ����  ǰ����ʤ��  ÿ�ֱ���������ʾ����ѡ����Ϣ

//������
//��ʼ������
//�鿴���Ǳ��������
//��ձ�����¼��
//�˳���������


//int main()
//{
//	srand((unsigned int)time(0));
//	speechManager sm;
//
//	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
//	//{
//	//	cout << "���Ϊ��" << (*it).first << "  ������" << (*it).second.m_Name << "  ����Ϊ��" << (*it).second.m_Score[0] << endl;
//	//}
//
//	int choice = 0;
//
//	while (true)
//	{
//		sm.ShowMenu();
//
//		cout << "����������ѡ��" << endl;
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 1://��ʼ����
//			sm.StartSpeech();
//			break;
//		case 2://�鿴��¼
//			sm.ShowRecord();
//			break;
//		case 3://��ռ�¼
//			sm.ClearRecord();
//			break;
//		case 0://�˳�ϵͳ
//			sm.ExitSystem();
//			break;
//		default:
//			system("cls");
//			break;
//		}
//	}
//	
//
//	system("pause");
//	return 0;
//}


int main()
{
	SpeechManger sm;

	int choice = 0;

	while (true)
	{
		sm.Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			sm.StartSpeech();
			break;
		case 2:
			sm.ShowRecord();
			break;
		case 3:
			sm.ClearRecord();
			break;
		case 0:
			sm.ExitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}
