#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"CircleList.h"

typedef struct _tag_CircleList
{
	CircleListNode header;
	CircleListNode* slider;//游标
	int length;
}TCircleList;

CircleList* CircleList_Create()
{
	TCircleList* ret = NULL;
	ret = (TCircleList*)malloc(sizeof(TCircleList));
	if (ret == NULL)
	{
		return NULL;
	}
	memset(ret, 0, sizeof(TCircleList));
	ret->length = 0;
	ret->header.next = NULL;
	ret->slider = NULL;
	return ret;
}

void CircleList_Destory(CircleList* list)
{
	if (list == NULL)
	{
		return;
	}
	free(list);
}

void CircleList_Clear(CircleList* list)
{
	TCircleList* tlist = NULL;
	if (list == NULL)
	{
		return;
	}

	tlist = (TCircleList*)list;
	tlist->length = 0;
	tlist->header.next = NULL;

	tlist->slider = NULL;
}

int CircleList_Length(CircleList* list)
{
	TCircleList* tlist = NULL;
	int ret = -1;
	if (list == NULL)
	{
		return ret;
	}

	tlist = (TCircleList*)list;

	ret = tlist->length;
	return ret;
}

int CircleList_Insert(CircleList* list, CircleListNode* node, int pos)
{
	int ret = 0, i = 0;
	CircleListNode* current = NULL;
	if (list == NULL || node == NULL || pos < 0)
	{
		return -1;
	}
	TCircleList* tlist = (TCircleList*)list;
	current = &(tlist->header);

	for (i = 0; i < pos && current->next != NULL; i++)
	{
		current = current->next;
	}

	node->next = current->next;
	current->next = node;

	//如果第一次插入节点
	if (tlist->length == 0)
	{
		tlist->slider = node;
	}
	tlist->length++;

	//若头插法 current仍然指向头部
	if (current == (CircleListNode*)tlist)
	{
		CircleListNode* last = CircleList_Get(tlist, tlist->length - 1);
		last->next = current->next;
	}

	return 0;
}

CircleListNode* CircleList_Get(CircleList* list, int pos)
{
	int i = 0;
	CircleListNode* current = NULL;
	CircleListNode* ret = NULL;
	if (list == NULL || pos < 0)
	{
		printf("func LinkList_Get()err:");
		return NULL;
	}
	TCircleList* tlist = (TCircleList*)list;
	current =(CircleListNode*)tlist;

	for (i = 0; i < pos ; i++)
	{
		current = current->next;
	}

	return current->next;
}

CircleListNode* CircleList_Delete(CircleList* list, int pos)
{
	TCircleList* slist = (TCircleList*)list;
	CircleListNode* ret = NULL;
	int i = 0;

	if ((slist != NULL) && (pos <= 0) && (slist->length > 0))
	{
		CircleListNode* current = (CircleListNode*)slist;//CircleListNode* current = (CircleListNode*)(&(slist->header));
		CircleListNode* last = NULL;

		for (i = 0; i < pos; i++)
		{
			current = current->next;
		}

		//若删除第一个头结点
		if (current == (CircleListNode*)slist)
		{
			last = (CircleListNode*)CircleList_Get(slist, slist->length - 1);
		}

		//求要删除的元素
		ret = current->next;

		current->next = ret->next;

		slist->length--;

		//判断链表是否为空
		if (last != NULL)
		{
			slist->header.next = ret->next;
			last->next = ret->next;
		}

		//若删除的元素是游标所指的元素
		if (slist->slider == ret)
		{
			slist->slider = ret->next;
		}

		//若删除元素后链表长度为0
		if (slist->length == 0)
		{
			slist->header.next = NULL;
			slist->slider = NULL;
		}
	}
	return ret;
}

CircleListNode* CircleList_DeleteNode(CircleList* list, CircleListNode* node)
{
	TCircleList* slist = (TCircleList*)list;
	CircleListNode* ret = NULL;
	int i = 0;

	if (slist != NULL)
	{
		CircleListNode* current = (CircleListNode*)slist;

		//查找node在链表中的位置
		for (i = 0; i < slist->length; i++)
		{
			if (current->next == node)
			{
				ret = current->next;
				break;
			}
			current = current->next;
		}

		//如果ret找到哦，根据i去删除
		if (ret != NULL)
		{
			CircleList_Delete(slist, i);
		}
	}
	return ret;
}

CircleListNode* CircleList_Reset(CircleList* list)
{
	TCircleList* slist = (TCircleList*)list;
	CircleListNode* ret = NULL;
	if (slist != NULL)
	{
		slist->slider = slist->header.next;
		ret = slist->slider;
	}
	return ret;

}

CircleListNode* CircleList_Current(CircleList* list)
{
	TCircleList* slist = (TCircleList*)list;
	CircleListNode* ret = NULL;
	if (slist != NULL)
	{
		ret = slist->slider;
	}
	return ret;
}

CircleListNode* CircleList_Next(CircleList* list)
{
	TCircleList* slist = (TCircleList*)list;
	CircleListNode* ret = NULL;
	if ((slist != NULL)&&(slist->slider != NULL))
	{

		ret = slist->slider;
		slist->slider = ret->next;
	}
	return ret;
}