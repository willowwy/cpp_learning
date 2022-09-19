////==============================
//#include<iostream>
//using namespace std;
//
////对于内置数据类型，编译器知道如何进行运算
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	//深拷贝浅拷贝会使堆区内存重复释放，程序崩溃
//	//利用深拷贝来解决浅拷贝
//	//p2=p1即 p2.operator=p1
//	Person& operator=(Person& p)
//	{
//		//编译器提供的为浅拷贝
//		//先判断是否有属性在堆区，若有的话先释放干净
//		if (m_Age)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//	int* m_Age;
//};
//
////ostream& operator<<(ostream& cout, MyInterger myint)
////{
////	cout << myint.m_Num;
////	return cout;
////}
//
//void test01()
//{
//	Person p1 = 18;
//	Person p2 = 20;
//	Person p3 = 30;
//	p3 = p2 = p1;
//	//若用编译器自带的拷贝函数，直接将指针地址改了
//
//	cout << *(p1.m_Age) << endl;
//	cout << *(p2.m_Age) << endl;
//	cout << *(p3.m_Age) << endl;
//}
//
//void test02()
//{
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}