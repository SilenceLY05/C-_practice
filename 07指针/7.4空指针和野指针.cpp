#include<iostream>
using namespace std;

/*int main()
{

	//��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
	int* p = NULL;

    //��;����ʼ��ָ�����
    //ע����ָ��ָ����ڴ��ǲ����Է��ʵ�
	//0-255֮����ڴ�����ϵͳռ�õģ���˲����Է���
	*p = 100;

	system("pause");
	return 0;
}*/

int main2()
{
	//Ұָ��
	//ָ�����pָ���ڴ��ַ���0x1100�ռ�
	int* p = (int*)0x1100;

	//����Ұָ�뱨��
	cout << *p << endl;

	system("pause");
	return 0;
}