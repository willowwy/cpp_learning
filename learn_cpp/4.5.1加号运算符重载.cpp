////++++++++++++++++++++++++++++++++
//#include<iostream>
//using namespace std;
//
////对于内置数据类型，编译器知道如何进行运算
//
//class Person
//{
//public:
//	int m_A;
//	int m_B;
//	//Person operator + (Person& p);
//};
//
////1.成员函数
////Person Person::operator + (Person& p)
////{
////	Person temp;
////	temp.m_A = this->m_A + p.m_A;
////	temp.m_B = this->m_B + p.m_B;
////	return temp;
////}
//
////2.全局函数
//Person operator+ (Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
//void test01()
//{
//	Person p1, p2;
//	p1.m_A = 10;
//	p1.m_B = 1;
//	p2.m_A = 20;
//	p2.m_B = 2;
//	Person p3 = p1 + p2;//简化版本
//	//Person p3 = p1.operater + (p2);//成员函数本质
//	//Person p3 = operater + (p1, p2);//全局函数本质
//	//也可以进行重载，比如Person+int
//	cout << p3.m_A << "  " << p3.m_B << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}