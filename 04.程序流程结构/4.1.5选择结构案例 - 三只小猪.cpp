#include<iostream>
using namespace std;

int main5()
{
	//������ֻС������ر���
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;

	//���û�������ֻС�������
	cout << "������С��A������" << endl;
	cin >> pig1;

	cout << "������С��B������" << endl;
	cin >> pig2;

	cout << "������С��C	������" << endl;
	cin >> pig3;

	//��ʾ�û��������ֻС������
	cout << "С��A������Ϊ:" << pig1 << endl;
	cout << "С��B������Ϊ:" << pig2 << endl;
	cout << "С��C������Ϊ:" << pig3 << endl;

	//�ж���ֻ����
	if (pig1 > pig2)//A��B��
	{
		if (pig1 > pig3)//A��C��
		{
			if(pig2>pig3)
			{
				cout << "��ֻС�������ص�ΪA��" << pig1 << endl;
				cout << "��ֻС���еڶ��ص�ΪB��" << pig2 << endl;
				cout << "��ֻС���������ΪC��" << pig3 << endl;
			}
			else
			{
				cout << "��ֻС�������ص�ΪA��" << pig1 << endl;
				cout << "��ֻС���еڶ��ص�ΪC��" << pig3 << endl;
				cout << "��ֻС���������ΪB��" << pig2 << endl;
			}
		}
		else
		{
			cout << "��ֻС�������յ�ΪC��" << pig3 << endl;
		}
	}
	else//B��A��
	{
		if (pig2 > pig3)
		{
			cout << "��ֻС�������ص�ΪB��" << pig2 << endl;
		}
		else
		{
			cout << "��ֻС�������ص�ΪC��" << pig3 << endl;
		}
	}
	system("pause");
	return 0;
}