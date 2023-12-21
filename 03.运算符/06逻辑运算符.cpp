#include<iostream>
using namespace std;

int main6()
{
	//逻辑运算符 非 ！ 在C++中 除了0 都为真

	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	//逻辑运算符 与 &&  两个条件都为真结果才为真
	int a1 = 10;
	int b1 = 10;
	cout << (a1 && b1) << endl;

	a1 = 10;
	b1 = 0;
	cout << (a1 && b1) << endl;

	//逻辑运算符 或|| 同假则假，其余为真
	int a2 = 10;
	int b2 = 10;
	cout << (a2 || b2) << endl;

	a2 = 10;
	b2 = 0;
	cout << (a2 || b2) << endl;

	a2 = 0;
	b2 = 0;
	cout << (a2 || b2) << endl;
	system("pause");
	return 0;
}