#include<iostream>
using namespace std;
//实现通用对数组进行排序的函数
//规则：从大到小   算法：选择排序   测试：char int 

//实现交换的模板
//template<typename T>
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//
//}
//
//
////排序算法
//template<typename T >
//void mySort(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//认定最大值下标
//		for (int j = i + 1; j < len; j++)
//		{
//			//认定的最大值比遍历出的数值小 说明J下标的元素才是真的最大值
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			//交换max 和 i 元素
//			mySwap(arr[max], arr[i]);
//
//		}
//
//	}
//}
//
////提供打印数组的模板
//template<typename T >
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " " << endl;
//	}
//}
//
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	int numArr[]={2,1,4,6,3,7};
//	int num = sizeof(numArr) / sizeof(int);
//	mySort(numArr, num);
//	printArray(numArr, num);
//}
//
//int main()
//{
//
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}