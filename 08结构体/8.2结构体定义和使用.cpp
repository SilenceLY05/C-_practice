//#include<iostream>
//using namespace std;
//#include <string>
//
////结构体属于用户自定义的数据类型	，允许用户存储不同的数据类型
////语法：struct 结构体名{结构体成员列表}  自定义数据类型 一些类型的集合组成的一个类型
//
////1、创建学生数据类型：学生包括（姓名 年龄 分数）
//
//struct student
//{
//	//成员列表
//	//姓名
//	string name;
//	//年龄
//	int age;
//	//分数
//	int score;
//}s3; //顺便创建结构体变量
//
////2、通过学生类型创建具体的学生
//
//int main0()
//{
//	//2.1 struct student s1
//	//struct 关键字在C++中可以省略
//	struct student s1;
//	//给s1属性赋值,通过.访问结构体变量中的属性
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 98;
//
//	cout << "姓名：" << s1.name << " 年龄: " << s1.age << " 成绩： " << s1.score << endl;
//    
//	//2.2 struct student s2 = {...}
//	struct student s2 = { "李四",19,90 };
//	cout << "姓名：" << s2.name << " 年龄: " << s2.age << " 成绩： " << s2.score << endl;
//
//    //2.3 在定义结构体时顺便创建结构体变量
//	s3.name = "王五";
//	s3.age = 20;
//	s3.score =88;
//	cout << "姓名：" << s3.name << " 年龄: " << s3.age << " 成绩： " << s3.score << endl;
//
//	system("pause");
//	return 0;
//}