#include <iostream>
using namespace std;



////语法：new 数据类型 利用new创建的数据，会返回该数据对应的类型的指针
//int* func()
//{
//	//利用new关键字可以在堆区开辟数据
//
//	int* a = new int(10);
//	return a;
//}
//
//void test01()
//{
//	//堆区的数据由程序员管理和释放
//	//如果想释放利用关键字delete
//	int* p = func();
//	cout << *p << endl;
//	delete p;
//}
//
//
////在堆区利用new开辟数组
//void test02()
//{
//	//创建10个整型数据的数组，在堆区
//	int* arr = new int[10];//10代表数组有10个元素
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 100;
//	}
//
//	for(int i = 0;i<10;i++)
//	{
//		cout << arr[i] << endl;
//	} 
//
//	//释放堆区数组  要加[]才行
//	delete[] arr;
//}
//
//int main()
//{
//	//在堆区开辟数据
//	
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//引用：给变量起别名
//数据类型 &别名 = 原名
//引用必须初始化
//引用在初始化后，不可以改变

//int main()
//{
//	//int a = 10;
//	//int& b = a;
//
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//	//cout << "a地址 = " << &a << endl;
//	//cout << "b地址 = " << &b << endl;
//
//	//b = 100;
//
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//
//	int a = 10;
//	int b = 20;
//
//	//int &c;//错误，引用必须初始化
//	int& c = a;//一旦初始化后，就不可以再改
//	c = b;//这里赋值操作，不是更改引用
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	system("pause");
//	return 0;
//}



////引用做函数参数:函数传参时，可以利用引用的技术让形参修饰实参  简化指针修改实参
//
////值传递
//void MySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////地址传递
//void MySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////引用传递
//void MySwap03(int &a,int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	MySwap01(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	MySwap02(&a, &b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	MySwap03(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	system("pause");
//	return 0;
//}


////引用做函数的返回值  注：不要返回局部变量引用 用法：函数调用作为左值
//
//int& test01(void)
//{
//	int a = 10;
//	return a;
//}
//
//int& test02(void)
//{
//	static int a = 20;
//	return a;
//}
//
//
//int main()
//{
//	//int a = 30;
//	//test02() = a;
//	//cout << "test02 = " << test02() << endl;
//
//	int &ref = test02();
//	cout << "ref = " << ref << endl;
//
//	test02() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
//	cout << "ref = " << ref << endl;
//
//	system("pause");
//	return 0;
//}



////引用的本质在C++内部实现是一个指针常量
//
////发现是引用，转换为int* const ref = &a;
//void func(int& ref)
//{
//	ref = 100;//ref是引用，转换为*ref = 100
//}
//
//
//int main()
//{
//	int a = 10;
//
//	//自动转换为int* const ref = &a;指针常量是指针指向不可改，也说明为什么引用不可以更改
//	int& ref = a;
//	ref = 20;//内部发现ref是引用，自动帮我们转换成：*ref = 20;
//
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//
//	func(a);
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//
//	system("pause");
//	return 0;
//}




//常量引用：修饰形参，防止误操作

//引用使用场景，通常用来修饰形参
void ShowValue(const int& a)
{
	//a+= 10;
	cout << a << endl;
}


int main()
{
	//int &ref = 10;引用本身需要一个合法的内存空间，因此这行错误
	//加入const就可以了，编译器优化代码int temp = 10;const int& ref = temp;
	//const int& ref = 10;
	//ref = 20;//加入const之后变为只读，不可修改

	int a = 100;

	ShowValue(a);


	system("pause");
	return 0;
}
