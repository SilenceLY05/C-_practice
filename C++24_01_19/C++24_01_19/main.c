#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

//char* getStr1()
//{
//	char* p = "abcdef";
//	return p;
//}
//
//char* getStr2()
//{
//	char* p1 = "abcdef2";
//	return p1;
//}
//
//
//int* getInit()
//{
//	int* a = malloc(sizeof(int) * 5);
//	int num = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < num; i++)
//	{
//		a[i] = i;
//	}
//	return a;
//}
//
//int main()
//{
//	//char* p1 = NULL;
//	//char* p2 = NULL;
//	//p1 = getStr1();
//	//p2 = getStr2();
//
//	//int* a = getInt();
//
//	////��ӡp1 p2�ڴ�ռ������
//	//printf("p1:%s,p2:%s\r\n", p1, p2);
//
//	////��ӡp2 p2��ֵ
//	//printf("p1:%d,p2:%d\r\n", p1, p2);
//	int* a = getInit();
//	printf("a:%d", a);
//	printf("a[0] = %d", a[0]);
//
//
//	return 0;
//}

char* getMem(int num)
{
	char* p1 = NULL;
	p1 = (char*)malloc(sizeof(char) * num);

	if (p1 == NULL)
	{
		return NULL;
	}
	return p1;
}

char* getMem2()
{
	char buf[64];//��ʱ������ջ�����
	strcpy(buf, "1234556");
	printf("buf:%s\n", buf);
	return buf;
}

int main()
{
	char* temp = NULL;
	temp = getMem(10);
	if (temp == NULL)
	{
		return;
	}
	strcpy(temp, "112233");
	printf("temp = %s\r\n", temp);

	temp = getMem2();
	printf("temp = %s.\r\n", temp);

	return 0;
}