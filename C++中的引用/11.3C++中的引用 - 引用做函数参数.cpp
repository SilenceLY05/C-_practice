#include<iostream>
using namespace std;

//引用做函数参数作用：函数传参时，可以利用引用的技术让形参修饰实参
//优点：可以简化指针修改实参

//交换函数

//1、值传递
void mySwap01(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01 a= " << a << endl;
	cout << "swap01 b= " << b << endl;
}

//2、地址传递
void mySwap02(int*a,int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3、引用传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

}

int main2()
{
	int a = 10;
	int b = 20;
	//mySwap01(a,b);//值传递 形参不回修饰实参
	//mySwap02(&a, &b);//地址传递， 形参会修饰实参
	mySwap03(a, b);//引用传递，形参会修饰实参


	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	system("pause");
	return 0;
}