#include <iostream>
using namespace std;



////�﷨��new �������� ����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
//int* func()
//{
//	//����new�ؼ��ֿ����ڶ�����������
//
//	int* a = new int(10);
//	return a;
//}
//
//void test01()
//{
//	//�����������ɳ���Ա������ͷ�
//	//������ͷ����ùؼ���delete
//	int* p = func();
//	cout << *p << endl;
//	delete p;
//}
//
//
////�ڶ�������new��������
//void test02()
//{
//	//����10���������ݵ����飬�ڶ���
//	int* arr = new int[10];//10����������10��Ԫ��
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
//	//�ͷŶ�������  Ҫ��[]����
//	delete[] arr;
//}
//
//int main()
//{
//	//�ڶ�����������
//	
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}

//���ã������������
//�������� &���� = ԭ��
//���ñ����ʼ��
//�����ڳ�ʼ���󣬲����Ըı�

//int main()
//{
//	//int a = 10;
//	//int& b = a;
//
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//	//cout << "a��ַ = " << &a << endl;
//	//cout << "b��ַ = " << &b << endl;
//
//	//b = 100;
//
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//
//	int a = 10;
//	int b = 20;
//
//	//int &c;//�������ñ����ʼ��
//	int& c = a;//һ����ʼ���󣬾Ͳ������ٸ�
//	c = b;//���︳ֵ���������Ǹ�������
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	system("pause");
//	return 0;
//}



////��������������:��������ʱ�������������õļ������β�����ʵ��  ��ָ���޸�ʵ��
//
////ֵ����
//void MySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////��ַ����
//void MySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////���ô���
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


////�����������ķ���ֵ  ע����Ҫ���ؾֲ��������� �÷�������������Ϊ��ֵ
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
//	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//	cout << "ref = " << ref << endl;
//
//	system("pause");
//	return 0;
//}



////���õı�����C++�ڲ�ʵ����һ��ָ�볣��
//
////���������ã�ת��Ϊint* const ref = &a;
//void func(int& ref)
//{
//	ref = 100;//ref�����ã�ת��Ϊ*ref = 100
//}
//
//
//int main()
//{
//	int a = 10;
//
//	//�Զ�ת��Ϊint* const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò����Ը���
//	int& ref = a;
//	ref = 20;//�ڲ�����ref�����ã��Զ�������ת���ɣ�*ref = 20;
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




//�������ã������βΣ���ֹ�����

//����ʹ�ó�����ͨ�����������β�
void ShowValue(const int& a)
{
	//a+= 10;
	cout << a << endl;
}


int main()
{
	//int &ref = 10;���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬������д���
	//����const�Ϳ����ˣ��������Ż�����int temp = 10;const int& ref = temp;
	//const int& ref = 10;
	//ref = 20;//����const֮���Ϊֻ���������޸�

	int a = 100;

	ShowValue(a);


	system("pause");
	return 0;
}
