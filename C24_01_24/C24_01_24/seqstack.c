#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"seqstack.h"
#include <malloc.h>
#include"seqlist.h"

//创建栈相当于创建线性表
SeqStack* SeqStack_Create(int capacity)
{
	return SeqList_Create(capacity);
}

//销毁栈 相当于销毁线性表
void SeqStack_Destory(SeqStack* stack)
{
	SeqList_Destroy(stack);
}

//清空栈相当于清空线性表
void SeqStack_Clear(SeqStack* stack)
{
	SeqList_Clear(stack);
}

//向栈中压入元素相当于向链表的尾部插入元素
int SeqStack_Push(SeqStack* stack, void* item)
{
	return SeqList_Insert(stack, item, SeqList_Length(stack));//尾插法
}

//获取栈的大小，相当于获取链表的实际长度
int SeqStack_Size(SeqStack* stack)
{
	return SeqList_Length(stack);
}

//获取栈的容量，相当于获取线性表的容量
int SeqStack_Capacity(SeqStack* stack)
{
	return SeqList_Capacity(stack);
}

//从栈中弹出元素，相当于从链表尾部拿出元素
void* SeqStack_Pop(SeqStack* stack)
{
	return SeqList_Delete(stack, SeqList_Length(stack) - 1);
}

//获取栈顶元素，相当于获取链表的尾部元素
void* SeqStack_Top(SeqStack* stack)
{
	return SeqList_Get(stack, SeqList_Length(stack) - 1);
}
