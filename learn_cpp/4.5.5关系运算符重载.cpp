////== != == != == !=
//#include<iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//public:
//	string m_Name;
//	int m_Age;
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	bool operator==(Person& p)
//	{
//		if (m_Name == p.m_Name && m_Age == p.m_Age)
//			return true;
//		else
//			return false;
//	}
//	bool operator!=(Person& p)
//	{
//		if (m_Name != p.m_Name || m_Age != p.m_Age)
//			return true;
//		else
//			return false;
//	}
//};
//
//void test01()
//{
//	Person p1("wwy", 18);
//	Person p2("wy", 18);
//	if (p1 == p2)
//		cout << "p1=p2" << endl;
//	else if (p1 != p2)
//		cout << "p1!=p2" << endl;
//}
//
//int main()
//{
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}