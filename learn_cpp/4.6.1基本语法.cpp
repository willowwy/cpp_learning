//#include <iostream>
//using namespace std;
//
//////��ͨʵ��ҳ�棺�����ظ�����
////class Java
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ���������" << endl;
////	}
////	void left()
////	{
////		cout << "Java��Python��C++" << endl;
////	}
////	void content()
////	{
////		cout << "javaѧϰ��Ƶ" << endl;
////	}
////};
////
////
////
////class Python
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ���������" << endl;
////	}
////	void left()
////	{
////		cout << "Java��Python��C++" << endl;
////	}
////	void content()
////	{
////		cout << "pythonѧϰ��Ƶ" << endl;
////	}
////};
////
////class Cpp
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ���������" << endl;
////	}
////	void left()
////	{
////		cout << "Java��Python��C++" << endl;
////	}
////	void content()
////	{
////		cout << "C++ѧϰ��Ƶ" << endl;
////	}
////};
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ���������" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++" << endl;
//	}
//};
//
////Java��Ϊ���� �� ������-------����ĳ�Ա���������
////BasePage��Ϊ ���� �� ����----�����乲��
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "javaѧϰ��Ƶ" << endl;
//	}
//};
//
//
//
//class Python 
//{
//public:	
//	BasePage basic;//�ᱨ����Ϊ�޷�ֱ��һ����ʣ���Ҫ��������
//	void content()
//{
//	cout << "pythonѧϰ��Ƶ" << endl;
//}
//
//};
//void test01()
//{
//	Java ja;
//	cout << "java������Ƶҳ�����¡�������" << endl;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "------------------------------" << endl;
//	cout << "python������Ƶҳ�����¡�������" << endl;
//	Python py;
//	/*py.header();
//	py.footer();
//	py.left();*/
//	py.content();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}