////������������˽��
////*******public < protected < private*********
//// ���յȼ���ȡȨֵ���
//
////����Ȩ�� public      
////��Ա ���ڿ��Է��� ������Է���
//
////����Ȩ�� protected    
////��Ա ���ڿ��Է��� ���ⲻ���Է���  ��������Է��ʸ����еı������ݣ��̳���
//
////˽��Ȩ�� private      
////��Ա ���ڿ��Է��� ��Ϊ�����Է���  �����಻���Է��ʸ����˽�����ݣ��̳���
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