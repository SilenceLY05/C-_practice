#include<iostream>
using namespace std;

//class AbstructDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void Pourincup() = 0;
//
//	//���븨��
//	virtual void Putsomething() = 0;
//
//	//������Ʒ
//	void Makedrink()
//	{
//		Boil();
//		Brew();
//		Pourincup();
//		Putsomething();
//
//	}
//};
//
//class Coffee :public AbstructDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void Pourincup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void Putsomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
//class Tea :public AbstructDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void Pourincup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void Putsomething()
//	{
//		cout << "��������" << endl;
//	}
//};
//
////��������
//void doWork(AbstructDrinking *abs)//AbstructDrinking *abs = new Coffee
//{
//	abs->Makedrink();
//	delete abs;//�ͷ�
//}
//
//void test01()
//{
//	doWork(new Coffee);
//
//	doWork(new Tea);
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}