#pragma once


typedef void SeqList;
typedef void SeqListNode;
typedef void SeqStack;

SeqStack* SeqStack_Create(int capacity);

void SeqStack_Destory(SeqStack* stack);

void SeqStack_Clear(SeqStack* stack);

int SeqStack_Push(SeqStack* stack,void* item);

int SeqStack_Size(SeqStack* stack);

int SeqStack_Capacity(SeqStack* stack);

void* SeqStack_Pop(SeqStack* stack);

void* SeqStack_Top(SeqStack* stack);


