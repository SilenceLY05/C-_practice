#include<iostream>
using namespace std;

//��Ԫ��Ŀ�ľ�����һ������������ ������һ�����е�˽�г�Ա  �ؼ���friend

//��Ԫ������ʵ�ַ���

//1��ȫ�ֺ�������Ԫ

//2��������Ԫ

//3����Ա��������Ԫ


//������
//class Building
//{
//	//goodgay��ȫ�ֺ����ĺ����� ���Է���building �е�˽�г�Ա
//	friend void goodgay(Building* building);*******
//public:
//	Building()
//	{
//		m_settingroom = "����";
//		m_bedroom = "����";
//	}
//
//public:
//	string m_settingroom;//����
//
//private:
//	string m_bedroom;//����
//};
//
////ȫ�ֺ���
//
//void goodgay(Building *building)
//{
//	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building->m_settingroom << endl;
//
//	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodgay(&building);
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}