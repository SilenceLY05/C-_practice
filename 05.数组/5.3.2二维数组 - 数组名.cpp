#include<iostream>
using namespace std;

int main6()
{
	//�鿴��ά������ռ�ڴ�ռ�
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά������ռ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά����һ�д�СΪ��" << sizeof(arr[0]) << endl;
	cout << "��ά����Ԫ����ռ�ռ�Ϊ��" << sizeof(arr[0][0]) << endl;
	cout << "��ά���鹲������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "��ά���鹲������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	//��ȡ��ά�����׵�ַ
	cout << "��ά������׵�ַΪ��" << (int)arr << endl;
	cout << "��ά����ڶ����׵�ַΪ��" << (int)arr[1] << endl;
	cout << "��ά���������Ԫ�ص��׵�ַΪ��" << (int)&arr[0][2] << endl;

	system("pause");
	return 0;
}