////<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
////��������Լ��Զ������������
//#include<iostream>
//using namespace std;
//
////���������������ͣ�������֪����ν�������
//
//class Person
//{
//	//����������Ԫ
//	friend ostream& operator<<(ostream& cout_hhh, Person& p);
//private:
//	int m_A = 10;
//	int m_B = 20;
//};
//
////��Ա���� ��Ҫʵ��  cout<< p.operator  ��  �޷�ʵ��cout�����
////һ�㲻������
////void Person::operator<<()
////{
////	cout << this->m_A << "  " << this->m_B << endl;
////	return;
////}
//
////ȫ�ֺ���  ʵ��  cout << p  ,operator(cout,p)
////void operator<<(ostream& cout, Person& p)
////{
////	cout << " p.m_A =" << p.m_A << "   p.m_B = " << p.m_B << endl;
////	return;
////}
//
//ostream& operator<<(ostream& cout_hhh, Person& p)
//{
//	//���ÿ���������������������ʶ���cout
//	//nbnbnbnbnbnbnbnbnbnbnbnbnbnb
//	cout_hhh << " p.m_A =" << p.m_A << "   p.m_B = " << p.m_B;
//	return cout_hhh;
//}
//
//void test01()
//{
//	Person p;
//
//	//���ж���������������cout�����Կ�����������׷��
//	//��ʽ���˼��*******************nbnnbnbnb
//	cout << p << endl;//��Ҫ����coutʹ�ã�����᷵��void���޷����endl��Ϊcout�Ѿ�û��
//	cout << p;
//
//	return;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}