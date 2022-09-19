//#include <iostream>
//using namespace std;
//
//////普通实现页面：大量重复代码
////class Java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作" << endl;
////	}
////	void left()
////	{
////		cout << "Java、Python、C++" << endl;
////	}
////	void content()
////	{
////		cout << "java学习视频" << endl;
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
////		cout << "首页、公开课、登录" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作" << endl;
////	}
////	void left()
////	{
////		cout << "Java、Python、C++" << endl;
////	}
////	void content()
////	{
////		cout << "python学习视频" << endl;
////	}
////};
////
////class Cpp
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作" << endl;
////	}
////	void left()
////	{
////		cout << "Java、Python、C++" << endl;
////	}
////	void content()
////	{
////		cout << "C++学习视频" << endl;
////	}
////};
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++" << endl;
//	}
//};
//
////Java称为子类 或 派生类-------增添的成员表现其个性
////BasePage称为 父类 或 基类----表现其共性
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "java学习视频" << endl;
//	}
//};
//
//
//
//class Python 
//{
//public:	
//	BasePage basic;//会报错，因为无法直接一层访问，需要访问两次
//	void content()
//{
//	cout << "python学习视频" << endl;
//}
//
//};
//void test01()
//{
//	Java ja;
//	cout << "java下载视频页面如下↓↓↓↓" << endl;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//	cout << "------------------------------" << endl;
//	cout << "python下载视频页面如下↓↓↓↓" << endl;
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