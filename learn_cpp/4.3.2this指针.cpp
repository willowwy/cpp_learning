//#include<iostream>
//using namespace std;
////通过this指针
////1.解决名称冲突
////2.返回对象本身用*this
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向的是被调用的成员函数所属的对象
//		this->age = age;
//		//好的编码习惯
//	}
//
//	//注意引用，若不用引用，则返回的不是本体，而是值
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
//	cout << "p1的年龄为" << p1.age << endl;
//}
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//链式编程思想
//	p2.Person_add_age(p1).Person_add_age(p1);
//	cout << "p2的年龄为" << p2.age << endl;
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