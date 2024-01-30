#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"seqlist.h"
#include"LinkList.h"

//void PrintfMyArr(char myArr[][30], int num)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%s\r\n", *(myArr+i));
//	}
//}
//
//int main()
//{
//	char myBuff[30];
//	char myArray[10][30] = { "aaa","bbb","ccc","11111" };
//	int i = 0;
//	int num = 4;
//	int j = 0;
//	char temp[10];
//
//	PrintfMyArr(myArray, num);
//
//	for (i = 0; i < num; i++)
//	{
//		for (j = i + 1; j < num; j++)
//		{
//			if (strcmp(myArray[i] , myArray[j])<0)
//			{
//				strcpy(temp, myArray[i]);
//				strcpy(myArray[i], myArray[j]);
//				strcpy(myArray[j], temp);
//			}
//		}
//	}
//
//	PrintfMyArr(myArray, num);
//
//	return 0;
//}

//int main()
//{
//	char** p2 = NULL;
//	int num = 5;
//	p2 = (char**)malloc(sizeof(char*) * num);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		p2[i] = (char*)malloc(sizeof(char) * 100);
//		sprintf(p2[i], "%d%d%d", i + 1, i + 2, i + 3);
//	}
//
//	for (i = 0; i < num; i++)
//	{
//		printf("%s\r\n", p2[i]);
//	}
//
//	//释放
//	for (i = 0; i < num; i++)
//	{
//		if (p2[i] != NULL)
//		{
//			free(p2[i]);
//			p2[i] = NULL;
//		}
//	}
//
//	if (p2 != NULL)
//	{
//		free(p2);
//		p2 = NULL;
//	}
//
//	return 0;
//}
//char** GetMem(int num)
//{
//	char** p2;
//	p2 = (char**)malloc(sizeof(char*) * num);
//	if (p2 == NULL)
//	{
//		return NULL;
//	}
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		p2[i] = (char*)malloc(sizeof(char) * 100);
//		sprintf(p2[i], "%d%d%d", i + 1, i + 2, i + 3);
//	}
//	return p2;
//}
//
//int main()
//{
//	char** p2 = NULL;
//	int num = 5;
//	p2 = GetMem(num);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		printf("%s\r\n", p2[i]);
//	}
//
//	//释放
//	for (i = 0; i < num; i++)
//	{
//		if (p2[i] != NULL)
//		{
//			free(p2[i]);
//			p2[i] = NULL;
//		}
//	}
//
//	if (p2 != NULL)
//	{
//		free(p2);
//		p2 = NULL;
//	}
//
//	return 0;
//}

//int GetMem(char*** p2,int num)
//{
//	if (p2 == NULL)
//	{
//		return -1;
//	}
//	char** temp = NULL;
//	temp = (char**)malloc(sizeof(char*) * num);
//
//	if (temp == NULL)
//	{
//		return NULL;
//	}
//
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		temp[i] = (char*)malloc(sizeof(char) * 100);
//		sprintf(temp[i], "%d%d%d", i + 1, i + 2, i + 3);
//	}
//	*p2 = temp;
//
//	return 0;
//}

//int main()
//{
//	int i = 0, j = 0;
//	char** p2 = NULL;
//	int num = 5;
//	char* temp = NULL;
//	char tempBuff[100];
//	//p2 = GetMem(num);
//
//	GetMem(&p2, num);
//
//	for (i = 0; i < num; i++)
//	{
//		printf("%s\r\n", p2[i]);
//	}
//
//	return 0;
//}


//有一个字符串符合以下特征("abcdef,acccd,eeee,aaaa,e3eeeee,sssss");要求协议额函数
//以逗号分割字符串，形成二维数组，并把结果传出  把二维数组行数运算结果页传出
//int GetRowSize(char buff[10][30], const char* str, char c,int* count)
//{
//	if (buff == NULL || str == NULL || count == NULL)
//	{
//		return -1;
//	}
//	int row = 0;
//	int col = 0;
//	int i = 0;
//	*count = 0;
//
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] != c)
//		{
//			buff[row][col] = str[i];
//			col++;
//		}
//		else
//		{
//			buff[row][col] = '\0';
//			row++;
//			col = 0;
//			(*count)++;
//		}
//	}
//
//	// 处理字符串末尾的情况
//	if (col > 0) {
//		buff[row][col] = '\0';
//		row++;
//		(*count)++;
//	}
//
//
//	return 0;
//}
//
//
//int GetRowSize2(char buff[10][30], const char* str, char c, int* count)
//{
//	if (buff == NULL || str == NULL || count == NULL)
//	{
//		return -1;
//	}
//	int row = 0;
//	*count = 0;
//	const char* start = str;
//	const char* end;
//
//	while ((end = strchr(start, c)) != NULL)
//	{
//		ptrdiff_t len = end - start;
//		strncpy(buff[row], start, len);
//		buff[row][len] = '\0';
//		row++;
//		start = end + 1;
//		(*count)++;
//	}
//
//	if (*start != '\0')
//	{
//		strcpy(buff[row], start);
//		row++;
//		(*count)++;
//	}
//	return 0;
//}
//
//int main()
//{
//	char* p1 = "abcdef,acccd,eeee,aaaa,e3eeeee,sssss";
//	char clem = ',';
//	int num = 0;
//	char MyArr[10][30];
//	int ret = 0;
//	int i = 0;
//	ret = GetRowSize2(MyArr, p1, clem, &num);
//
//	if (ret != 0)
//	{
//		printf("func GetRowSize error\r\n");
//		return;
//	}
//
//	for (i = 0; i < num; i++)
//	{
//		printf("%s\r\n",MyArr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int a[] = {1,2};
//	int b[100] = { 1,3 };
//	int c[200] = { 0 };//编译器在编译的时候 就已经确定了所有的值为零
//
//	memset(c, 0, sizeof(c));  //显示的 重置内存块
//	//c是数组首元素地址  &c是整个数组的地址
//	
//
//	return 0;
//}

//类型本质：固定大小内存块的别名
//定义数组类型
//int main()
//{
//	typedef int(MyArrayType)[5];  //定义了一个数据类型 数组数据类型
//	MyArrayType myArr; // int myArr[5]
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		myArr[i] = i + 1;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\r\n",myArr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	char* myArr[] = { "111","222","3333" };
//
//	//数组指针
//	typedef int(MyArratType)[5];
//	int i = 0;
//	MyArratType MyArray;
//
//	MyArratType* pArray;//定义一个指针变量；
//	pArray = &myArr;
//
//	return 0;
//}

//typedef struct  Teacher
//{
//	int age;
//	char name[64];
//}Teacher;
//
//int main()
//{
//	int i = 0;
//	Teacher t1, t2, t3, t4, t5;
//	t1.age = 31;
//	t2.age = 32;
//	t3.age = 33;
//	t4.age = 34;
//	t5.age = 35;
//	SeqList* list = NULL;
//	list = SeqList_Create(10);
//	int ret = 0;
//	if (list == NULL)
//	{
//		printf("func SeqList_Create() ret:%d\r\n", ret);
//		return;
//	}
//
//	ret = SeqList_Insert(list, (SeqListNode*)&t1, 0);
//	ret = SeqList_Insert(list, (SeqListNode*)&t2, 0);
//	ret = SeqList_Insert(list, (SeqListNode*)&t3, 0);
//	ret = SeqList_Insert(list, (SeqListNode*)&t4, 0);
//	ret = SeqList_Insert(list, (SeqListNode*)&t5, 0);
//
//	//遍历
//	for (i = 0; i < SeqList_Length(list); i++)
//	{
//		Teacher* tmp = (Teacher*)SeqList_Get(list, i);
//		if (tmp == NULL)
//		{
//			return;
//		}
//		printf("tmp->age:%d", tmp->age);
//	}
//
//	//删除链表中的节点
//	while (SeqList_Length(list) > 0)
//	{
//		SeqList_Delete(list, 0);
//	}
//
//	return 0;
//}

typedef struct Teacher
{
	LinkListNode node;
	int age;
	int name[32];
}Teacher;

int main()
{
	int i = 0;
	Teacher t1, t2, t3, t4, t5;
	t1.age = 31;
	t2.age = 32;
	t3.age = 33;
	t4.age = 34;
	t5.age = 35;
	int len = 0;
	int ret = 0;
	LinkList* list = NULL;
	list = LinkList_Create();

	if (list == NULL)
	{
		return;
	}

	len = LinkList_Length(list);

	ret = LinkList_Insert(list, (LinkListNode*)(&t1), 0);
	ret = LinkList_Insert(list, (LinkListNode*)(&t2), 0);
	ret = LinkList_Insert(list, (LinkListNode*)(&t3), 0);
	ret = LinkList_Insert(list, (LinkListNode*)(&t4), 0);
	ret = LinkList_Insert(list, (LinkListNode*)(&t5), 0);

	//遍历
	for (i = 0; i < LinkList_Length(list); i++)
	{
		Teacher* temp = LinkList_Get(list, 1);
		if (temp == NULL)
		{
			return;
		}
		printf("temp->age:%d", temp->age);
	}

	//删除链表
	while (LinkList_Length(list) > 0)
	{
		Teacher* temp = LinkList_Delete(list, 0);
		if (temp == NULL)
		{
			return;
		}
		printf("temp->age:%d", temp->age);
	}

	LinkList_Destory(list);

	return 0;
}