#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"DLinkList.h"
#include<malloc.h>

typedef struct _tag_DLinkList
{
	DLinkListNode header;
	DLinkListNode* slider;
	int length;
}TDlinkList;



DLinkList* DLinkList_Create()
{
	TDlinkList* ret = (TDlinkList*)malloc(sizeof(TDlinkList));

	if (ret != NULL)
	{
		ret->length = 0;
		ret->header.next = NULL;
		ret->header.pre = NULL;
		ret->slider = NULL;
	}
	return ret;
}

void DLinkList_Destory(DLinkList* list)
{
	if (list != NULL)
	{
		free(list);
	}
}

void DLinkList_Clear(DLinkList* list)
{
	TDlinkList* slist = (TDlinkList*)list;

	if (slist != NULL)
	{
		slist->length = 0;
		slist->header.next = NULL;
		slist->header.pre = NULL;
		slist->slider = NULL;
	}
}

int DLinkList_Length(DLinkList* list)
{
	TDlinkList* slist = (TDlinkList*)list;
	int ret = -1;

	if (slist != NULL)
	{
		ret = slist->length;
	}
	return ret;
}

int DLinkList_Insert(DLinkList* list, DLinkListNode* node, int pos)
{
	int ret = 0, i = 0;
	TDlinkList* slist = (TDlinkList*)list;

	if (list == NULL || node == NULL || pos < 0)
	{
		return -1;
	}

	DLinkListNode* current = (DLinkListNode*)slist;
	DLinkListNode* next = NULL;//需要增加next指针\

	for (i = 0; (i < pos) && (current->next != NULL); i++)
	{
		current = current->next;
	}
	next = current->next;

	//步骤1-2
	current->next = node;
	node->next = next;

	//步骤3-4
	if (next != NULL)//当链表插入第一个元素，需要特殊处理
	{
		next->pre = node;
	}
	node->pre = current;

	if (slist->length == 0)
	{
		slist->slider = node;//当链表插入第一个元素处理游标
	}

	//若在0位置插入，需要特殊处理 新来节点next前pre指向NULL
	if (current == (DLinkListNode*)slist)
	{
		node->pre = NULL;
	}

	slist->length++;

	return ret;

}

DLinkListNode* DLinkList_Get(DLinkList* list, int pos)
{
	TDlinkList* slist = (TDlinkList*)list;
	DLinkListNode* ret = NULL;

	int i = 0;

	if (slist != NULL && 0 <= pos && pos <= slist->length)
	{
		DLinkListNode* current = (DLinkListNode*)slist;

		for (i = 0; i < pos; i++)
		{
			current = current->next;
		}
		ret = current->next;
	}
	return ret;

}

DLinkListNode* DLinkList_Delete(DLinkList* list, int pos)
{
	TDlinkList* slist = (TDlinkList*)list;
	DLinkListNode* ret = NULL;
	int i = 0;

	if (slist == NULL || pos < 0)
	{
		return NULL;
	}

	DLinkListNode* current = (DLinkListNode*)slist;
	DLinkListNode* next = NULL;

	for (i = 0; i < pos; i++)
	{
		current = current->next;
	}
	ret = current->next;
	next = ret->next;

	//步骤1
	current->next = next;

	//步骤2
	if (next != NULL)//需要特殊处理
	{
		next->pre = current;

		if (current == (DLinkListNode*)slist)//若第0个位置，需要特殊处理
		{
			next->pre = NULL;
		}
	}

	if (slist->slider == ret)
	{
		slist->slider = next;
	}
	slist->length--;

	return ret;

}

//add
DLinkListNode* DLinkList_DeleteNode(DLinkList* list, DLinkListNode* node)
{

}

DLinkListNode* DLinkList_Reset(DLinkList* list)
{

}

DLinkListNode* DLinkList_Current(DLinkList* list)
{

}

DLinkListNode* DLinkList_Next(DLinkList* list)
{

}

DLinkListNode* DLinkList_Pre(DLinkList* list)
{

}

