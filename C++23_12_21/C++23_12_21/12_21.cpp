#include <iostream>
using namespace std;
#include <ctime>


//int main()
//{
//
//	//int pig1 = 0;
//	//int pig2 = 0;
//	//int pig3 = 0;
//
//	//cout << "请输入三只小猪的体重：" << endl;
//	//cin >> pig1;
//	//cin >> pig2;
//	//cin >> pig3;
//
//	//if (pig1 > pig2)
//	//{
//	//	if (pig1 > pig3)
//	//	{
//	//		cout << "小猪1最重" << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << "小猪3最重" << endl;
//	//	}
//	//}
//	//else
//	//{
//	//	if (pig2 > pig3)
//	//	{
//	//		cout << "小猪2最重" << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << "小猪3最重" << endl;
//	//	}
//	//}
//	srand((unsigned int)time(NULL));
//
//	int num = rand() % 100 + 1; //生成1~100的随机数
//	//cout << num << endl;
//
//	int guss = 101;
//
//	while (1)
//	{
//		cin >> guss;
//		if (guss > num)
//			cout << "猜测过大！" << endl;
//		else if (guss < num)
//			cout << "猜测过小！" << endl;
//		else
//		{
//			cout << "恭喜你 猜对了！" << endl;
//			break;
//		}
//			
//	}
//	
//
//	system("pause");
//	return 0;
//}



//int main()
//{
	//int num = 100;
	//do
	//{
	//	int a = num / 100;//百位
	//	int b = (num / 10) % 10;//十位
	//	int c = num % 10;//个位
	//	if ((pow(a, 3) + pow(b, 3) + pow(c, 3)) == num)
	//	{
	//		cout << num << endl;
	//	}
	//	num++;
	//} while (num < 1000);
	//for (int i = 1; i <= 100; i++)
	//{
	//	if ( i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
	//	{
	//		cout << "敲桌子" << endl;
	//	}
	//	else
	//	{
	//		cout << i << endl;
	//	}
	//}

	//for (int i = 1; i < 10; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << i << " x " << j << " = " << i * j<<" ";
	//	}
	//	cout << endl;
	//}

	//cout << "请选择副本难度" << endl;
	//cout << "1.普通" << endl;
	//cout << "2.中等" << endl;
	//cout << "3.困难" << endl;

	//int select = 0;

	//cin >> select;

	//switch (select)
	//{
	//case 1:
	//	cout << "您选择的的普通难度" << endl;]
	//	break;
	//case 2:
	//	cout << "您选择的的中等难度" << endl; ]
	//	break;
	//case 3:
	//	cout << "您选择的的困难难度" << endl; ]
	//	break;
	//default:
	//	cout << "选择错误，重新选择" << endl;
	//	break;
	//}

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//	if (i == 5)
	//		break;
	//}

//	for (int i = 0; i < 100; i++)
//	{
//	
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//		cout << i << endl;
//
//	}
//
//	system("pause");
//	return 0;
//}

//void BubbleSort(int* arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//
//int main()
//{
	//int arr[5] = { 300,350,200,400,250 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//int max = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	
	//	if (arr[i] > max)
	//		max = arr[i];
	//}
	//cout << max << endl;
	//int temp = 0;
	//int arr[5] = { 1,2,3,4,5 };
	//int size = sizeof(arr) / sizeof(arr[0]);

	//int start = 0;
	//int end = size - 1;
	//while (start < end)
	//{
	//	temp = arr[start];
	//	arr[start] = arr[end];
	//	arr[end] = temp;
	//	start++;
	//	end--;
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << endl;
	//}


	/*int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << endl;
	}*/

	/*int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
		cout << sum << endl;
	}*/

	//int a = 10;
	//int b = 20;

	////常量指针：指针的指向可以修改，指针指向的值不可以改
	//const int* p1 = &a;
	//*p1 = 100;
	//p1 = &b;
	//cout << *p1 << endl;

	////指针常量：指针的指向不可以修改，指针指向的值可以改
	//int* const p2 = &a;
	//*p2 = 100;
	//p2 = &b;
	//cout << *p2 << endl;

	////指针的指向和指针指向的那个值都不可以改
	//const int* const p3 = &a;
	//*p3 = 100;
	//p3 = &b;

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = arr;
	//while (p <= &arr[9])
	//{
	//	cout << *p << endl;
	//	p++;
	//}


	//int arr[10] = { 3,2,4,6,1,8,7,9,5,0 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//BubbleSort(arr, size);
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr[i] << endl;
	//}


//	system("pause");
//	return 0;
//}


struct Student
{
	string name;
	int age;
	int score;
};


struct teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};


int main()
{
	//struct Student s1 = { "张三",15,100 };
	//cout << "姓名："<<s1.name << "  年龄：" << s1.age << "  分数："<<s1.score << endl;

	//struct Student arr[3] =
	//{
	//	{ "张三",15,100 },
	//	{ "李四", 16, 99 },
	//	{ "王五", 17, 98 }
	//};

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "姓名：" << arr[i].name 
	//		 << "  年龄：" << arr[i].age 
	//		 << "  分数：" << arr[i].score << endl;
	//}

	//struct Student s1 = { "张三",18,100 };

	//struct Student* ps = &s1;
	//	cout << "姓名：" << ps->name
	//	 << "  年龄：" << ps->age
	//	 << "  分数：" << ps->score << endl;

	struct teacher t1;
	t1.id = 001;
	t1.age = 34;
	t1.name = "张老师";
	t1.stu.name = "李四";
	t1.stu.age = 12;
	t1.stu.score = 99;


	system("pause");
	return 0;
}


