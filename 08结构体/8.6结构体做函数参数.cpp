//#include<iostream>
//using namespace std;
//#include <string>
//
////�ṹ�����������������ṹ����Ϊ���������д���
////���ݷ�ʽ��ֵ���ݡ���ַ����   ֵ���������ββ���ı�ʵ�Σ���ַ���������βλ�ı�ʵ��
//
//struct student
//{
//	string name;
//	int age;
//	int score;	
//};
//
////��ӡѧ����Ϣ����
////1��ֵ����
//void printstudent1(struct student s)
//{
//	s.age = 100;
//	cout << "�Ӻ����� ������" << s.name << " ���䣺" << s.age << " �ɼ���" << s.score << endl;
//}
//
////2����ַ����
//void printstudent2(struct student* p)
//{
//	p->age = 100;
//	cout << "�Ӻ����� ������" << p->name << " ���䣺" << p->age << " �ɼ���" << p->score << endl;
//}
//
//int main4()
//{
//	//��ѧ�����뵽һ�������У���ӡѧ���������е���Ϣ
//
//	//�����ṹ�����
//	struct student s;
//	s.name = "����";
//	s.age = 18;
//	s.score = 100;
//
//	printstudent1(s);
//	printstudent2(&s);
//	cout << "main �����д�ӡ ������" << s.name << " ���䣺" << s.age << " �ɼ���" << s.score << endl;
//
//	system("pause");
//	return 0;
//}