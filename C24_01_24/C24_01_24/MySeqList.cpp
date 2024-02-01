#include"MySeqList.h"

template <typename T>
SeqList<T>::SeqList(int capacity)
{
	//T* pArray;//数组
	pArray = new T[capacity];
	this->capacity = capacity;
	this->length = 0;
}

template <typename T>
int SeqList<T>::GetLength()
{
	return this->length;
}

template <typename T>
int SeqList<T>::GetCapacity()
{
	return this->capacity;
}

template <typename T>
int SeqList<T>::Insert(T& t, int pos)
{
	int i = 0;
	if (pos < 0)
	{
		return -1;
	}

	//元素后移
	for (i = this->length; i > pos; i--)
	{
		pArray[i] = pArray[i - 1];
	}
	pArray[i] = t;//STL元素保存时通过 复制的机制实现的，你的类需要可以复制才行
	this->length++;
	return 0;

}

template <typename T>
int SeqList<T>::Get(int pos, T& t)
{
	if (pos < 0)
	{
		return -1;
	}

	t = pArray[pos];
	return 0;
}

template <typename T>
int SeqList<T>::Delete(int pos, T& t)
{
	if ( pos < 0)
	{
		return -1;
	}

	t = pArray[pos];
	for (int i = pos + 1; i < this->length; i++)
	{
		pArray[i - 1] = pArray[i];
	}
	this->length--;
	return 0;
}

template <typename T>
int SeqList<T>::Clear()
{
	this->length = 0;
	return 0;
}

template <typename T>
SeqList<T>::~SeqList()
{
	delete[] pArray;
	pArray = NULL;
	this->length = 0;
	this->capacity = 0;
}