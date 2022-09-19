////() () () () ()仿函数
//#include<iostream>
//#include <string>
//using namespace std;
//
////打印输出类
//class MyPrint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << "test重载：" << test << endl;
//	}
//};
//
//void test01()
//{
//	//由于使用起来非常类似于函数调用
//	//故称为仿函数，非常灵活，没有固定写法
//	MyPrint myprint;
//	myprint("hello world");
//	return;
//}
//void test02(string test)
//{
//	cout << "test02:  " << test << endl;
//	//创建了一个匿名函数对象，可以不用创建函数实体
//	MyPrint()("123");
//}
//
//int main()
//{
//	test01();
//	test02("hello world2");
//	system("pause");
//	return 0;
//}