////函数名相同，提高复用性
////条件：
////1.同一个作用于下
////2.函数名称相同
////3.函数参数类型不同、个数不同、顺序不同
////Attention!!!函数返回值不可以作为函数重载的条件
//
//#include <iostream>
//using namespace std;
////*********************************************************
//void func()
//{
//	cout << "func的调用！" << endl;
//}
//
////void func(int a)
////{
////	cout << "func(int a)的调用！" << endl;
////}
//
//void func(int a, double b)
//{
//	cout << "func(int a，double b)的调用！" << endl;
//}
////*********************************************************
////常量
//void func(int& a)
//{
//	cout << "func(int& a)的调用！" << endl;
//}
//
//void func(const int& a)
//{
//	cout << "func(const int a)的调用！" << endl;
//}
////*********************************************************
////函数重载碰到默认参数,会出现二义性，需要尽量避免默认参数
//void func2(int a, int b=10)
//{
//	cout << "func(int a,int b)的调用！" << endl;
//}
//void func2(int a)
//{
//	cout << "func(int a)的调用！" << endl;
//}
////*********************************************************
//int main()
//{
//	func(1);
////	func2(2);
//	system("pause");
//	return 0;
//}