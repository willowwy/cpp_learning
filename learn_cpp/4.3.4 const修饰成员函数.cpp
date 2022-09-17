//#include <iostream>
//using namespace std;
//
////常函数
//class Person
//{
//public:
//	//常函数，不可以修改除mutable以外的属性
//	void showPerson() const
//	{
//		this->m_A = 100;//报错了！！！
//		//this指针的本质——指针常量 指针的指向是不可以修改的
//		//Person *const this;
//		//成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
//
//		this->m_B = 200;//不报错…………hh
//	}
//
//	void func()
//	{
//		return;
//	}
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中也可以修改这个值
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
//	//常对象
//	const Person p;
//	p.m_A = 100;//该对象属性也无法修改
//	p.m_B = 200;//特殊变量 可以修改
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//常对象不允许调用普通成员函数，因为可以修改属性
//	p.func();
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}