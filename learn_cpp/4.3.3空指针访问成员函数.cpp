//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		cout << "age=" << m_Age << endl;
//	}
//	int m_Age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	//空指针可以访问成员
//	p->showClassName();
//	//属性前面默认有this指针，即this->m_Age,而this为空指针，会报错
//	p->showPersonAge();
//	
//	
//	return;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}