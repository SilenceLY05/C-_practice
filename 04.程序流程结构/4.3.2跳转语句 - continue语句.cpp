#include<iostream>
using namespace std;

int main17()
{
	//continue������ã���ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��

	for (int i = 0; i <= 100; i++)
	{
		//��������������ż�������
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}