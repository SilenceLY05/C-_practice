#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"LinkList.h"

typedef struct _tag_LinkList
{
	int length;
	LinkListNode header;
}TLinkList;

LinkList* LinkList_Create()
{
	TLinkList* ret = NULL;
	ret = (TLinkList*)malloc(sizeof(TLinkList));
	if (ret == NULL)
	{
		return NULL;
	}
	memset(ret, 0, sizeof(TLinkList));
	ret->length = 0;
	ret->header.next = NULL;
	return ret;
}

void LinkList_Destory(LinkList* list)
{
	if (list != NULL)
	{
		free(list);
		list = NULL;
	}
	return;
}

void ListList_Clear(LinkList* list)
{
	TLinkList* tlist = NULL;
	if (list == NULL)
	{
		return;
	}

	tlist = (TLinkList*)list;
	tlist->length = 0;
	tlist->header.next = NULL;

	return;
}

int LinkList_Length(LinkList* list)
{
	TLinkList* tlist = NULL;
	if (list == NULL)
	{
		return -1;
	}

	tlist = (TLinkList*)list;

	return tlist->length;
}

int LinkList_Insert(LinkList* list, LinkListNode* node, int pos)
{
	int ret = 0,i = 0;
	LinkListNode* current = NULL;
	if (list == NULL || node == NULL || pos < 0)
	{
		ret = 0;
		printf("func LinkList_Insert()err:%d", ret);
		return ret;
	}
	TLinkList* tlist = NULL;

	tlist = (TLinkList*)list;
	current = &(tlist->header);

	for (i = 0; i < pos && current->next != NULL; i++)
	{
		current = current->next;
	}
	
	node->next = current->next;
	current->next = node;
	tlist->length++;

	return 0;
}

LinkListNode* LinkList_Get(LinkList* list, int pos)
{
	int ret = 0, i = 0;
	LinkListNode* current = NULL;
	if (list == NULL || pos < 0)
	{
		ret = 0;
		printf("func LinkList_Get()err:%d", ret);
		return NULL;
	}
	TLinkList* tlist = NULL;

	tlist = (TLinkList*)list;
	current = &(tlist->header);

	for (i = 0; i < pos && current->next != NULL; i++)
	{
		current = current->next;
	}

	return current->next;
}

LinkListNode* LinkList_Delete(LinkList* list, int pos)
{
	int i = 0;
	LinkListNode* current = NULL;
	LinkListNode* ret = NULL;
	if (list == NULL || pos < 0)
	{
		printf("func LinkList_Delete()err:");
		return NULL;
	}
	TLinkList* tlist = NULL;

	tlist = (TLinkList*)list;
	current = &(tlist->header);

	for (i = 0; i < pos && current->next != NULL; i++)
	{
		current = current->next;
	}
	ret = current->next;
	current->next = ret->next;

	tlist->length--;

	return ret;
}