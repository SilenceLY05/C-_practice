#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"seqstack.h"
#include <malloc.h>
#include"seqlist.h"

//����ջ�൱�ڴ������Ա�
SeqStack* SeqStack_Create(int capacity)
{
	return SeqList_Create(capacity);
}

//����ջ �൱���������Ա�
void SeqStack_Destory(SeqStack* stack)
{
	SeqList_Destroy(stack);
}

//���ջ�൱��������Ա�
void SeqStack_Clear(SeqStack* stack)
{
	SeqList_Clear(stack);
}

//��ջ��ѹ��Ԫ���൱���������β������Ԫ��
int SeqStack_Push(SeqStack* stack, void* item)
{
	return SeqList_Insert(stack, item, SeqList_Length(stack));//β�巨
}

//��ȡջ�Ĵ�С���൱�ڻ�ȡ�����ʵ�ʳ���
int SeqStack_Size(SeqStack* stack)
{
	return SeqList_Length(stack);
}

//��ȡջ���������൱�ڻ�ȡ���Ա������
int SeqStack_Capacity(SeqStack* stack)
{
	return SeqList_Capacity(stack);
}

//��ջ�е���Ԫ�أ��൱�ڴ�����β���ó�Ԫ��
void* SeqStack_Pop(SeqStack* stack)
{
	return SeqList_Delete(stack, SeqList_Length(stack) - 1);
}

//��ȡջ��Ԫ�أ��൱�ڻ�ȡ�����β��Ԫ��
void* SeqStack_Top(SeqStack* stack)
{
	return SeqList_Get(stack, SeqList_Length(stack) - 1);
}
