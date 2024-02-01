#pragma once
#include<iostream>
using namespace std;

//ģ���������ڲ���Ԫ�ص�ʱ��ģ������Ӧ�ð�ÿһ��T�������� ģ������Ӧ���ܷ���ڵ� ����ڵ�

//��ô������  linklist������
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
	Node<T>* head;//����������Ҫ��һ��ָ�������ͷ��ָ�� 
	int len;
	
};

