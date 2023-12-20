#include<iostream>
using namespace std;
#include<string>

int main()
{
	//1、整形
	//int a = 0;
	//cout << "请给整形变量a赋值：" << endl;
	//cin >> a;
	//cout << "整形变量a = " << a << endl;
	////2、浮点型
	//float f = 3.14f;
	//cout << "请给浮点型变量f赋值：" << endl;
	//cin >> f;
	//cout << "浮点型变量f = " << f << endl;

	////3、字符型
	//char ch = 'a';
	//cout << "请给字符型ch赋值：" << endl;
	//cin >> ch;
	//cout << "字符型变量ch = " << ch << endl;
	//cout << (int)ch << endl;
	//4、字符串型
	/*char str[] = "hello world";
	cout << "请给字符串类型str新的文本：" << endl;
	cin >> str;
	cout << "字符串str = " << str << endl;*/
	//5、布尔型
	bool flag = false;
	cout << "请给bool形flag赋值" << endl;
	cin >> flag;//布尔类型只要输入不是0都是真
	cout << "布尔型flag = " << flag << endl;

	system("pause");
	return 0;

}