#include<iostream>
using namespace std;

int main16()
{
	//breakʹ�õ�ʱ����
	////1��������Switch��������У���������ֹcase������Switch
	//cout << "��ѡ�񸱱����Ѷ�" << endl;
	//cout << "1����ͨ�Ѷ�" << endl;
	//cout << "2�������Ѷ�" << endl;
	//cout << "3�������Ѷ�" << endl;

	//int select = 0;//�����û�ѡ��Ľ������
	//cin >> select;//�ȴ��û�����

	//switch (select)
	//{
	//	case 1:
	//		cout << "��ѡ���Ϊ��ͨ�Ѷ�" << endl;
	//		break;//�˳�Switch���
	//	case 2:
	//		cout << "��ѡ���Ϊ�����Ѷ�" << endl;
	//		break;
	//	case 3:
	//		cout << "��ѡ���Ϊ�����Ѷ�" << endl;
	//		break;
	//}
	//2��������ѭ������У�������������ǰ��ѭ��
	//for (int i = 0; i < 10; i++)
	//{
	//	//���i����5���˳�ѭ�������ٴ�ӡ
	//	if (i == 5)
	//	{
	//		break;
	//	}
	//	cout << i << endl;
	//}
	
	//3��������Ƕ��ѭ���У�����������ڲ�ѭ�����
	for (int j = 1; j < 10; j++)
	{
		for (int i = 1; i <10; i++)
		{
			if (i == 6)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
		
	}
	
	system("pause");
	return 0;
}