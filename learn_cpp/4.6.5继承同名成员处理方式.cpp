////����������ͬ����Ա
//#include <iostream>
//using namespace std;
//
////***�������ֱࣺ�ӷ���
////***���ʸ��ࣺ��Ҫ��������
//
//class Base
//{
//public:
//	int m_A;
//	Base()
//	{
//		m_A = 100;
//	}
//	void func()
//	{
//		cout << "���ຯ��" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	int m_A;
//	Son()
//	{
//		m_A = 200;
//	}
//	void func()
//	{
//		cout << "���ຯ��" << endl;
//	}
//};
//
////ͬ����Ա����
//void test01()
//{
//	Son so;
//	cout << "���ࣺ " << so.m_A << endl;
//	cout << "���ࣺ " << so.Base::m_A << endl;
//}
//
////ͬ������
////��������θ��������еĳ�Ա���� ֻ�м���������Է��ʵ�
//void test02()
//{
//	Son so;
//	so.func();
//	so.Base::func();
//}
//int main()
//{
//	cout << "---------------ͬ����Ա����---------------" << endl;
//	test01();
//	cout << "---------------ͬ������---------------" << endl;
//	test02();
//	system("pause");
//	return 0;
//}