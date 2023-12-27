#include<iostream>
using namespace std;
#include <string>
#include <ctime>

struct student
{
	string sName;
	int score;
};

struct teacher
{
	string tName;
	struct student sArray[5];
};

void allocatespace(struct teacher tArray[],int len)
{
	string nameseed = "ABCDE";
	//给老师开始赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameseed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameseed[j];

			int random = rand() % 61+40;//随机数为40-100
			tArray[i].sArray[j].score = random;
		}
		
	}
}

void printInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师的姓名：" << tArray[i].tName << endl;
		
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName << 
				" 学生考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main1()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	
	//1、创建三名老师的数组
	struct teacher tArray[3];

	//2、通过函数给三名老师的信息赋值，并给所带学生赋值 
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatespace(tArray, len);

	//3、打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");
	return 0;
}