#include<iostream>
using namespace std;

//堆区：有程序员分配释放，若程序员不释放，程序结束时由操作系统回收

int* func1()
{
	//利用new关键字 可以将数据开辟到堆区
	//指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区
	int* p = new int(10);
	return p;
}

int main3()
{
	int* p = func1();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}