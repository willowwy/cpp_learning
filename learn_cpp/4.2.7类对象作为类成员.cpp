////对象成员，嵌套结构
//#include<iostream>
//using namespace std;
//#include <string>
//
//class Phone
//{
//public:
//	Phone (string pname)
//	{
//		m_brand = pname;
//	}
//	string m_brand;
//};
//class Person
//{
//public:
//	Person(string name, string pname):m_name(name),m_phone(pname)
//	{
//		//初始化列表
//	}
//	string m_name;
//	Phone m_phone;
//};
//
////先构造零件，再构造整体
////析构时先释放整体，再释放零件
////类似于部分 → 整体
//void test01()
//{
//	Person p("wwy", "huawei");
//	cout << p.m_name << "有品牌" << p.m_phone.m_brand << "的手机" << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0; 
//}