////<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
////可以输出自己自定义的数据类型
//#include<iostream>
//using namespace std;
//
////对于内置数据类型，编译器知道如何进行运算
//
//class Person
//{
//	//尽量少用友元
//	friend ostream& operator<<(ostream& cout_hhh, Person& p);
//private:
//	int m_A = 10;
//	int m_B = 20;
//};
//
////成员函数 需要实现  cout<< p.operator  →  无法实现cout在左侧
////一般不这样用
////void Person::operator<<()
////{
////	cout << this->m_A << "  " << this->m_B << endl;
////	return;
////}
//
////全局函数  实现  cout << p  ,operator(cout,p)
////void operator<<(ostream& cout, Person& p)
////{
////	cout << " p.m_A =" << p.m_A << "   p.m_B = " << p.m_B << endl;
////	return;
////}
//
//ostream& operator<<(ostream& cout_hhh, Person& p)
//{
//	//引用可以任意起别名，反正本质都是cout
//	//nbnbnbnbnbnbnbnbnbnbnbnbnbnb
//	cout_hhh << " p.m_A =" << p.m_A << "   p.m_B = " << p.m_B;
//	return cout_hhh;
//}
//
//void test01()
//{
//	Person p;
//
//	//所有东西调用完后均返回cout，所以可以无限往后追加
//	//链式编程思想*******************nbnnbnbnb
//	cout << p << endl;//需要返回cout使用，否则会返回void，无法输出endl因为cout已经没了
//	cout << p;
//
//	return;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}