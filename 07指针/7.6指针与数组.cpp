#include<iostream>
using namespace std;

int main4()
{
	//ָ�������
	//����ָ����������е�Ԫ��

	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;//arr����������׵�ַ

	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	cout << "����ָ�������ʵ�һԪ�أ�" << *p << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}