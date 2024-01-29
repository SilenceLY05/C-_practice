#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
//	char buff[20] = "aaaa";
//	char buff2[] = "bbbb";
//	char* p1 = "1111";
//	char* p2 = (char*)malloc(sizeof(char)*100);
//	strcpy(p2, "2222");
//	return 0;
//}

//void MyStrCpy(const char* source, char* dest)
//{
//	int num = strlen(source);
//	int i = 0;
//	for (i = 0; i <= num; i++)
//	{
//		dest[i] = source[i];
//	}
//}
//
//int main()
//{
//	//char a[] = "i am student";
//	//char buff[32];
//
//	//int i = 0;
//	//for (i = 0; *(a + i) != '\0'; i++)
//	//{
//	//	buff[i] = a[i];
//	//}
//
//	////0没有到b中
//	//buff[i] = '\0';
//
//	//printf("a:%s\r\n", a);
//	//printf("buff:%s\r\n", buff);
//
//	char a[] = "i am student";
//	char buff[32];
//	MyStrCpy(a, buff);
//
//	printf("a:%s\r\n", a);
//	printf("buff:%s\r\n", buff);
//	return 0;
//}

//char* p = "abcd111122abcd33333322abcd33333322qqq"
//int AppearTime(char* p)
//{
//	int count = 0;
//	int i = 0;
//	int length = strlen(p);
//	for (i = 0; i < length - 4; i++)
//	{
//		if (p[i] == 'a' && p[i + 1] == 'b' && p[i + 2] == 'c' && p[i + 3] == 'd')
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//void AppearTime2(char* p,char* p2,int* count)
//{
//	if (p2 == NULL)
//		return;
//	do
//	{
//		p = strstr(p, p2);
//		if (p != NULL)
//		{
//			(*count)++;
//			p += strlen(p2);
//		}
//		else
//		{
//			break;
//		}
//	} while (*p != '\0');
//
//}
//
//int main()
//{
//	char* p = "abcd111122abcd33333322abcd33333322qqq";
//	char* p2 = "abcd";
//	int count = 0;
//
//	AppearTime2(p, p2, &count);
//	printf("abcd出现次数：%d", count);
//
//
//	return 0;
//}

////把一个字符串按照奇偶位分成两个字符串
//int GetStr1Str2(char* source, char* buf1, char* buf2)
//{
//	if (source == NULL)
//	{
//		printf("source = NULL,error\r\n");
//		return -1;
//	}
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int lenght = strlen(source);
//
//	for (i = 0; i < lenght; i ++)
//	{
//		if (i % 2 == 0) {
//			buf1[j++] = source[i];
//		}
//		else
//		{
//			buf2[k++] = source[i];
//		}
//	}
//	buf1[j] = '\0';
//
//	buf2[k] = '\0';
//
//	return 0;
//}
//
//int main()
//{
//	char* source = "1a2b3c4dz";
//	int len = sizeof(source);
//	char* buff1 = (char*)malloc(sizeof(char) * len);
//	char* buff2 = (char*)malloc(sizeof(char) * len);
//	int ret = GetStr1Str2(source, buff1, buff2);
//
//	if (ret != -1)
//	{
//		printf("buff1:%s\r\n", buff1);
//		printf("buff2:%s\r\n", buff2);
//	}
//
//
//	return 0;
//}

//int trimSpace(char* inbuf, char* outbuf)
//{
//	char* start = inbuf;
//	char* end = inbuf + strlen(inbuf) - 1;
//
//	while (*start && *start == ' ')
//	{
//		start++;
//	}
//
//	while (*end && *end == ' ')
//	{
//		end--;
//	}
//
//	int length = end - start + 1;
//
//	if (length > 0)
//	{
//		strcpy(outbuf, start, length);
//		outbuf[length] = '\0';
//	}
//	else
//	{
//		outbuf[0] = '\0';
//		length = 0;
//	}
//	return length;
//}
//
//
////键值对(key = valued)字符串经常使用，实现根据key获取valude
//int GetKeyByValude(char* source, char* key, char* buff)
//{
//	if (source == NULL || key == NULL || buff == NULL)
//	{
//		printf("有指针指向 NULL,error\r\n");
//		return -1;
//	}
//
//	char* p = NULL;
//	p = source;
//
//	p = strstr(p, key);
//	if (p == NULL)
//	{
//		return -1;
//	}
//	p = p + strlen(key);
//
//	p = strstr(p, '=');
//	if (p == NULL)
//	{
//		return -1;
//	}
//	p = p + strlen('=');
//
//	int ret = trimSpace(p, buff);
//	
//}

//int main()
//{
//	char* p = "abcdefg";
//	int i, j = 0;
//	i = 0;
//	j = strlen(p) - 1;
//	while (isspace(p[i]) && p[i] != '\0')  //isspace检查参数是否为空格
//	{
//		i++;
//	}
//	while (isspace(p[j]) && p[j] != '\0')  
//	{
//		j--;
//	}
//	int ncount = j - i + 1;
//
//	printf("ncount:%d\r\n", ncount);
//	return 0;
//}

//void GetCount(char*str,int*pCount)
//{
//	char* p = str;
//	int i, j = 0;
//	i = 0;
//	j = strlen(p) - 1;
//	while (isspace(p[i]) && p[i] != '\0')  //isspace检查参数是否为空格
//	{
//		i++;
//	}
//	while (isspace(p[j]) && p[j] != '\0')
//	{
//		j--;
//	}
//	*pCount = j - i + 1;
//}
//
//int main()
//{
//	char buff[] = "abcdefgh";
//	int len = strlen(buff);
//	char* p1 = buff;
//	char* p2 = buff + len - 1;
//	char temp;
//	while (p1 < p2)
//	{
//		temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2--;
//	}
//	printf("buff:%s\r\n", buff);
//
//	return 0;
//}

//int GetMem(char** myp1, int* len1, char** myp2, int* len2)
//{
//	char* temp1 = NULL;
//	char* temp2 = NULL;
//
//	temp1 = (char*)malloc(100);
//	temp2 = (char*)malloc(100);
//
//	if (temp1 == NULL)
//	{
//		return -1;
//	}
//
//	if (temp2 == NULL)
//	{
//		return -1;
//	}
//
//	strcpy(temp1, "abcdefg");
//	*len1 = strlen(temp1);
//	strcpy(temp2, "higklmn");
//	*len2 = strlen(temp2);
//	*myp1 = temp1;
//	*myp2 = temp2;
//
//	//free(temp1);
//	//free(temp2);
//
//	return 0;
//}
//
//int GetMem_Free(char** myp1)
//{
//	if (myp1 == NULL)
//	{
//		return;
//	}
//	free(*myp1);
//	*myp1 = NULL;
//}
//
//
//int main()
//{
//	char* p1 = NULL;
//	char* p2 = NULL;
//	int len1 = 0;
//	int len2 = 0;
//
//	int ret = GetMem(&p1, &len1, &p2, &len2);
//
//	if (ret == -1)
//	{
//		printf("GetMem error");
//	}
//
//	printf("p1:%s\r\n  p2:%s\r\n  len1:%d\r\n  len2:%d\r\n", p1, p2, len1, len2);
//
//	GetMem_Free(p1);
//	GetMem_Free(p2);
//
//	return 0;
//}

int main()
{
	//数组 数组中的每一个元素装的都是指针  指针数组
	char* myArray[] = { "aaaaa","bbbbb","ccccc","ddddd" };
	int num = sizeof(myArray) / sizeof(myArray[0]);
	//打印 
	int i = 0;
	int j = 0;
	char* temp = NULL;

	for (i = 0; i < num; i++)
	{
		printf("%s\r\n", myArray[i]);
	}

	//排序
	for (i = 0; i < num; i++)
	{
		for (j = i; j < num; j++)
		{
			if (strcmp(myArray[i], myArray[j]) <= 0)
			{
				temp = myArray[i];
				myArray[i] = myArray[j];
				myArray[j] = temp;
			}
		}
	}
	for (i = 0; i < num; i++)
	{
		printf("%s\r\n", myArray[i]);
	}


	return 0;
}