#include<iostream>
using namespace std;

int main4()
{
	//指针和数组
	//利用指针访问数组中的元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr;//arr就是数组的首地址

	cout << "第一个元素为：" << arr[0] << endl;
	cout << "利用指针来访问第一元素：" << *p << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}