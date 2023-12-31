#include<iostream>
using namespace std;

//多态分为两类：静态多态和动态多态

//静态多态：函数重载和运算符重载属于静态多态，复用函数名

//动态多态：派生类和虚函数实现运行时多态

//静态多态和动态多态的区别

//静态多态的函数地址早绑定 - 编译阶段确定函数地址

//动态多态的函数地址晚绑定 - 运行阶段确定函数地址

//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//
//};
//
////猫类
//class Cat :public Animal
//{
//public:
//	//重写 函数的返回值类型 函数名 参数列表 完全相同
//	//当子类重写父类的虚函数 子类中的虚函数表 内部 会替换成 子类的虚函数地址
//	//当父类的指针或者引用指向子类对象的时候，发生多态
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
////狗类
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//
//};
//
////执行说话函数
////地址早绑定 在编译阶段确定函数地址
////如果想执行让猫说话 那么这个函数的地址就不能提前绑定，需要在运行阶段绑定，地址晚绑定
//
////动态多态满足条件：1、有继承关系  2、子类要重写父类的虚函数
////动态多态使用：父类的指针或者引用来指向子类的对象
//void doSpeak(Animal &animal)//Animal &animal = cat
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "size of Animal = " << sizeof(Animal) << endl;
//}
//
//
//int main()
//{
//
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}