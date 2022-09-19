////公共、保护、私有
////*******public < protected < private*********
//// 按照等级，取权值大的
//
////公共权限 public      
////成员 类内可以访问 类外可以访问
//
////保护权限 protected    
////成员 类内可以访问 类外不可以访问  （子类可以访问父类中的保护内容）继承中
//
////私有权限 private      
////成员 类内可以访问 类为不可以访问  （子类不可以访问父类的私有内容）继承中
//
//#include<iostream>
//using namespace std;
//
//class Base
//{
//private:
//	int m_A;
//protected:
//	int m_B;
//public:
//	int m_C;
//};
//
//class Son1 :public Base
//{
//	void func()
//	{
//		m_A = 1;
//		m_B = 2;
//		m_C = 3;
//	}
//};
//
//
//class Son2 :protected Base
//{
//	void func()
//	{
//		m_A = 1;
//		m_B = 2;
//		m_C = 3;
//	}
//};
//
//
//class Son3 :private Base
//{
//	void func()
//	{
//		//m_A = 1;
//		m_B = 2;
//		m_C = 3;
//	}
//};
//
//void test02()
//{
//	Son1 son;
//	son.m_C;
//}