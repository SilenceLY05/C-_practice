#include<iostream>
using namespace std;

int main()
{
	//goto��䣺��������ת���
	cout << "1��XXXXX" << endl;

	cout << "2��XXXXX" << endl;

	cout << "3��XXXXX" << endl;
	goto FLAG;
	cout << "4��XXXXX" << endl;

	cout << "5��XXXXX" << endl;
	FLAG:
	cout << "6��XXXXX" << endl;

	system("pause");
	return 0;
}