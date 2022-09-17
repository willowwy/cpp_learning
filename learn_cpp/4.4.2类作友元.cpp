//#include <iostream>
//using namespace std;
//#include <string>
//
////类作友元
//
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//参观函数 访问Building中的属性
//
//	Building* building;
//};
//
//class Building
//{
//	//goodgay是本类的好朋友
//	friend class GoodGay;
//public:
//	Building();
//	string m_SittingRoom;//客厅
//private:
//	string m_Bedroom;//卧室
//};
//
////类外写成员函数
//Building::Building()//构造函数
//{
//	m_SittingRoom = "客厅";
//	m_Bedroom = "卧室";
//}
//GoodGay::GoodGay()//构造函数
//{
//	//创建一个建筑物的对象
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "goodgay正在访问" << building->m_SittingRoom << endl;
//	cout << "goodgay正在访问" << building->m_Bedroom << endl;//private
//}
//
//
//void test01()
//{
//	GoodGay gg;//构造函数
//	gg.visit();
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}