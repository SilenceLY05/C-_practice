//#include<iostream>
//using namespace std;
//#include <string>
//
////结构体指针作用：通过指针访问结构体中的成员
////利用 -> 可以通过结构体指针访问结构体属性
//
////结构体定义
//struct student
//{
//	string name; //姓名
//	int age; //年龄
//	int score; //成绩
//};
//
//int main2()
//{
//	//1、创建学生结构体变量
//	struct student s1 = { "张三" , 18 , 98 };
//
//	//2、通过指针指向结构体变量
//	struct student* p = &s1;
//
//	//3、通过指针访问结构体变量中的数据
//	cout << "姓名：" << p->name << " 年龄：" << p->age << " 成绩：" << p->score << endl;
//
//	system("pause");
//	return 0;
//}