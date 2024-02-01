#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"seqstack.h"
#include"LinkStack.h"
#include"LinkList.h"


//int main()
//{
//	SeqStack* stack = NULL;
//	int a[10];
//	stack = SeqStack_Create(10);
//	int i = 0;
//	if (stack == NULL)
//	{
//		return;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		a[i] = i + 1;
//		SeqStack_Push(stack, &a[i]);
//	}
//
//	printf("Capacity:%d\n", SeqStack_Capacity(stack));
//	printf("Length:%d\n", SeqStack_Size(stack));
//	printf("Toop:%d\n", *((int*)SeqStack_Top(stack)));
//
//	while (SeqStack_Size(stack) > 0)
//	{
//		int temp = *((int*)SeqStack_Pop(stack));
//		printf("temp:%d\r\n", temp);
//	}
//
//}

//int main()
//{
//	int i = 0;
//	int a[10];
//
//	LinkStack* stack = NULL;
//	stack = LinkStack_Create();
//	if (stack == NULL)
//	{
//		return;
//	}
//
//	//添加元素
//	for (i = 0; i < 5; i++)
//	{
//		a[i] = i + 1;
//		LinkStack_Push(stack, &a[i]);
//
//	}
//
//	//获取栈的基本属性
//	printf("length:%d\r\n", LinkStack_Size(stack));
//	printf("Top:%d\r\n", *((int*)LinkStack_Top(stack)));
//
//	//删除栈内元素
//	while (LinkStack_Size(stack) != 0)
//	{
//		int temp = *((int*)LinkStack_Pop(stack));
//		printf("temp:%d\r\n", temp);
//	}
//
//	LinkStack_Destory(stack);
//
//
//	return 0;
//}

//int CheckSymbol(char* str)
//{
//	int ret = 0,i = 0;
//	LinkStack* temp = LinkStack_Create();
//	if (temp == NULL)
//	{
//		ret = -1;
//		printf("func CheckSysbol error:%d\r\n", ret);
//		return ret;
//	}
//	int count = strlen(str);
//	char* left;
//	char* right;
//
//	for (i = 0; i < count; i++)
//	{
//		if (str[i] == '(' || str[i] == '{' || str[i] == '['|| str[i] == '<')
//		{
//			left = &str[i];
//			LinkStack_Push(temp, left);
//		}
//		else if (str[i] == ')' || str[i] == '}' || str[i] == ']' || str[i] == '>')
//		{
//			right = LinkStack_Top(temp);
//
//			if (right == NULL || (str[i] == ')' && *right != '(') || (str[i] == ']' && *right != '[') || (str[i] == '}' && *right != '{') || (str[i] == '>' && *right != '<'))
//			{
//				ret = -2;
//				break;
//			}
//			LinkStack_Pop(temp);
//		}
//		else
//		{
//			continue;
//		}
//	}
//
//	if (LinkStack_Size(temp) != 0)
//	{
//		ret = -2;
//	}
//
//	LinkStack_Destory(temp);
//
//	return ret;
//}
//
//int main()
//{
//	char* string = "include <stdio.h>,int main() {fasfsa()}";
//	int ret = CheckSymbol(string);
//
//	if (ret == -1)
//	{
//		return;
//	}
//	else if (ret == -1)
//	{
//		printf("不对称\r\n");
//	}
//	else
//	{
//		printf("successful\r\n");
//	}
//
//	return 0;
//}

//int ComparePre(char out, char top)
//{
//    // 如果其中一个是'('，另一个不是，则'('的优先级最低
//    if (out == '(' || top == '(') 
//    {
//        return (out == '(' && top == '(') ? 0 : (out == '(' ? -1 : 1);
//    }
//
//    if ((out == '+' || out == '-') && (top == '*' || top == '/'))
//    {
//        return -1; // + 或 - 的优先级小于 * 或 /
//    }
//    else if ((out == '*' || out == '/') && (top == '+' || top == '-'))
//    {
//        return 1; // * 或 / 的优先级大于 + 或 -
//    }
//    else if ((out == '+' || out == '-') && (top == '+' || top == '-'))
//    {
//        return 0; // + 和 - 优先级相同
//    }
//    else if ((out == '*' || out == '/') && (top == '*' || top == '/'))
//    {
//        return 0; // * 和 / 优先级相同
//    }
//
//    return -2; // 至少一个运算符无效
//}
//
//
//char* Suffix(char* str)
//{
//	LinkStack* temp = LinkStack_Create();
//	if (temp == NULL)
//	{
//		printf("func Suffix error\r\n");
//		return NULL;
//	}
//    int ret2;
//	int len = strlen(str);
//	char* ret = (char*)malloc(sizeof(char) * len + 1);
//    if (ret == NULL)
//    {
//        printf("Memory allocation failed for ret\r\n");
//        LinkStack_Destory(temp);
//        return NULL;
//    }
//    int i = 0, j = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '(')
//        {
//            while (LinkStack_Size(temp) != 0)
//            {
//                char* top = LinkStack_Top(temp);
//                ret2 = ComparePre(str[i], *top);
//                if (ret2 == -1)
//                {
//                    ret[j++] = *top;
//                    LinkStack_Pop(temp);
//                }
//                else
//                {
//                    break;
//                }
//            }
//            LinkStack_Push(temp, &str[i]);
//           
//        }
//        else if( str[i] == ')')
//        {
//            char* top = NULL;
//            while (LinkStack_Size(temp) != 0 )
//            {
//                top = LinkStack_Top(temp);
//                LinkStack_Pop(temp);
//                if (*top == '(')
//                {
//                    break;
//                }
//                ret[j++] = *top;
//            }
//        }
//        else
//        {
//            ret[j++] = str[i];
//        }
//    }
//
//    while (LinkStack_Size(temp) != 0)
//    {
//        char* top = LinkStack_Top(temp);
//        LinkStack_Pop(temp);
//        ret[j++] = *top;
//    }
//    ret[j] = '\0';
//
//    LinkStack_Destory(temp);
//    return ret;
//}
//
//int main()
//{
//    char* str1 = "3+5*234/(2+4)";
//    char* str2 = Suffix(str1);
//    if (str2 == NULL)
//    {
//        printf("Memory str2 failed\r\n");
//        return NULL;
//    }
//    printf("%s\r\n", str2);
//
//
//    free(str2);
//    str2 = NULL;
//
//	return 0;
//}