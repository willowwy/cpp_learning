////==============================
//#include<iostream>
//using namespace std;
//
////���������������ͣ�������֪����ν�������
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	//���ǳ������ʹ�����ڴ��ظ��ͷţ��������
//	//������������ǳ����
//	//p2=p1�� p2.operator=p1
//	Person& operator=(Person& p)
//	{
//		//�������ṩ��Ϊǳ����
//		//���ж��Ƿ��������ڶ��������еĻ����ͷŸɾ�
//		if (m_Age)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		//���
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//
//	int* m_Age;
//};
//
////ostream& operator<<(ostream& cout, MyInterger myint)
////{
////	cout << myint.m_Num;
////	return cout;
////}
//
//void test01()
//{
//	Person p1 = 18;
//	Person p2 = 20;
//	Person p3 = 30;
//	p3 = p2 = p1;
//	//���ñ������Դ��Ŀ���������ֱ�ӽ�ָ���ַ����
//
//	cout << *(p1.m_Age) << endl;
//	cout << *(p2.m_Age) << endl;
//	cout << *(p3.m_Age) << endl;
//}
//
//void test02()
//{
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}