//#include<iostream>
//using namespace std;
//#include <string>
//
////结构中的成员可以是另一个结构体
//
////学生结构体定义
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////老师结构体定义
//struct teacher
//{
//	string name;
//	int id;
//	int age;
//	struct student stu;
//};
//
//int main3()
//{
//	
//	teacher t;
//	t.name = "老王";
//	t.age = 50;
//	t.id = 10000;
//	t.stu.name = "小王";
//	t.stu.age = 15;
//	t.stu.score = 89;
//
//	cout << "老师姓名：" << t.name << " 老师年龄： " << t.age << " 老师编号：" << t.id
//		<< " 老师辅导学生姓名：" << t.stu.name << " 老师辅导学生年龄：" << t.stu.age << " 老师辅导学生成绩：" << t.stu.score << endl;
//
//
//	system("pause");
//	return 0;
//}