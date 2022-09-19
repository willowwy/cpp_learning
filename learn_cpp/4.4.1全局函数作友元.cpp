//#include <iostream>
//using namespace std;
//#include <string>
//
////建筑物类别
//class Building
//{
//	//GoodGay全局函数是Building好朋友，可以访问Building中的私有成员
//	friend void GoodGay(Building& building);
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_Bedroom = "卧室";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_Bedroom;
//
//};
//
//
////友好：全局函数
//void GoodGay(Building& building)
//{
//	cout << "goodgay全局函数 正在访问：" << building.m_SittingRoom << endl;
//	cout << "goodgay全局函数 正在访问" << building.m_Bedroom << endl;
//}
//
////不友好：全局函数
//void BadGay(Building& building)
//{
//	cout << "Badgay全局函数 正在访问：" << building.m_SittingRoom << endl;
//	//cout << "Badgay全局函数 正在访问" << building.m_Bedroom << endl;//未友好声明，无法访问private
//}
//1
//void test01()
//{
//	Building building;//已经初始化过了
//	GoodGay(building);
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
