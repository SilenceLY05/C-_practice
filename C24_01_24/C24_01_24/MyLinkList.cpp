#include "MyLinkList.h"

template<typename T>
MyLinkList<T>::MyLinkList()
{
	this->head = new Node<T>;
	head->next = NULL;
	this->len = 0;
}

template<typename T>
int MyLinkList<T>::Clear()
{
	Node<T>* temp = NULL;
	while (this->head != NULL)
	{
		temp = this->head->next;//ɾ�������ʱ�򣬻������ڵ�
		delete this->head;
		this->head = temp;
	}


	this->head = new Node<T>;
	head->next = NULL;
	this->len = 0;
	return 0;
}

template<typename T>
int MyLinkList<T>::Length()
{
	return this->len;
}

template<typename T>
int MyLinkList<T>::Insert(T& t, int pos)
{
	if (pos < 0 || pos > this->len) {
		cout << "Position out of bounds" << endl;
		return -1;
	}

	Node<T>* current = this->head;

	// �����½ڵ�
	Node<T>* node = new Node<T>;
	if (node == NULL)
	{
		cout << "func Insert error" << endl;
		return -1;
	}
	node->t = t;
	node->next = NULL;

	if (pos == 0) {
		// ��ͷ������
		node->next = this->head->next; // ���� node->next = current->next;
		this->head->next = node;
	}
	else {
		// �ҵ�Ҫ����λ�õ�ǰһ���ڵ�
		for (int i = 0; i < pos - 1; i++)
		{
			current = current->next;
		}

		// ����ڵ�
		node->next = current->next;
		current->next = node;
	}

	this->len++;
	return 0;
}

template<typename T>
int MyLinkList<T>::Get(int pos, T& t)
{
	if (pos<0 || pos>this->len)
	{
		cout << "Position out of bounds" << endl;
		return -1;
	}
	Node<T>* current = NULL;
	current = this->head;

	for (int i = 0; i < pos; i++)
	{
		current = current->next;
	}

	t = current->next->t;//�ѻ����t�������õ�

	return 0;
}

template<typename T>
int MyLinkList<T>::Delete(int pos, T& t)
{
	if (pos<0 || pos>this->len)
	{
		cout << "Position out of bounds" << endl;
		return -1;
	}
	Node<T>* current = NULL;
	Node<T>* ret = NULL;
	current = this->head;

	for (int i = 0; i < pos; i++)
	{
		current = current->next;
	}

	ret = current->next;//��ɾ����Ԫ��

	t = ret->t;//�ѻ����t��������

	current->next = ret->next;

	this->len--;

	delete ret;
	return 0;
}


template<typename T>
MyLinkList<T>::~MyLinkList()
{
	Node<T>* temp = NULL;
	while (this->head != NULL)
	{
		temp = this->head->next;//ɾ�������ʱ�򣬻������ڵ�
		delete head;
		this->head = temp;
	}

	this->len = 0;
	this->head = NULL;
}