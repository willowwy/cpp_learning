////与非静态相同
//#include <iostream>
//using namespace std;
//class Base
//{
//public:
//	static int m_A;
//};
//int Base::m_A = 200;//因为所有人都在共享，所以可以直接初始化
//
//class Son :public Base
//{
//public:
//	static int m_A;
//};
//int Son::m_A = 100;
//
////同名成员属性
//void test01()
//{
//	Son so;
//	cout << "对象-子类： " << so.m_A << endl;
//	cout << "类名-子类： " << Son::m_A << endl;
//
//	cout << "---------------------------------" << endl;
//
//	cout << "对象-父类： " << so.Base::m_A << endl;
//	cout << "类名-父类： " << Base::m_A << endl;
//	cout << "套娃-类名-父类： " << Son::Base::m_A << endl;
//
//	//无论是对象和类名，访问的都是一块内存
//	//本质都是静态
//}
//int main()
//{
//	cout << "---------------同名成员属性---------------" << endl;
//	test01();
//
//	system("pause");
//	return 0;
//}