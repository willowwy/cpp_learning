////��̬��Ա������
//	//�����ж�����ͬһ������
//	//���ڱ���׶η����ڴ�
//	//�����������������ʼ��
//
//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	static int m_A;
//	
//private:
//	static int m_B;//˽��������ľ�̬����
//};
//
//
//int Person::m_A = 100;//���������������ʼ��
//int Person::m_B = 200;
//
//void test01()
//{
//	Person p; 
//	cout << p.m_A << endl;
//}
//void test02()
//{
//	//��̬��Ա���� ������ĳ������ ���ж�����ͬһ������
//	//��� ��̬��Ա�����ַ��ʷ�ʽ
//
//	//1.ͨ��������з���
//	Person p;
//	cout << p.m_A << endl;
//
//
//	//2.ͨ���������з���
//	cout << Person::m_A << endl;
//	//cout << Person::m_B << endl;//������ʲ���˽�еľ�̬��Ա����
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;  
//}