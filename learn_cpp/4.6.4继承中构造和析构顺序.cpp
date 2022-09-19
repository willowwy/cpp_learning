////父类与子类构造析构的顺序
//#include <iostream>
//using namespace std;
////父构造 → 子构造 → 子析构 → 父析构
////从内向外构造，从外向内析构
//class Base
//{
//public:
//	Base()
//	{
//		cout << "base构造" << endl;
//	}
//
//	~Base()
//	{
//		cout << "base析构" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "son构造" << endl;
//	}
//
//	~Son()
//	{
//		cout << "son析构" << endl;
//	}
//};
//
//void test()
//{
//	Son so;
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}