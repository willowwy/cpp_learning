//#include<iostream>
//using namespace std;
////ͨ��thisָ��
////1.������Ƴ�ͻ
////2.���ض�������*this
//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ��ָ����Ǳ����õĳ�Ա���������Ķ���
//		this->age = age;
//		//�õı���ϰ��
//	}
//
//	//ע�����ã����������ã��򷵻صĲ��Ǳ��壬����ֵ
//	Person& Person_add_age(Person& p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//void test01()
//{
//	Person p1 = 18;
//	cout << "p1������Ϊ" << p1.age << endl;
//}
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.Person_add_age(p1).Person_add_age(p1);
//	cout << "p2������Ϊ" << p2.age << endl;
//
//}
//
//int main()
//{
//	test01();
//	cout << "**********************" << endl;
//	test02();
//	system("pause");
//	return 0;
//}