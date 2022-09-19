////++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++
//#include<iostream>
//using namespace std;
//
////对于内置数据类型，编译器知道如何进行运算
//
//class MyInterger
//{
//	friend ostream& operator<<(ostream& cout, MyInterger myint);
//public:
//	MyInterger& operator++ ();
//	MyInterger operator++ (int);
//	MyInterger()
//	{
//		m_Num = 0;
//	}
//
//private:
//	int m_Num;
//};
//
////1.成员函数
//// （1）++ p.operator 前置——返回引用
////必须返回引用本体，否则无法链式编程
//MyInterger& MyInterger::operator++ ()
//{
//	++m_Num;
//	return *this;
//}
//// （2）p.operator++ 后置——返回值
////int作为一个占位参数，可以用来区分后置和前置递增
////需要先记录一个结果后再返回，否则跟前置结果一样
////这就是为啥前置递增比较快！！！
//MyInterger MyInterger::operator++ (int)
//{
//	//因为p是局部变量，所以无法返回引用，会被释放
//	MyInterger p = *this;
//	m_Num++;
//	return p;
//}
//
//
//ostream& operator<<(ostream& cout, MyInterger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInterger myint1;
//	cout << "++myint1  == " << ++myint1 << endl;
//}
//
//void test02()
//{
//	MyInterger myint2;
//	cout << "myint2++  == " << myint2++ << endl;
//	cout << "myint2  == " << myint2 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}