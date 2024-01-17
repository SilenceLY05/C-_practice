#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//���캯��
	MyArray(int capacity)
	{
		//cout << "MyArray���вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& myarr)
	{
		//cout << "MyArray�Ŀ����������" << endl;
		this->m_Capacity = myarr.m_Capacity;
		this->m_Size = myarr.m_Size;
		this->pAddress = new T[myarr.m_Capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = myarr.pAddress[i];
		}
	}


	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& myarr)
	{
		//cout << "MyArray��operator=����" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		this->m_Capacity = myarr.m_Capacity;
		this->m_Size = myarr.m_Size;
		this->pAddress = new T[myarr.m_Capacity];

		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = myarr.pAddress[i];
		}
		return *this;
	}

	//�����±����Ԫ��
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//β�巨
	void Push_Back(const T& val)
	{
		if (this->pAddress == NULL)
			return;

		if (this->m_Size == this->m_Capacity)
		{
			int newcapacity = this->m_Capacity * 2;
			T* newArray = new T[newcapacity];
			for (int i = 0; i < this->m_Size; i++)
			{
				newArray[i] = this->pAddress[i];
			}
			delete[] this->pAddress;

			this->pAddress = newArray;
			this->m_Capacity = newcapacity;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}


	//βɾ��
	void Pop_Back()
	{
		if (this->pAddress == NULL && this->m_Size == 0)
			return;

		this->m_Size--;
	}

	//��ȡ����
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//��ȡ��С
	int getSize()
	{
		return this->m_Size;
	}

	//����
	~MyArray()
	{
		//cout << "MyArray��������������" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
		//this->m_Capacity = 0;
		//this->m_Size = 0;
	}

private:
	T* pAddress; // ָ��������ٵ���ʵ����
	int m_Capacity;
	int m_Size;
};
