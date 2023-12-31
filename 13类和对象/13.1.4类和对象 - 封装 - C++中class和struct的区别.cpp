#include<iostream>
using namespace std;

//class默认权限为私有
class C1
{
	int m_A;//默认权限 是私有
 };

//struct默认权限为公共
struct C2
{
	int m_A;//默认权限 是公共
};

int main3()
{
	C1 c1;
	//c1.m_A = 100;//在class中默认的权限为私有权限，因此不可以访问

	C2 c2;
	c2.m_A = 100;//在struct中默认的权限为公共权限，因此可以访问
	system("pause");
	return 0;
}