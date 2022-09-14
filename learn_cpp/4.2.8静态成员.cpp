////静态成员变量：
//	//·所有对象共享同一份数据
//	//·在编译阶段分配内存
//	//·类内声明，类外初始化
//
//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	static int m_A;
//	
//private:
//	static int m_B;//私人作用域的静态变量
//};
//
//
//int Person::m_A = 100;//类内声明，类外初始化
//int Person::m_B = 200;
//
//void test01()
//{
//	Person p; 
//	cout << p.m_A << endl;
//}
//void test02()
//{
//	//静态成员变量 不属于某个对象 所有对象共享同一份数据
//	//因此 静态成员有两种访问方式
//
//	//1.通过对象进行访问
//	Person p;
//	cout << p.m_A << endl;
//
//
//	//2.通过类名进行访问
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl;//类外访问不到私有的静态成员变量
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;  
//}