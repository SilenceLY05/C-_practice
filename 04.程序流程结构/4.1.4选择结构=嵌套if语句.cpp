#include<iostream>
using namespace std;

int main4()
{
	int score = 0;
	cout << ("���������ĸ߿��ɼ���") << endl;
	cin >> score;

	cout << "������ĸ߿�����Ϊ��" << score << endl;

	if (score > 600)
	{
		if (score > 700)
		{
			cout << "��ϲ�����ϱ�����ѧ" << endl;
		}
		else if (score > 670)
		{
			cout << "��ϲ�������廪��ѧ" << endl;
		}
		else if (score > 650)
		{
			cout << "��ϲ���������������ѧ" << endl;
		}
		else
		{
			cout << "��ϲ������һ����ѧ" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ�����϶�����ѧ" << endl;
	}
	else if(score>400)
	{
		cout << "��ϲ������������ѧ" << endl;
	}
	else
	{
		cout << "���ź���δ���ϴ�ѧ" << endl;
	}
	system("pause");
	return 0;
}