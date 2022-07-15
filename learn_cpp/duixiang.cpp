//#include <iostream>
//#include <math.h>
//#include <string>
//#define PI acos(-1)
//using namespace std;
//
////封装、继承、多态
////万事万物都可以称为对象，对象有属性和行为
//
////求圆的周长：2*Π*r
//
////class后面跟着类的名称
////类中的属性和行为 统一称为成员
////属性 成员属性 成员变量
////行为 成员函数 成员方法
////属性
//class circle
//{
//	//访问权限
//public:
//
//	//属性
//	int m_r;//半径
//
//	//行为:获取圆的周长
//	double calculateZC()
//	{
//		return 2 * (PI) * m_r;
//	}
//};
////*****************************************************************************************************
//class Student
//{
//public:
//	char name[6];
//	char number[10];
//
//	void fu_name()
//	{
//		cout << "请输入名字：";
//		cin >> name;
//		return;
//	}
//	void fu_number()
//	{
//		cout << "请输入学号：";
//		cin >> number;
//		return;
//	}
//
//	void display()
//	{
//		cout << "姓名为：" << name << endl;
//		cout << "学号为：" << number << endl;
//		return;
//	}
//};
//
//class STU
//{
//public:
//	string m_name;
//	int m_ID;
//
//	void set_name(string name)
//	{
//		m_name = name;
//	}
//	void set_number(int number)
//	{
//		m_ID = number;
//	}
//
//	void Show()
//	{
//		cout << "姓名为：" << m_name << endl;
//		cout << "学号为：" << m_ID << endl;
//		return;
//	}
//
//
//
//
//};
//
////*****************************************************************************************************
//int main()
//{
//	//通过圆类，创造一个具体的圆(对象)
//	circle cl;
//	//赋值
//	cl.m_r = 10;
//	cout << "周长为" << cl.calculateZC() << endl;
//
//
//	//学生类，可以赋值，可以显示
//	Student WWY;
//	WWY.fu_name();
//	WWY.fu_number();
//	WWY.display();
//
//	//更简洁的创建
//	STU hhh;
//	hhh.set_name("hhh");
//	hhh.set_number (9898);
//	hhh.Show();
//
//	system("pause");
//
//	return 0;
//}