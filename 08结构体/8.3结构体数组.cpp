//#include<iostream>
//using namespace std;
//#include <string>
//
////作用：将自定义的结构体放入数组中方便维护
////语法：struct 结构体名 数组名[元素个数] = { {},{},{}....{}}
//
////结构体定义
//struct Student
//{
//	//成员列表
//	string name; //姓名
//	int age; //年龄
//	int score; //成绩
//};
//
//int main1()
//{
//	//创建结构体数组
//	struct Student stuArray[3] =
//	{
//		{"张三",18,98},
//		{"李四",19,80},
//		{"王五",20,70}
//	};
//
//	// 给结构体数组中的元素赋值
//	stuArray[2].name = "赵六";
//	stuArray[2].age = 44;
//	stuArray[2].score = 60;
//
//	//便利结构体数组
//	for (int i = 0; i < 3; i++)
//	{
//		cout << " 姓名： " << stuArray[i].name 
//			 << " 分数： " << stuArray[i].score 
//			 << " 年龄：" << stuArray[i].age << endl;
//	}
//
//	system("pause");
//	return 0;
//}