//#include <iostream>
//using namespace std;
//#include <string>
//
////������Ԫ
//
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//�ιۺ��� ����Building�е�����
//
//	Building* building;
//};
//
//class Building
//{
//	//goodgay�Ǳ���ĺ�����
//	friend class GoodGay;
//public:
//	Building();
//	string m_SittingRoom;//����
//private:
//	string m_Bedroom;//����
//};
//
////����д��Ա����
//Building::Building()//���캯��
//{
//	m_SittingRoom = "����";
//	m_Bedroom = "����";
//}
//GoodGay::GoodGay()//���캯��
//{
//	//����һ��������Ķ���
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "goodgay���ڷ���" << building->m_SittingRoom << endl;
//	cout << "goodgay���ڷ���" << building->m_Bedroom << endl;//private
//}
//
//
//void test01()
//{
//	GoodGay gg;//���캯��
//	gg.visit();
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}