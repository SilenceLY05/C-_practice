#include<iostream>
using namespace std;

int main1()
{
	//һά�������Ƶ���;
	//1������ͳ�������������ڴ��еĳ���   sizeof(arr)
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[1]) << endl;
	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[1]) << endl;
	
	//2�����Ի�ȡ�������ڴ��е��׵�ַ     cout<<arr<<endl;
	cout << "�����׵�ַΪ��" << arr << endl;
	cout << "�����׵�ַΪ��" << (int)arr << endl;//תʮ����
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << &arr[1] << endl;

	//��������һ�������������Խ��и�ֵ����


	system("pause");
	return 0;
}