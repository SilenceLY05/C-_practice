#include <iostream>
using namespace std;
#include"MySeqList.cpp"
#include "MyLinkList.cpp"

typedef struct Teacher
{
	char name[32];
	int age;
}Teacher;

//void main_seqlist_play()
//{
//	Teacher t1, t2, t3, temp;
//	t1.age = 21;
//	t2.age = 22;
//	t3.age = 23;
//	SeqList<Teacher> list(10);
//
//	list.Insert(t1, 0);
//	list.Insert(t2, 0);
//	list.Insert(t3, 0);
//
//	//��������ı���
//	for (int i = 0; i < list.GetLength(); i++)
//	{
//		list.Get(i, temp);
//		cout << temp.age << " ";
//	}
//	cout << endl;
//
//	list.Clear();//�������
//
//	list.Insert(t1, 0);
//	list.Insert(t2, 0);
//	list.Insert(t3, 0);
//
//
//	//���������
//	while (list.GetLength() != 0)
//	{
//		list.Delete(0, temp);
//		cout << temp.age << " ";
//	}
//	cout << endl;
//}
//
//void main_seqlist_play02()
//{
//	Teacher t1, t2, t3;
//	Teacher* p1, * p2, * p3;
//	t1.age = 31;
//	t2.age = 32;
//	t3.age = 33;
//	p1 = &t1;
//	p2 = &t2;
//	p3 = &t3;
//
//	Teacher* temp = NULL;
//
//	SeqList<Teacher*> list(10);
//	list.Insert(p1, 0);  //===> insert(&list, t1, 0); 
//	list.Insert(p2, 0);
//	list.Insert(p3, 0);
//
//	//��������ı���
//	for (int i = 0; i < list.GetLength(); i++)
//	{
//		list.Get(i, temp);
//		cout << temp->age << " ";
//	}
//	cout << endl;
//
//
//	//���������
//	while (list.GetLength() > 0)
//	{
//		list.Delete(0, temp);
//		cout << temp->age << " ";
//	}
//	cout << endl;
//	return;
//}

void main_linklist_test01()
{
	Teacher t1, t2, t3, temp;
	t1.age = 21;
	t2.age = 22;
	t3.age = 23;
	MyLinkList<Teacher> list;

	list.Insert(t1, 0);
	list.Insert(t2, 0);
	list.Insert(t3, 0);

	//��������ı���
	for (int i = 0; i < list.Length(); i++)
	{
		list.Get(i,temp);
		cout << temp.age << " ";
	}
	cout << endl;

	//list.Clear();//�������

	//list.Insert(t1, 0);
	//list.Insert(t2, 0);
	//list.Insert(t3, 0);


	//���������
	while (list.Length() != 0)
	{
		list.Delete(0,temp);
		cout << temp.age << " ";
	}
	cout << endl;
}

void main()
{
	//main_seqlist_play();
	//main_seqlist_play02();
	main_linklist_test01();
	
	system("pause");
	return;
}
