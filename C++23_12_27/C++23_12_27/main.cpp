#include <iostream>
using namespace std;


////������Ĭ�ϲ������������β��б��е��β��ǿ�����Ĭ��ֵ��
////��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
//int func(int a, int b = 10, int c = 10)
//{
//	return a + b + c;
//}
//
//
////���ĳ��λ���β���Ĭ��ֵ����ô�����λ�����󣬴����ұ��붼Ҫ��Ĭ��ֵ
////�������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���,������ʵ��ֻ����һ����Ĭ�ϲ���
//int func2(int a = 20, int b = 10);
//
//int func2(int a = 10, int b = 20)
//{
//	return a + b;
//}
//
//int main()
//{
//	int ref = func(10, 20);
//	cout << ref << endl;
//
//	system("pause");
//	return 0;
//}


////����ռλ�������������β��б��������ռλ������������ռλ�����ú���ʱ���������λ��
////ռλ������������Ĭ�ϲ���
////�﷨������ֵ���� ���������������ͣ�{}
//
//void func(int a, int = 10)
//{
//	cout << "this is func" << endl;
//}
//
//
//int main()
//{
//	func(10);  //ռλ���������,���ռλ������Ĭ��ֵ������Ҫ�
//
//	system("pause");
//	return 0;
//}


////�������ظ�����������������ͬ����߸�����
////������������������ͬһ���������£�����������ͬ�������������Ͳ�ͬ���߸�����ͬ����˳��ͬ
////ע�������ķ���ֵ��������Ϊ�������ص�����
//
//
////��ͬһ����������
//void func(int a, int b)
//{
//	cout << "func1�ĵ���" << endl;
//}
//
//void func(int a, int b,int c)
//{
//	cout << "func2�ĵ���" << endl;
//}
//
//int main()
//{
//	func(1, 2, 3);
//
//	system("pause");
//	return 0;
//}


//������������ע�����������Ϊ��������   
void func(int& a) //int &a = 10;����ͨ�������Ϸ���
{
	cout << "func(int&a)����" << endl;
}


void func(const int& a) //const int&a = 10;�Ϸ�
{
	cout << "func(const int&a)����" << endl;
}



//����������������Ĭ�ϲ���
void func2(int a,int b = 10)
{
	cout << "func2(int a,int b)" << endl;
}

void func2(int a)
{
	cout << "func2(int a)" << endl;
}


int main()
{
	//int a = 10;
	//func(a);

	//func(10);
	func2(10);//��������������Ĭ�ϲ��������ֶ�����,�������������������

	system("pause");
	return 0;
}