#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"LinkList.h"
#include <malloc.h>
#include"LinkStack.h"
#include"LinkList.h"

typedef struct _tag_LinkStackNode
{
	LinkListNode node;//链表的业务节点
	void* item;//栈的业务节点
}TLinkStackNode;


//创建栈相当于创建一个线性表
LinkStack* LinkStack_Create()
{
	return LinkList_Create();
}

//销毁一个栈相当于销毁一个线性表
void LinkStack_Destory(LinkStack* stack)
{
	LinkStack_Clear(stack);
	LinkList_Destory(stack);
	return;
}

//清空一个栈相当于清空一个线性表  清空栈的时候，涉及到栈元素生命周期的管理
void LinkStack_Clear(LinkStack* stack)
{
	if (stack == NULL)
		return;
	while (LinkList_Length(stack) > 0)
	{
		LinkStack_Pop(stack);
	}
	return;
}

//向栈中添加元素，相当于向线性表的头部插入元素
int LinkStack_Push(LinkStack* stack, void* item)
{
	TLinkStackNode* temp = NULL;
	int ret = 0;
	temp = (TLinkStackNode*)malloc(sizeof(TLinkStackNode));
	if (temp == NULL)
		return;

	memset(temp, 0, sizeof(TLinkStackNode));
	temp->item = item;
	
	ret = LinkList_Insert(stack, (LinkListNode*)temp, 0);

	if (ret != 0)
	{
		printf("func LinkStack_Push err:%d\r\n", ret);
		if (temp != NULL)
		{
			free(temp);
		}
		return ret;
	}
	return ret;
}

//从栈中弹出元素，相当于从线性表的头部删除元素
//把线性表的业务节点转化为栈的业务节点
void* LinkStack_Pop(LinkStack* stack)
{
	void* item = NULL;
	TLinkStackNode* temp = NULL;
	temp = (TLinkStackNode*)LinkList_Delete(stack, 0);

	if(temp == NULL)
	{
		return NULL;
	}
	item = temp->item;

	//因为Insert的时候分配了内存，所以要释放内存
	free(temp);

	return item;
}

//获取栈顶元素 相当于获取线性表的0号位置
void* LinkStack_Top(LinkStack* stack)
{
	TLinkStackNode* temp = NULL;
	temp = (TLinkStackNode*)LinkList_Get(stack, 0);
	if (temp == NULL)
	{
		return NULL;
	}
	return temp->item;
}

//求栈的大小，想当于求线性表的len
int LinkStack_Size(LinkStack* stack)
{
	return LinkList_Length(stack);
}