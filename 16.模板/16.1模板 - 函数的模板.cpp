#include<iostream>
using namespace std;


//void swapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////�������������͵ĺ���
//void swapDouble(double &a, double &b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ��
//template<typename T>//����һ��ģ�壬���߱���������Ĵ����н����ŵ�T��Ҫ����T��һ��ͨ�õ���������
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a,b);
//	//���ú���ģ����н���
//	//�����ַ�ʽʹ�ú���ģ��
//	//1���Զ������Ƶ�
//	//mySwap(a, b);
//
//	//2����ʾָ������
//	mySwap<int>(a, b);
//
//
//
//	cout << "a=" << a << endl;
//	cout << "b= " << b << endl;
//
//	double c = 2.12;
//	double d = 3.33;
//	//mySwap(c, d);
//	//swapDouble( c, d);
//	cout << "c= " << c << endl;
//	cout << "d=" << d << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}