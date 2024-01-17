#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//构造函数
	MyArray(int capacity)
	{
		//cout << "MyArray的有参构造调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& myarr)
	{
		//cout << "MyArray的拷贝构造调用" << endl;
		this->m_Capacity = myarr.m_Capacity;
		this->m_Size = myarr.m_Size;
		this->pAddress = new T[myarr.m_Capacity];

		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = myarr.pAddress[i];
		}
	}


	//operator= 防止浅拷贝问题
	MyArray& operator=(const MyArray& myarr)
	{
		//cout << "MyArray的operator=调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
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

		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = myarr.pAddress[i];
		}
		return *this;
	}

	//利用下标访问元素
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//尾插法
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


	//尾删法
	void Pop_Back()
	{
		if (this->pAddress == NULL && this->m_Size == 0)
			return;

		this->m_Size--;
	}

	//获取容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//获取大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构
	~MyArray()
	{
		//cout << "MyArray的析构函数调用" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
		//this->m_Capacity = 0;
		//this->m_Size = 0;
	}

private:
	T* pAddress; // 指向堆区开辟的真实数组
	int m_Capacity;
	int m_Size;
};
