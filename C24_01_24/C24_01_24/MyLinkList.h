#pragma once
#include<iostream>
using namespace std;

//模板类里面在插入元素的时候，模版类中应该把每一个T保存下来 模板类中应该能分配节点 缓存节点

//怎么样缓存  linklist做链表
template<typename T>
struct Node
{
	T t;
	Node<T>* next;
};

template<typename T>
class MyLinkList
{
public:
	MyLinkList();

	int Clear();

	int Length();

	int Insert(T& t, int pos);

	int Get(int pos, T& t);

	int Delete(int pos, T& t);


	~MyLinkList();
private:
	Node<T>* head;//在链表中需要建一个指向链表的头部指针 
	int len;
	
};

