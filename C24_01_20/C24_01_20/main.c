#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include<stdio.h>
#include <stdlib.h>


//int main()
//{
//	int a;
//	int b;
//
//	char buff[128];//不管栈开口朝那里，buffer的内存地址+1永远向上
//	//编译 的时候，buffer所代表的内存空间的标号就已经定义下来了
//
//	printf("&a : %d,&b:%d", &a, &b);//在win32下，b的地址比a的小，栈的开口朝下，win64时，b的地址比a大，栈的开口朝上
//	//一般认为开口朝下
//	return 0;
//}

//main()->fa()->fb()  
//main函数中可以在栈上分配内存，可以在堆上分配内存，全局区分配内存， 可以被fa fb使用
//fb申请的内存，可以被main函数使用吗？  1.fb中在栈上分配的内存，不能被fa和main函数使用  2.fb中malloc的内存(堆)可以
//被main和fa使用   3.fb中全局区分配"abcdef"，内存可以被fa和main函数使用


////*p在等号的左边相当于往内存空间写值，在等号右边相当于从内存空间取值
//int main()
//{
//	int a = 10;
//	char* p1 = 100;//分配四个字节内存
//
//	printf("a:%d,p1:%d", sizeof(a),sizeof(p1));
//	int* p2 = NULL;
//	p2 = &a;
//	*p2 = 200;//间接修改a的值
//	printf("a = %d", *p2);
//
//	int c = 0;
//	c = *p2;
//	printf("c = %d", c);
//
//	char* p3 = NULL;
//	p3 = (char*)malloc(sizeof(char) * 100);//不断地给指针赋值相当于不断的改变指针的指向
//
//
//
//
//
//	return 0;
//}

////保证所指向的内存块能够修改
//char* getStr()
//{
//	char* temp = NULL;
//	temp = "abcdefg";
//	return temp;
//
//}
//
//int main()
//{
//	char* p = getStr();
//	printf("p = %s\r\n", p);
//	*(p + 2) = '2';
//	printf("p = %s\r\n", p);
//	return 0;
//}

//指针做函数参数 形参有多级指针的时候  站在编译器角度，只需要分配4个字节的内存，使用时才关心是一维还是二维
//int getABC1(char* p1);
//int getABC2(char** p2);
//int getABC3(char*** p3);
//int getABC4(char(*p4)[50]);
//int getABC5(char p5[10][30]);


//
int trimSpace(char* inbuf, char* outbuf)
{
	char* start = inbuf;
	char* end = inbuf + strlen(inbuf) - 1;

	while (*start && *start == ' ')
	{
		start++;
	}

	while (*end && *end == ' ')
	{
		end--;
	}

	int length = end - start + 1;

	if (length > 0)
	{
		strcpy(outbuf,start, length);
		outbuf[length] = '\0';
	}
	else
	{
		outbuf[0] = '\0';
		length = 0;
	}
	return length;
}


//int main()
//{
//	//char* p = NULL;
//	//strcpy(p, "abcdefg");
//	int i;
//	char buf[128];//可以在栈上分配内存
//	int j;
//
//	char* p = NULL;
//	char* p1 = NULL;
//	p = &buf[0];
//	p = &buf[1];
//	p = &buf[2];
//	p = &buf[3];
//
//	p1 = (char*)malloc(sizeof(char) * 100);
//	strcpy(p1, "abcdefghijklmn");
//	for (i = 0; i < 10; i++)
//	{
//		p = p1[i];
//	}
//
//	return 0;
//}
//int getFileLen(int* p)
//{
//	*p = 40;
//	
//}
////只能返回一个结果
//int getFileLen2()
//{
//	int a = 100;
//	return a;
//}
//
//int getFileLen3(int b)
//{
//	b = 100;
//}
//
//int main()
//{
//	int a = 10; 
//	int* p = NULL;
//
//	//修改a的值
//	a = 20;//直接修改
//
//	p = &a;
//	*p = 30;//p的值是a的地址， *就像一把钥匙 通过地址 找到一块内存空间 间接的修改了a的值
//	printf("a1 = %d\n", a);
//
//	getFileLen3(a);
//	printf("a2 = %d\n", a);
//	getFileLen(&a);
//	printf("a3 = %d\n", a);
//
//	return 0;
//}

//int main()
//{
//	char* p1 = NULL;
//	char** p2 = NULL;
//	p1 = 0x01;
//	p2 = 0x22;
//
//	//直接修改p1值
//	p1 = 0x111;
//
//	//间接修改p1
//	p2 = &p1;
//	*p2 = 100;//建立赋值  p2是p1的地址 
//
//	printf("p1:%d", p1);
//
//	return 0;
//}

//间接赋值成立的条件：1.定义1个变量(实参)定义1个变量(形参)  2.建立关联，把实参取地址传给形参  3.形参去间接的修改了实参的值
//应用场景：123都写在一个函数里 12写在一个函数里3卸载另外一个函数里 1写在一个函数里，23写在一个函数里

//一级指针的典型用法 数组 字符串
//C风格的字符串以零结尾的字符串  C语言中没有字符串，通过字符数组模拟字符串
//字符串的内存分配： 堆上 栈上 全局区

//字符数组
int main()
{
	////1指定长度
	//char buff1[100] = { 'a', 'b', 'c' };//后面的自动置0
	////char buff1[2] = { 'a', 'b', 'c' };如果初始化的个数大于内存的个数 编译错误

	////2不指定长度
	//char buff2[] = { 'a', 'b', 'c' };//是一个数组，不是一个以0结尾的字符串

	char buff[] = "abdcdg";//作为字符数组应该是7个字节 作为字符串应该是6个字节

	int len = strlen(buff);//6 长度 不包括0
	int size = sizeof(buff);//7 内存块大小
	printf("len:%d,size:%d", len, size);

	return 0;
}