#include<iostream>
using namespace std;

//���ã�����������Ҫ���������βΣ���ֹ�����

//�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��

void showValue(const int & val)
{
	//val = 1000;
	cout << "val=" << val << endl;
}

int main()
{
	//int  a = 10;
	//����const֮�󣬱������������޸�Ϊ int temp = 10;int &ref = temp;
	//const int& ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
	//ref = 20;//����const֮���Ϊֻ�����������޸�

	int a = 100;
	showValue(a);
	cout << "a=" << a << endl;

	system("pause");
	return 0;
}