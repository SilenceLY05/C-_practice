#include<iostream>
using namespace std;

int main6()
{
	//查看二维数组所占内存空间
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组所占空间为：" << sizeof(arr) << endl;
	cout << "二维数组一行大小为：" << sizeof(arr[0]) << endl;
	cout << "二维数组元素所占空间为：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组共有列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	cout << "二维数组共有行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//获取二维数组首地址
	cout << "二维数组的首地址为：" << (int)arr << endl;
	cout << "二维数组第二行首地址为：" << (int)arr[1] << endl;
	cout << "二维数组第三个元素的首地址为：" << (int)&arr[0][2] << endl;

	system("pause");
	return 0;
}