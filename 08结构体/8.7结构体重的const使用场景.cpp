//#include<iostream>
//using namespace std;
//#include <string>
//
////const 使用场景
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//
////将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//
//void printstudent(const student *s)
//{
//	//s->age = 150;   加入const之后一旦有修改的操作就会报错 防止误操作
//	cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数： " << s->score << endl;
//}
//
//int main5()
//{
//	//创建结构体变量
//	struct student s = { "张三",18,90 };
//
//	//通过函数打印结构体变量信息
//	printstudent(&s);
//	cout << "main 函数中的年龄为：" << s.age << endl;
//
//	system("pause");
//	return 0;
//}