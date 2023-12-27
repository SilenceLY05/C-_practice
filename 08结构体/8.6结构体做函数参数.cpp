//#include<iostream>
//using namespace std;
//#include <string>
//
////结构体做函数参数：将结构体作为参数向函数中传递
////传递方式：值传递、地址传递   值传递修饰形参不会改变实参，地址传递修饰形参会改变实参
//
//struct student
//{
//	string name;
//	int age;
//	int score;	
//};
//
////打印学生信息函数
////1、值传递
//void printstudent1(struct student s)
//{
//	s.age = 100;
//	cout << "子函数中 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;
//}
//
////2、地址传递
//void printstudent2(struct student* p)
//{
//	p->age = 100;
//	cout << "子函数中 姓名：" << p->name << " 年龄：" << p->age << " 成绩：" << p->score << endl;
//}
//
//int main4()
//{
//	//将学生传入到一个参数中，打印学生身上所有的信息
//
//	//创建结构体变量
//	struct student s;
//	s.name = "张三";
//	s.age = 18;
//	s.score = 100;
//
//	printstudent1(s);
//	printstudent2(&s);
//	cout << "main 函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;
//
//	system("pause");
//	return 0;
//}