#include <iostream>
using namespace std;
#include<vector>
#include <string>
#include <algorithm>
#include<numeric>

//copy           ������ָ����Χ��Ԫ�ؿ�������һ������
//replace        ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
//replace_if     ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
//swap           ��������������Ԫ��

//copy(beg,end,dest)  ��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
void MyPrint(int val)
{
	cout << val << "  ";
}

//void Test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	vector<int> vTarget;
//	vTarget.resize(v.size());
//
//	copy(v.begin(), v.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), vTarget.end(), MyPrint);
//	cout << endl;
//}

//replace ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��  replace(beg,end,oldvalue,newvalue)  
//�������ھ�Ԫ���滻����Ԫ��  ��ʼ������ ���������� ��Ԫ�� ��Ԫ��
//void Test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//
//	replace(v.begin(), v.end(), 5, 20);
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//}


//replace_if(beg,end,_Pred,newvalue)  �������滻Ԫ�أ������������滻��ָ��Ԫ��
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void Test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//
//	replace_if(v.begin(), v.end(), GreaterFive(), 20);
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//}

//swap(c1,c2) ��������������Ԫ�� 

//void Test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	vector<int> v2;
//	for (int i = 100; i > 90; i--)
//	{
//		v2.push_back(i);
//	}
//
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;
//
//	for_each(v2.begin(), v2.end(), MyPrint);
//	cout << endl;
//
//	cout << "----------------------------" << endl;
//
//	swap(v1, v2);
//
//	for_each(v1.begin(), v1.end(), MyPrint);
//	cout << endl;
//
//	for_each(v2.begin(), v2.end(), MyPrint);
//	cout << endl;
//}


//�������������㷨  ע�⣺���������㷨����С���㷨��ʹ��ʱ����ͷ�ļ�#include<numeric>
//accumulate  ��������Ԫ���ۼ��ܺ�    fill �����������Ԫ��
//accumulate(beg,end,value)  value��ʼ���ۼ�ֵ
//void Test01()
//{
//	vector<int>v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	//����3��һ����ʼ���ۼ�ֵ
//	int ret = accumulate(v.begin(), v.end(), 0);
//	cout << ret << endl;
//}

//fill(beg,end,value)�����������ָ��Ԫ�� 
//void Test01()
//{
//	vector<int>v;
//	for (int i = 0; i <= 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//
//	fill(v.begin(), v.end(), 100);
//	for_each(v.begin(), v.end(), MyPrint);
//	cout << endl;
//}

//���ü����㷨
//set_intersection   �����������Ľ���
//set_union          �����������Ĳ���
//set_difference     �����������Ĳ

//set_intersection(beg1,end1,beg2,end2,dest)

//void Test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> vTarget;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	int num = v1.size() > v2.size() ? v2.size() : v1.size();
//	vTarget.resize(num);
//	//vTarget.resize(min(v1.size(),v2.size()));
//
//	vector<int>::iterator it = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), it, MyPrint);
//	cout << endl;
//	
//}

//set_union(beg1,end1,beg2,end2,dest)  dest Ŀ��������ʼ������   ���������ϵĲ���
//void Test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> vTarget;
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//
//	vTarget.resize(v1.size()+v2.size());
//	//vTarget.resize(min(v1.size(),v2.size()));
//
//	vector<int>::iterator it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//
//	for_each(vTarget.begin(), it, MyPrint);
//	cout << endl;
//}

//set_difference(beg1,end1,beg2,end2,dest)���������ϵĲ destĿ��������ʼ������
void Test01()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> vTarget;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//��������� ��������û�н��� ȡ���������д��size��Ϊ���ٿռ�
	vTarget.resize(max(v1.size(),v2.size()));
	//vTarget.resize(min(v1.size(),v2.size()));

	vector<int>::iterator it = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(vTarget.begin(), it, MyPrint);
	cout << endl;


	vector<int>::iterator it2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());

	for_each(vTarget.begin(), it2, MyPrint);
	cout << endl;
}


int main()
{
	Test01();

	system("pause");
	return 0;
}

