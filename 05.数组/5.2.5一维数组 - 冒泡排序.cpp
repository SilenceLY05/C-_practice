#include<iostream>
using namespace std;

int main4()
{
	//冒泡排序作用：对组内元素进行排序
	//1、比较相邻的元素。如果第一个比第二个大，就交换他们两个
	//2、对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值
	//3、重复以上步骤，每次比较次数-1，直到不需要比较
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前：" << endl;

	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//开始冒泡排序
	//总共排序轮数=元素个数-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比 次数=元素个数-当前轮数-1
		for (int j = 0; j < 9 - i - 1; j++)
		{
			//如果第一个数比第二个大，交换两个数字
			if (arr[j] > arr[j + 1 ])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//排序后结果
	cout << "排序后结果：" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}