//#include <iostream>
//using namespace std;
//
////������
//class Person
//{
//public:
//	//���������������޸ĳ�mutable���������
//	void showPerson() const
//	{
//		this->m_A = 100;//�����ˣ�����
//		//thisָ��ı��ʡ���ָ�볣�� ָ���ָ���ǲ������޸ĵ�
//		//Person *const this;
//		//��Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
//
//		this->m_B = 200;//������������hh
//	}
//
//	void func()
//	{
//		return;
//	}
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ�������Ҳ�����޸����ֵ
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
//void test02()
//{
//	//������
//	const Person p;
//	p.m_A = 100;//�ö�������Ҳ�޷��޸�
//	p.m_B = 200;//������� �����޸�
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//���������������ͨ��Ա��������Ϊ�����޸�����
//	p.func();
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}