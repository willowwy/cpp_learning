//#include<iostream>
//#include<string>
//using namespace std;
//
////ǳ�������򵥵ĸ�ֵ��������
////������ڶ��������������򣬽��п�������
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age,int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person���вι��캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person��Ĭ��������������" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯������" << endl;
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
//	cout << "p1�����䣺" << p1.m_Age << endl;
//
//	//���ñ������ṩ�Ŀ������캯��������ǳ��������  
//	//��p1����ָ��ָ�������ַ,��p2��ָ��ͬһ��ַ
//	//ǳ�����ᵼ��double free 
//	Person p2(p1);
//	cout << "p2�����䣺" << p2.m_Age << endl;
//}
//
//int main()
//{
//	//�����������ڶ������ٵģ�һ��Ҫ���Լ��ṩ������캯��
//	//��ֹǳ����ֱ�ӵ�double free
//	test01();
//	system("pause");
//	return 0;
//}