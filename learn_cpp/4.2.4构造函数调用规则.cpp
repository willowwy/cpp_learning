//#include<iostream>
//#include<string>
//using namespace std;
//
////默认情况下，c++至少给一个类添加3个函数
////1.默认构造函数（无参，函数体为空）
////2.默认析构函数（无参，函数体为空）
////3.默认拷贝构造函数，对属性值进行拷贝
//
////调用规则如下：
////·若用户自定义有参构造函数，则c++不再提供默认无参构造，但有默认拷贝
////·若用户自定义拷贝构造函数，则c++不再提供其他构造函数
//
//class Person
//{
//public:
//	/*Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}*/
//
//	Person(int age)
//	{
//		cout << "Person有参函数调用" << endl;
//		m_Age = age;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person拷贝函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
//
//
//void test02()
//{
//	Person p;
//	return;
//}
//int main()
//{
//	//test01();
//
//	system("pause");
//	return 0;
//}