#include "myArray.h"

template<class T>
MyArray<T>::MyArray(int capacity)
{
	this->m_Capacity = capacity;
}


//拷贝构造
template<class T>
MyArray<T>::MyArray(const MyArray<T>& myarr);

//重构函数
template<class T>
MyArray<T> MyArray<T>::operator=(const MyArray<T>& myarr);

//利用下标访问元素
template<class T>
T MyArray<T>::VisitMem(const MyArray<T>& myarr, int num);

//尾插法
template<class T>
MyArray<T>* MyArray<T>::TailAdd(MyArray<T>& myarr, T member);

//尾删法
template<class T>
MyArray<T>* MyArray<T>::TailRemove(MyArray<T>& myarr);

//获取容量
template<class T>
int MyArray<T>::Capacity(const MyArray<T>& myarr);

//获取大小
template<class T>
int MyArray<T>::Size(const MyArray<T>& myarr);

//析构
template<class T>
MyArray<T>::~MyArray();