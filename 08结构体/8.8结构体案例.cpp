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
	//����ʦ��ʼ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameseed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameseed[j];

			int random = rand() % 61+40;//�����Ϊ40-100
			tArray[i].sArray[j].score = random;
		}
		
	}
}

void printInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ��������" << tArray[i].tName << endl;
		
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].sName << 
				" ѧ�����Է�����" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main1()
{
	//���������
	srand((unsigned int)time(NULL));
	
	//1������������ʦ������
	struct teacher tArray[3];

	//2��ͨ��������������ʦ����Ϣ��ֵ����������ѧ����ֵ 
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatespace(tArray, len);

	//3����ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");
	return 0;
}