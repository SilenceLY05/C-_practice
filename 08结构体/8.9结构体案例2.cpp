#include<iostream>
using namespace std;
#include <string>

//设计英雄结构体
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
			//如果j下标的元素年龄大于j+1 则交换两个元素
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] =  temp;
			}
		}
	}
}

//打印排序后数组中的信息
void printhero(struct hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age << " 性别：" << heroArray[i].sex << endl;
	}
}

int main()
{
	//创建数组存放5名英雄
	struct hero heroArray[5] =
	{
		{"刘备",23 ,"男"},
		{"关羽",22 ,"男"},
		{"张飞",20 ,"男"},
		{"赵云",21 ,"男"},
		{"貂蝉",19 ,"女"},
	};

	cout << "排序后打印：" << endl;
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age << " 性别：" << heroArray[i].sex << endl;
	}

	//对数组进行排序，按照年龄进行升序排序
	bubblesort(heroArray, len);
	
	cout << "排序后打印：" << endl;
	//将排序后的结构打印输出
	printhero(heroArray, len);
	

	system("pause");
	return 0;
}