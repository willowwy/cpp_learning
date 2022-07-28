#include<iostream>
#include<string>
using namespace std;

//构造函数的分类及调用
// 分类
//按照参数分类   无参构造（默认构造）和有参构造
//按照类型分类   普通构造   拷贝构造


class Person
{
public:
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}

	Person(int a)//有参数调用
	{
		age = a;
		cout << "Person的有参析构函数调用" << endl;
	}

	//拷贝构造函数
	Person(const Person &p)//将p的所有属性copy到我的身上，原p不可以修改
	{
		cout << "Person的拷贝构造函数调用" << endl;
		age = p.age;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}


	int age;
};


//调用
void test01()
{
	//1.括号法(常用)
	Person p1;//默认构造函数调用
	Person p2(10);
	Person p3(p2);
	//注意事项：
	// 调用默认构造函数时候，不要加（），即Person px()会被编译器认为是函数的声明，类似于void func();
	//无参无括号，有参有括号。
	cout << endl << "**************************************" << endl << endl;

	//2.显示法
	Person p4;
	Person p5 = Person(10);
	Person p6 = Person(p5);

	Person(10);//匿名对象  特点：当前行执行结束后，系统会立即回收该匿名对象。
	//注意事项：
	//不要利用拷贝构造函数 初始化匿名对象 编译器会认为 Person(p3) == Person p3
	//会认为重定义，重复对象的声明
	cout << endl << "**************************************" << endl << endl;


	//3.隐式转换法
	Person p7 = 10;//相当于Person p7=Person(10);编译器会隐式转换
	Person p8 = p7;//拷贝构造
}

int main()
{
	//Person p;//在return 0；后才实行析构函数

	test01();//在局部变量被释放时就会执行析构

	system("pause");
	return 0;
}