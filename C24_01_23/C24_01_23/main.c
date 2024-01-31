#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"LinkList.h"
#include"CircleList.h"
#include "DLinkList.h"
#include"seqstack.h"

//typedef struct Teacher
//{
//	LinkListNode node;
//	int age;
//	char name[32];
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
//	int len = 0;
//	int ret = 0;
//	LinkList* list = NULL;
//	list = LinkList_Create();
//
//	if (list == NULL)
//	{
//		return;
//	}
//
//	len = LinkList_Length(list);
//
//	ret = LinkList_Insert(list, (LinkListNode*)(&t1), 0);
//	ret = LinkList_Insert(list, (LinkListNode*)(&t2), 0);
//	ret = LinkList_Insert(list, (LinkListNode*)(&t3), 0);
//	ret = LinkList_Insert(list, (LinkListNode*)(&t4), 0);
//	ret = LinkList_Insert(list, (LinkListNode*)(&t5), 0);
//
//	//遍历
//	for (i = 0; i < LinkList_Length(list); i++)
//	{
//		Teacher* temp = (Teacher*)LinkList_Get(list, 1);
//		if (temp == NULL)
//		{
//			return;
//		}
//		printf("temp->age:%d", temp->age);
//	}
//
//	//删除链表
//	while (LinkList_Length(list) > 0)
//	{
//		Teacher* temp = (Teacher*)LinkList_Delete(list, 0);
//		if (temp == NULL)
//		{
//			return;
//		}
//		printf("temp->age:%d", temp->age);
//	}
//
//	LinkList_Destory(list);
//
//	return 0;
//}

//struct Value
//{
//	CircleListNode circlenode;
//	int v;
//};
//
//int main(int argc,char* argv[])
//{
//	CircleList* list = CircleList_Create();
//
//	struct Value v1;
//	struct Value v2;
//	struct Value v3;
//	struct Value v4;
//	struct Value v5;
//	struct Value v6;
//	struct Value v7;
//	struct Value v8;
//
//	int i = 0;
//
//	v1.v = 1;
//	v2.v = 2;
//	v3.v = 3;
//	v4.v = 4;
//	v5.v = 5;
//	v6.v = 6;
//	v7.v = 7;
//	v8.v = 9;
//
//	CircleList_Insert(list, (CircleListNode*)&v1, 0);
//	CircleList_Insert(list, (CircleListNode*)&v2, 0);
//	CircleList_Insert(list, (CircleListNode*)&v3, 0);
//	CircleList_Insert(list, (CircleListNode*)&v4, 0);
//	CircleList_Insert(list, (CircleListNode*)&v5, 0);
//	CircleList_Insert(list, (CircleListNode*)&v6, 0);
//	CircleList_Insert(list, (CircleListNode*)&v7, 0);
//	CircleList_Insert(list, (CircleListNode*)&v8, 0);
//
//	for (i = 0; i < 2 * CircleList_Length(list); i++)
//	{
//		struct Value* pv = (struct Value*)CircleList_Get(list, i);
//
//		printf("%d\r\n", pv->v);
//	}
//
//	while (CircleList_Length(list) > 0)
//	{
//		CircleList_Delete(list, 0);
//	}
//
//	CircleList_Destory(list);
//
//	system("pause");
//
//	return 0;
//}

////约瑟夫问题
//void main22()
//{
//	int i = 0;
//	CircleList* list = CircleList_Create();
//
//	struct Value v1, v2, v3, v4, v5, v6, v7, v8;
//
//	CircleList_Insert(list, (CircleListNode*)&v1, CircleList_Length(list));
//	CircleList_Insert(list, (CircleListNode*)&v2, CircleList_Length(list));
//	CircleList_Insert(list, (CircleListNode*)&v3, CircleList_Length(list));
//	CircleList_Insert(list, (CircleListNode*)&v4, CircleList_Length(list));
//	CircleList_Insert(list, (CircleListNode*)&v5, CircleList_Length(list));
//	CircleList_Insert(list, (CircleListNode*)&v6, CircleList_Length(list));
//	CircleList_Insert(list, (CircleListNode*)&v7, CircleList_Length(list));
//	CircleList_Insert(list, (CircleListNode*)&v8, CircleList_Length(list));
//
//	for (i = 0; i < CircleList_Length(list); i++)
//	{
//		struct Value* pv = (struct Value*)CircleList_Next(list);
//
//		printf("%d\r\n", pv->v);
//	}
//
//	printf("\n");
//
//	//重置游标
//	CircleList_Reset(list);
//
//	while (CircleList_Length(list) > 0)
//	{
//		struct Value* pv = NULL;
//		for (i = 1; i < 3; i++)
//		{
//			CircleList_Next(list);
//		}
//		pv = (struct Value*)CircleList_Current(list);
//		printf("%d\n", pv->v);
//		CircleList_DeleteNode(list, (CircleListNode*)pv);
//	}
//	CircleList_Destory(list);
//
//}


//struct Value
//{
//	DLinkListNode node;
//	int v;
//};
//
//int main(int argc, char* argv[])
//{
//	DLinkList* list = DLinkList_Create();
//
//	struct Value* pv = NULL;
//	struct Value v1;
//	struct Value v2;
//	struct Value v3;
//	struct Value v4;
//	struct Value v5;
//
//	int i = 0;
//
//	v1.v = 1;
//	v2.v = 2;
//	v3.v = 3;
//	v4.v = 4;
//	v5.v = 5;
//
//	DLinkList_Insert(list, (DLinkListNode*)&v1, DLinkList_Length(list));
//	DLinkList_Insert(list, (DLinkListNode*)&v2, DLinkList_Length(list));
//	DLinkList_Insert(list, (DLinkListNode*)&v3, DLinkList_Length(list));
//	DLinkList_Insert(list, (DLinkListNode*)&v4, DLinkList_Length(list));
//	DLinkList_Insert(list, (DLinkListNode*)&v5, DLinkList_Length(list));
//
//	for (i = 0; i < DLinkList_Length(list); i++)
//	{
//		pv = (struct Value*)DLinkList_Get(list, i);
//
//		printf("%d\r\n", pv->v);
//	}
//
//	printf("\n");
//
//	DLinkList_Delete(list, DLinkList_Length(list) - 1);
//	DLinkList_Delete(list, 0);
//
//	for (i = 0; i < DLinkList_Length(list); i++)
//	{
//		pv = (struct Value*)DLinkList_Next(list);
//
//		printf("%d\r\n", pv->v);
//	}
//
//	printf("\n");
//
//	DLinkList_Reset(list);
//	DLinkList_Next(list);
//
//	pv = (struct Value*)DLinkList_Current(list);
//	printf("%d\n", pv->v);
//
//	DLinkList_DeleteNode(list, (DLinkListNode*)pv);
//
//	pv = (struct Value*)DLinkList_Current(list);
//
//	printf("%d\n", pv->v);
//
//	DLinkList_Pre(list);
//
//	pv = (struct Value*)DLinkList_Current(list);
//
//	printf("%d\n", pv->v);
//
//	printf("Length:%d\n", DLinkList_Length(list));
//
//	system("pause");
//
//	return 0;
//}

int main()
{
	SeqStack* stack = NULL;
	int a[10];
	stack = SeqStack_Create(10);
	int i = 0;
	if (stack == NULL)
	{
		return;
	}

	for (i = 0; i < 5; i++)
	{
		a[i] = i + 1;
		SeqStack_Push(stack, &a[i]);
	}

	printf("Capacity:%d\n", SeqStack_Capacity(stack));
	printf("Length:%d\n", SeqStack_Size(stack));
	printf("Toop:%d\n", *((int*)SeqStack_Top(stack)));

	while (SeqStack_Size(stack) > 0)
	{
		int temp = *((int*)SeqStack_Pop(stack));
		printf("temp:%d\r\n", temp);
	}
	
}