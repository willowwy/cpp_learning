//#include<iostream>
//#include<string>
//using namespace std;
//
////浅拷贝：简单的赋值拷贝操作
////深拷贝：在堆区重新申请区域，进行拷贝操作
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的默认析构函数调用" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person的拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//
//		m_Height= new int(*p.m_Height)
//
//	}
//	int m_Age;
//	int* m_Height;
//};
//
//void test01()
//{
//	Person p1(20);
//	cout << "p1的年龄：" << p1.m_Age << endl;
//
//	//利用编译器提供的拷贝构造函数，会做浅拷贝操作  
//	//若p1中有指针指向堆区地址,则p2会指向同一地址
//	//浅拷贝会导致double free 
//	Person p2(p1);
//	cout << "p2的年龄：" << p2.m_Age << endl;
//}
//
//int main()
//{
//	//若属性中有在堆区开辟的，一定要在自己提供深拷贝构造函数
//	//防止浅拷贝直接的double free
//	test01();
//	system("pause");
//	return 0;
//}