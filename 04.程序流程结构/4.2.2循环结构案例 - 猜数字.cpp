#include<iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>

int main9()
{
	//������������ ���ã����õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1��ϵͳҪ������һ���������
	int num = rand() % 100 + 1;  //����һ��0~99�������
	//cout << num << endl;

	//2����ҽ��в²�
	int val = 0;//������������
	while (1)
	{
		cin >> val;

		//3���ж���ҵĲ²��Ƿ���ȷ
		if (val > num)//�´� ��ʾ�µĹ�����С ���·��صڶ���
		{
			cout << "������Ĺ���" << endl;
		}
		else if (val < num)
		{
			cout << "������Ĺ�С" << endl;
		}
		else//�¶� �˳�
		{
			cout << "��ϲ���¶���" << endl;
			break;//��ѭ���У��������øùؼ�����������ǰѭ��
		}
	}
	

	
	system("pause");
	return 0;
}