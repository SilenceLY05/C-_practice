#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include<stdio.h>
#include <stdlib.h>


//int main()
//{
//	int a;
//	int b;
//
//	char buff[128];//����ջ���ڳ����buffer���ڴ��ַ+1��Զ����
//	//���� ��ʱ��buffer��������ڴ�ռ�ı�ž��Ѿ�����������
//
//	printf("&a : %d,&b:%d", &a, &b);//��win32�£�b�ĵ�ַ��a��С��ջ�Ŀ��ڳ��£�win64ʱ��b�ĵ�ַ��a��ջ�Ŀ��ڳ���
//	//һ����Ϊ���ڳ���
//	return 0;
//}

//main()->fa()->fb()  
//main�����п�����ջ�Ϸ����ڴ棬�����ڶ��Ϸ����ڴ棬ȫ���������ڴ棬 ���Ա�fa fbʹ��
//fb������ڴ棬���Ա�main����ʹ����  1.fb����ջ�Ϸ�����ڴ棬���ܱ�fa��main����ʹ��  2.fb��malloc���ڴ�(��)����
//��main��faʹ��   3.fb��ȫ��������"abcdef"���ڴ���Ա�fa��main����ʹ��


////*p�ڵȺŵ�����൱�����ڴ�ռ�дֵ���ڵȺ��ұ��൱�ڴ��ڴ�ռ�ȡֵ
//int main()
//{
//	int a = 10;
//	char* p1 = 100;//�����ĸ��ֽ��ڴ�
//
//	printf("a:%d,p1:%d", sizeof(a),sizeof(p1));
//	int* p2 = NULL;
//	p2 = &a;
//	*p2 = 200;//����޸�a��ֵ
//	printf("a = %d", *p2);
//
//	int c = 0;
//	c = *p2;
//	printf("c = %d", c);
//
//	char* p3 = NULL;
//	p3 = (char*)malloc(sizeof(char) * 100);//���ϵظ�ָ�븳ֵ�൱�ڲ��ϵĸı�ָ���ָ��
//
//
//
//
//
//	return 0;
//}

////��֤��ָ����ڴ���ܹ��޸�
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

//ָ������������ �β��ж༶ָ���ʱ��  վ�ڱ������Ƕȣ�ֻ��Ҫ����4���ֽڵ��ڴ棬ʹ��ʱ�Ź�����һά���Ƕ�ά
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
//	char buf[128];//������ջ�Ϸ����ڴ�
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
////ֻ�ܷ���һ�����
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
//	//�޸�a��ֵ
//	a = 20;//ֱ���޸�
//
//	p = &a;
//	*p = 30;//p��ֵ��a�ĵ�ַ�� *����һ��Կ�� ͨ����ַ �ҵ�һ���ڴ�ռ� ��ӵ��޸���a��ֵ
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
//	//ֱ���޸�p1ֵ
//	p1 = 0x111;
//
//	//����޸�p1
//	p2 = &p1;
//	*p2 = 100;//������ֵ  p2��p1�ĵ�ַ 
//
//	printf("p1:%d", p1);
//
//	return 0;
//}

//��Ӹ�ֵ������������1.����1������(ʵ��)����1������(�β�)  2.������������ʵ��ȡ��ַ�����β�  3.�β�ȥ��ӵ��޸���ʵ�ε�ֵ
//Ӧ�ó�����123��д��һ�������� 12д��һ��������3ж������һ�������� 1д��һ�������23д��һ��������

//һ��ָ��ĵ����÷� ���� �ַ���
//C�����ַ��������β���ַ���  C������û���ַ�����ͨ���ַ�����ģ���ַ���
//�ַ������ڴ���䣺 ���� ջ�� ȫ����

//�ַ�����
int main()
{
	////1ָ������
	//char buff1[100] = { 'a', 'b', 'c' };//������Զ���0
	////char buff1[2] = { 'a', 'b', 'c' };�����ʼ���ĸ��������ڴ�ĸ��� �������

	////2��ָ������
	//char buff2[] = { 'a', 'b', 'c' };//��һ�����飬����һ����0��β���ַ���

	char buff[] = "abdcdg";//��Ϊ�ַ�����Ӧ����7���ֽ� ��Ϊ�ַ���Ӧ����6���ֽ�

	int len = strlen(buff);//6 ���� ������0
	int size = sizeof(buff);//7 �ڴ���С
	printf("len:%d,size:%d", len, size);

	return 0;
}