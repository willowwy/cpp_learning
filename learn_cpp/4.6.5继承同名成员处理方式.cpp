////父类与子类同名成员
//#include <iostream>
//using namespace std;
//
////***访问子类：直接访问
////***访问父类：需要加作用域
//
//class Base
//{
//public:
//	int m_A;
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "父类函数" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	int m_A;
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "子类函数" << endl;
//	}
//};
//
////同名成员属性
//void test01()
//{
//	Son so;
//	cout << "子类： " << so.m_A << endl;
//	cout << "父类： " << so.Base::m_A << endl;
//}
//
////同名函数
////子类会屏蔽父类中所有的成员函数 只有加作用域可以访问到
//void test02()
//{
//	Son so;
//	so.func();
//	so.Base::func();
//}
//int main()
//{
//	cout << "---------------同名成员属性---------------" << endl;
//	test01();
//	cout << "---------------同名函数---------------" << endl;
//	test02();
//	system("pause");
//	return 0;
//}