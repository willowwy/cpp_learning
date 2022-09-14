//#include<iostream>
//using namespace std;
////成员变量和成员函数分开存储
//
//class Person1
//{
//
//};
//
//class Person2
//{
//	int m_A;
//};
//
//class Person3
//{
//	int m_A;
//	static int m_B;
//};
//int Person3::m_B = 1;
//
//class Person4
//{
//	int m_A;
//	void func()
//	{
//		
//	}
//};
//void test01()
//{
//	Person1 p1;
//	//空对象占用内存空间为：1
//	//cpp编译器会对每个空对象也分配一个字节的空间
//	//是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "sizeof p =" << sizeof(p1) << endl;
//}
//
//void test02()
//{
//	Person2 p2;
//	//仅有int的对象占用内存空间为：4
//	cout << "sizeof p =" << sizeof(p2) << endl;
//}
//
//void test03()
//{
//	Person3 p3;
//	//静态成员变量，不属于类对象
//	cout << "sizeof p =" << sizeof(p3) << endl;
//}
//void test04()
//{
//	Person4 p4;
//	//非静态成员函数也不属于类对象
//	cout << "sizeof p =" << sizeof(p4) << endl;
//
//}
//
//int main()
//{
//	test01();
//	cout << "**********************" << endl;
//	test02();
//	cout << "**********************" << endl;
//	test03();
//	cout << "**********************" << endl;
//	test04();
//	cout << "**********************" << endl;
//	system("pause");
//	return 0;
//}