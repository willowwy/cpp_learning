//#include <iostream>
//using namespace std;
//#include <string>
//
////���������
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	Building* building;
//	void GoodVisit();//�������Է���Building��˽�г�Ա
//	void BadVisit();//���������Է���Building��˽�г�Ա
//};
//class Building
//{
//	//���߱����� GoodGay���µ�visit����
//	friend void GoodGay::GoodVisit();
//public:
//	Building();
//	string m_SittingRoom;//����
//private:
//	string m_Bedroom;//����
//};
//
////��ĺ��������
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//void GoodGay::GoodVisit()
//{
//	cout << "goodvisit���ڷ���" << building->m_SittingRoom << endl;
//	cout << "goodvisit���ڷ���" << building->m_Bedroom << endl;//private
//}
//void GoodGay::BadVisit()
//{
//	cout << endl << "badvisit���ڷ���" << building->m_SittingRoom << endl;
//	//cout << "goodgay���ڷ���" << building->m_Bedroom << endl;//private
//}
//
//Building::Building()//���캯��
//{
//	m_SittingRoom = "����";
//	m_Bedroom = "����";
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