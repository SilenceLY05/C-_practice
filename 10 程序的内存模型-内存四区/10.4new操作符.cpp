#include<iostream>
using namespace std;

//�﷨��new ��������  ����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��

//new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}
void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//�������ٵ������ɳ���Ա�ֶ��ͷţ��ͷ����ò�����delete
	delete p;

	//cout << *p << endl;�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
}

//�ڶ�������new��������
void test02()
{
	//����10�������������飬�ڶ���
	int* arr = new int[10];//10����������10��Ԫ��
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ100-109

	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������  �ͷ������ʱ��Ҫ��[]
	delete[] arr;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}