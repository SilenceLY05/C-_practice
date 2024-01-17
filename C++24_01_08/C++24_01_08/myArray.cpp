#include "myArray.h"

template<class T>
MyArray<T>::MyArray(int capacity)
{
	this->m_Capacity = capacity;
}


//��������
template<class T>
MyArray<T>::MyArray(const MyArray<T>& myarr);

//�ع�����
template<class T>
MyArray<T> MyArray<T>::operator=(const MyArray<T>& myarr);

//�����±����Ԫ��
template<class T>
T MyArray<T>::VisitMem(const MyArray<T>& myarr, int num);

//β�巨
template<class T>
MyArray<T>* MyArray<T>::TailAdd(MyArray<T>& myarr, T member);

//βɾ��
template<class T>
MyArray<T>* MyArray<T>::TailRemove(MyArray<T>& myarr);

//��ȡ����
template<class T>
int MyArray<T>::Capacity(const MyArray<T>& myarr);

//��ȡ��С
template<class T>
int MyArray<T>::Size(const MyArray<T>& myarr);

//����
template<class T>
MyArray<T>::~MyArray();