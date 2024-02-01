#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "seqlist.h"


//在结构体中套1级指针
typedef struct _tag_SeqList
{
	int length;
	int capacity;
	unsigned int **node;   //int* node[]
}TSeqList;

SeqList* SeqList_Create(int capacity)
{
	int ret = 0;
	TSeqList* temp = NULL;
	temp = (TSeqList*)malloc(sizeof(TSeqList));
	if (temp == NULL)
	{
		ret = -1;
		printf("func SeqList_Creat error:%d\r\n",ret);
		return NULL;
	}

	memset(temp, 0, sizeof(TSeqList));

	//根据capacity的大小分配节点的空间
	temp->node = (unsigned int**)malloc(sizeof(unsigned int*) * capacity);
	if (temp->node == NULL)
	{
		ret = -1;
		printf("fun SeqList_Creat Malloc err %d", ret);
		return NULL;
	}
	temp->capacity = capacity;
	temp->length = 0;

	return temp;
}

void SeqList_Destroy(SeqList* list)
{
	TSeqList* tlist = NULL;
	if (list == NULL)
	{
		return;
	}
	tlist = (TSeqList*)list;
	if (tlist->node != NULL)
	{
		free(tlist->node);
	}
	free(tlist);
}

//清空链表 //回到初始化状态
void SeqList_Clear(SeqList* list)
{
	TSeqList* tlist = NULL;
	if (list == NULL)
	{
		return;
	}
	tlist = (TSeqList*)list;

	tlist->capacity = 0;

	return;
}

int SeqList_Length(SeqList* list)
{
	TSeqList* tlist = NULL;
	if (list == NULL)
	{
		return -1;
	}
	tlist = (TSeqList*)list;
	return tlist->length;
}

int SeqList_Capacity(SeqList* list)
{
	TSeqList* tlist = NULL;
	if (list == NULL)
	{
		return -1;
	}
	tlist = (TSeqList*)list;
	return tlist->capacity;
}

int SeqList_Insert(SeqList* list, SeqListNode* node, int pos)
{
	int i = 0, ret = 0;
	TSeqList* tlist = NULL;
	if(list == NULL|| node == NULL||pos<0)
	{
		ret = -1;
		printf("func SeqList_Insert error:%d", ret);
		return ret;
	}
	tlist = (TSeqList*)list;

	//判断是否满了
	if (tlist->length >= tlist->capacity)
	{
		ret = -1;
		printf("func SeqList_Insert tlist->length == tlist->capacity error:%d", ret);
		return ret;
	}

	//容错修正
	if (pos >= tlist->length && pos < tlist->capacity)
	{
		pos = tlist->length;
	}

	for (i = (tlist->length); i > pos; i--)
	{
		tlist->node[i] = tlist->node[i - 1];
	}
	tlist->node[i] = node;
	tlist->length++;
}

SeqListNode* SeqList_Get(SeqList* list, int pos)
{
	int i = 0;
	SeqListNode* ret = 0;
	TSeqList* tlist = NULL;
	if (list == NULL || pos < 0)
	{
		printf("func SeqList_Get error:-1");
		return NULL;
	}
	tlist = (TSeqList*)list;

	ret = (void*)tlist->node[pos];
	return ret;
}

SeqListNode* SeqList_Delete(SeqList* list, int pos)
{
	int i = 0;
	SeqListNode* ret = 0;
	TSeqList* tlist = NULL;
	if (list == NULL || pos < 0)
	{
		printf("func SeqList_Delete error:-1");
		return NULL;
	}
	tlist = (TSeqList*)list;

	ret = (SeqListNode*)tlist->node[pos];

	for (i = pos; i <(tlist->length) - 1; i++)
	{
		tlist->node[i] = tlist->node[i + 1];
	}
	tlist->length--;

	return ret;
}
