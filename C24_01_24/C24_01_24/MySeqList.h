#pragma once

#include<iostream>
using namespace std;

template<typename T>
class SeqList
{
public:
	SeqList(int capacity);

	int GetLength();

	int GetCapacity();

	int Insert(T &t, int pos);

	int Get(int pos,T& t);

	int Delete(int pos, T& t);

	int Clear();

	~SeqList();

private:
	int length;
	int capacity;
	T* pArray;//สýื้
};