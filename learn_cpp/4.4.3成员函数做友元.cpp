//#include <iostream>
//using namespace std;
//#include <string>
//
////类的声明↓
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	Building* building;
//	void GoodVisit();//让它可以访问Building的私有成员
//	void BadVisit();//让它不可以访问Building的私有成员
//};
//class Building
//{
//	//告诉编译器 GoodGay类下的visit函数
//	friend void GoodGay::GoodVisit();
//public:
//	Building();
//	string m_SittingRoom;//客厅
//private:
//	string m_Bedroom;//卧室
//};
//
////类的函数定义↓
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::GoodVisit()
//{
//	cout << "goodvisit正在访问" << building->m_SittingRoom << endl;
//	cout << "goodvisit正在访问" << building->m_Bedroom << endl;//private
//}
//void GoodGay::BadVisit()
//{
//	cout << endl << "badvisit正在访问" << building->m_SittingRoom << endl;
//	//cout << "goodgay正在访问" << building->m_Bedroom << endl;//private
//}
//
//Building::Building()//构造函数
//{
//	m_SittingRoom = "客厅";
//	m_Bedroom = "卧室";
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.GoodVisit();
//	gg.BadVisit();
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}