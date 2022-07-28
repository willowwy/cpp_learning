#include<iostream>
#include<string>
using namespace std;

//1.使用一个已经创造完毕的对象来初始化一个新对象






//2.值传递的方式给函数参数传值


//3.值方式返回局部对象

class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数调用" << endl;
	}
	
	Person(int age)
	{
		cout << "Person有参函数调用" << endl;
		m_Age = age;
	}

	Person(const Person& p)
	{
		cout << "Person拷贝函数调用" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}

	int m_Age;
};


int main()
{
	char s[10];
	cout << "Hello world!" << endl;

	printf("HELLO!");
	scanf("%s", s);
}
