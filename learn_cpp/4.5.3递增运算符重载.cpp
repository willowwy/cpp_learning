////++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++
//#include<iostream>
//using namespace std;
//
////���������������ͣ�������֪����ν�������
//
//class MyInterger
//{
//	friend ostream& operator<<(ostream& cout, MyInterger myint);
//public:
//	MyInterger& operator++ ();
//	MyInterger operator++ (int);
//	MyInterger()
//	{
//		m_Num = 0;
//	}
//
//private:
//	int m_Num;
//};
//
////1.��Ա����
//// ��1��++ p.operator ǰ�á�����������
////���뷵�����ñ��壬�����޷���ʽ���
//MyInterger& MyInterger::operator++ ()
//{
//	++m_Num;
//	return *this;
//}
//// ��2��p.operator++ ���á�������ֵ
////int��Ϊһ��ռλ�����������������ֺ��ú�ǰ�õ���
////��Ҫ�ȼ�¼һ��������ٷ��أ������ǰ�ý��һ��
////�����Ϊɶǰ�õ����ȽϿ죡����
//MyInterger MyInterger::operator++ (int)
//{
//	//��Ϊp�Ǿֲ������������޷��������ã��ᱻ�ͷ�
//	MyInterger p = *this;
//	m_Num++;
//	return p;
//}
//
//
//ostream& operator<<(ostream& cout, MyInterger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInterger myint1;
//	cout << "++myint1  == " << ++myint1 << endl;
//}
//
//void test02()
//{
//	MyInterger myint2;
//	cout << "myint2++  == " << myint2++ << endl;
//	cout << "myint2  == " << myint2 << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}