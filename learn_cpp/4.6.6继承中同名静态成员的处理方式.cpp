////��Ǿ�̬��ͬ
//#include <iostream>
//using namespace std;
//class Base
//{
//public:
//	static int m_A;
//};
//int Base::m_A = 200;//��Ϊ�����˶��ڹ������Կ���ֱ�ӳ�ʼ��
//
//class Son :public Base
//{
//public:
//	static int m_A;
//};
//int Son::m_A = 100;
//
////ͬ����Ա����
//void test01()
//{
//	Son so;
//	cout << "����-���ࣺ " << so.m_A << endl;
//	cout << "����-���ࣺ " << Son::m_A << endl;
//
//	cout << "---------------------------------" << endl;
//
//	cout << "����-���ࣺ " << so.Base::m_A << endl;
//	cout << "����-���ࣺ " << Base::m_A << endl;
//	cout << "����-����-���ࣺ " << Son::Base::m_A << endl;
//
//	//�����Ƕ�������������ʵĶ���һ���ڴ�
//	//���ʶ��Ǿ�̬
//}
//int main()
//{
//	cout << "---------------ͬ����Ա����---------------" << endl;
//	test01();
//
//	system("pause");
//	return 0;
//}