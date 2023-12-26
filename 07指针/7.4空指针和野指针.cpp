#include<iostream>
using namespace std;

/*int main()
{

	//空指针：指针变量指向内存中编号为0的空间
	int* p = NULL;

    //用途：初始化指针变量
    //注：空指针指向的内存是不可以访问的
	//0-255之间的内存编号是系统占用的，因此不可以访问
	*p = 100;

	system("pause");
	return 0;
}*/

int main2()
{
	//野指针
	//指针变量p指向内存地址编号0x1100空间
	int* p = (int*)0x1100;

	//访问野指针报错
	cout << *p << endl;

	system("pause");
	return 0;
}