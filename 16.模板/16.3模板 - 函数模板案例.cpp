#include<iostream>
using namespace std;
//ʵ��ͨ�ö������������ĺ���
//���򣺴Ӵ�С   �㷨��ѡ������   ���ԣ�char int 

//ʵ�ֽ�����ģ��
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
////�����㷨
//template<typename T >
//void mySort(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶����ֵ�±�
//		for (int j = i + 1; j < len; j++)
//		{
//			//�϶������ֵ�ȱ���������ֵС ˵��J�±��Ԫ�ز���������ֵ
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			//����max �� i Ԫ��
//			mySwap(arr[max], arr[i]);
//
//		}
//
//	}
//}
//
////�ṩ��ӡ�����ģ��
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
//	//����char����
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