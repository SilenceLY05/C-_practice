#include<iostream>
using namespace std;

int main15()
{
	//�˷��ھ���
	
	//��ӡ����
	for (int j = 1; j <=9 ; j++)
	{
		for (int i = 1; i<=j; i++)//��ӡ����
		{
			cout << i << "*" << j << "=" << j * i <<" ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}