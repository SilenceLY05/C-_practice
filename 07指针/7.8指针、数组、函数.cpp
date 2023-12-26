#include<iostream>
using namespace std;

//封装一个函数，利用冒泡排序，实现对整形数组的升序排列
//冒泡排序函数  参数1  数组的首地址  参数2  数组的长度
void bubbleSort(int *arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//若j>j+1，交换两个数组
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	//1、先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//数组的长度
	int len = sizeof(arr) / sizeof(arr[1]);
	//2、创建函数，实现冒泡排序
	bubbleSort(arr, len);
	//3、打印排序后的数组
	printArray(arr, len);

	system("pause");
	return 0;
}