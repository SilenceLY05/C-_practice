#include<iostream>
using namespace std;
#include <string>

//�����������������Ҳ�������أ����غ�ʹ�÷�ʽ�ǳ��������ã���Ϊ�º���

//class Myprint
//{
//public:
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//
//};
//
//void test01()
//{
//	Myprint myprint;
//
//	myprint("hello world");//hello world���� string test�е� test ���ӡ���
//	
//
//}
//
////�º����ǳ���û�й̶���д��
////�ӷ���
//class Myadd
//{
//public:
//
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	Myadd myadd;
//	int ret = myadd(12, 20);
//	cout << "��ӽ��Ϊ��" << ret << endl;
//
//	//������������
//	cout << Myadd()(100, 12) << endl;
//
//}
//
//int main()
//{
//
//	test02();
//	system("pause");
//	return 0;
//}