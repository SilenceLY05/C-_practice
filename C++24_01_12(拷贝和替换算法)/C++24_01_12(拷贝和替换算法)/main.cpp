#include <iostream>
using namespace std;
#include<vector>
#include <string>
#include <algorithm>
#include<numeric>

//copy           容器内指定范围的元素拷贝到另一容器中
//replace        将容器内指定范围的旧元素修改为新元素
//replace_if     容器内指定范围满足条件的元素替换为新元素
//swap           互换两个容器的元素

//copy(beg,end,dest)  按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
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

//replace 将容器内指定范围的旧元素修改为新元素  replace(beg,end,oldvalue,newvalue)  
//将区间内旧元素替换成新元素  开始迭代器 结束迭代器 旧元素 新元素
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


//replace_if(beg,end,_Pred,newvalue)  按条件替换元素，满足条件的替换成指定元素
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

//swap(c1,c2) 互换两个容器的元素 

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


//常用算术生成算法  注意：算术生成算法属于小型算法，使用时包含头文件#include<numeric>
//accumulate  计算容器元素累计总和    fill 向容器中添加元素
//accumulate(beg,end,value)  value起始的累加值
//void Test01()
//{
//	vector<int>v;
//	for (int i = 0; i <= 100; i++)
//	{
//		v.push_back(i);
//	}
//
//	//参数3是一个起始的累加值
//	int ret = accumulate(v.begin(), v.end(), 0);
//	cout << ret << endl;
//}

//fill(beg,end,value)向容器中填充指定元素 
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

//常用集合算法
//set_intersection   求两个容器的交集
//set_union          求两个容器的并集
//set_difference     求两个容器的差集

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

//set_union(beg1,end1,beg2,end2,dest)  dest 目标容器开始迭代器   求两个集合的并集
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

//set_difference(beg1,end1,beg2,end2,dest)求两个集合的差集 dest目标容器开始迭代器
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

	//最特殊情况 两个容器没有交集 取两个容器中大的size作为开辟空间
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

