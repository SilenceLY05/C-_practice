#include<iostream>
using namespace std;
#include <string>

//���Ӣ�۽ṹ��
struct hero
{
	string name;
	int age;
	string sex;
	
};

void bubblesort(struct hero heroArray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j�±��Ԫ���������j+1 �򽻻�����Ԫ��
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] =  temp;
			}
		}
	}
}

//��ӡ����������е���Ϣ
void printhero(struct hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�" << heroArray[i].sex << endl;
	}
}

int main()
{
	//����������5��Ӣ��
	struct hero heroArray[5] =
	{
		{"����",23 ,"��"},
		{"����",22 ,"��"},
		{"�ŷ�",20 ,"��"},
		{"����",21 ,"��"},
		{"����",19 ,"Ů"},
	};

	cout << "������ӡ��" << endl;
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�" << heroArray[i].sex << endl;
	}

	//������������򣬰������������������
	bubblesort(heroArray, len);
	
	cout << "������ӡ��" << endl;
	//�������Ľṹ��ӡ���
	printhero(heroArray, len);
	

	system("pause");
	return 0;
}