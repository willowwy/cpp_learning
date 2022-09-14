////静态成员函数：
//	//·所有对象共享同一个函数
//	//·静态成员函数只能访问静态成员变量
//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//静态成员函数
//	static void func()
//	{
//		//m_A = 200;//静态成员函数不可以访问 非静态成员变量 （无法区分是哪个对象的m_A）
//		m_B = 100;//静态成员函数可以访问 静态成员变量
//		cout << "static void func 调用" << endl;
//	}
//
//private:
//	int m_A;		//非静态成员变量
//	static int m_B;//私人作用域的静态变量
//	static void pri_func()
//	{
//		cout << "私有作用域的静态函数" << endl;
//		return;
//	}
//};
//
////两种访问方式，不需要创建对象也可以直接访问
//
//void test01()
//{
//	//1、通过对象访问
//	Person p;
//	p.func();
//	//2、通过类名访问
//	Person::func();
//	//Person::pri_func();类外访问不到私有静态成员变量
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//
//
//
