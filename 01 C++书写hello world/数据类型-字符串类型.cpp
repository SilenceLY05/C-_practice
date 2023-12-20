#include<iostream>
using namespace std;
#include <string> //用C++字符串的时候，要包含这个头文件

int main7()
{
	//1、C风格的字符串
	//注意事项 char 字符串名 [] 等号后面要用双引号来包裹字符
	char str1[] = "hello world";
    cout << str1 << endl;

	//2、C++风格的字符串
	//包含一个头文件 #include <string>
	string str2 = "hello world";
	cout << str2 << endl;


	system("pause");
	return 0;

}