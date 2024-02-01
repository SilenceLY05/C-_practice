#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"LinkList.h"
#include <malloc.h>
#include"LinkStack.h"
#include"LinkList.h"

typedef struct _tag_LinkStackNode
{
	LinkListNode node;//�����ҵ��ڵ�
	void* item;//ջ��ҵ��ڵ�
}TLinkStackNode;


//����ջ�൱�ڴ���һ�����Ա�
LinkStack* LinkStack_Create()
{
	return LinkList_Create();
}

//����һ��ջ�൱������һ�����Ա�
void LinkStack_Destory(LinkStack* stack)
{
	LinkStack_Clear(stack);
	LinkList_Destory(stack);
	return;
}

//���һ��ջ�൱�����һ�����Ա�  ���ջ��ʱ���漰��ջԪ���������ڵĹ���
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

//��ջ�����Ԫ�أ��൱�������Ա��ͷ������Ԫ��
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

//��ջ�е���Ԫ�أ��൱�ڴ����Ա��ͷ��ɾ��Ԫ��
//�����Ա��ҵ��ڵ�ת��Ϊջ��ҵ��ڵ�
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

	//��ΪInsert��ʱ��������ڴ棬����Ҫ�ͷ��ڴ�
	free(temp);

	return item;
}

//��ȡջ��Ԫ�� �൱�ڻ�ȡ���Ա��0��λ��
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

//��ջ�Ĵ�С���뵱�������Ա��len
int LinkStack_Size(LinkStack* stack)
{
	return LinkList_Length(stack);
}