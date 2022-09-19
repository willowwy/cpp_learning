//#include<iostream>
//using namespace std;
////继承中的对象模型
//
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
//class Son :public Base
//{
//	//被继承但无法访问
//public:
//	int m_D;
//};
//
//int main()
//{
//	cout << sizeof(Son) << endl;
//	system("pause");
//	return 0;
//}
//
//
////利用开发人员命令框来查看文件模型
//// 跳转到文件盘符 eg: d:
////跳转到文件路径
////查看命名
////cl / d1 reportSingleClassLayout类名 文件名
////eg： cl / d1 reportSingleClassLayoutSon 4.6.3继承中的对象模型.cpp
//
////显示结构和存储