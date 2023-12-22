#include<iostream>
using namespace std;

int main12()
{
	//语法：for(起始表达式；条件表达式；末尾循环体){循环语句；} 0-1-3-2 循环为0123123……
	//作用：满足循环条件，执行循环语句
	
	//从数字0打印到数字9
		for (int a = 0; a < 10; a++)
		{
			cout << a << endl;
	    }
	system("pause");
	return 0;
}