//引用：给变量起一个别名
//语法：数据类型 &别名 = 原名
/*int &b=a;
  b=20;
  cout<<a<<endl;
  输出为20*/

#include <iostream>
using namespace std;
void Swap(int&, int&);
int& test01(int );
int& test02();

int main()
{
/************************************************************************************/
	//引用的概念
	int a = 10;
	int c = 30;
	int& b = a;//a.b指向同一块内存
		//引用必须要初始化，且初始化后不允许再改变（b和a绑定了，无法更改）
	b = c;//赋值操作，不是更改引用
	
	cout << "a的值为:" << a << endl;
	cout << "b的值为:" << b << endl;

	b = 20;
	cout << "a的值为:" << a << endl;
	cout << "b的值为:" << b << endl;

/************************************************************************************/
	//函数传递，引用类似于指针的下一级的下一级
	//指针 -> 原参数 -> 引用
	int test1 = 1, test2 = 2;
	Swap(test1, test2);//形参也会修饰实参（与地址传递相似，但语法更简单                      ）
	cout << test1 << "  " << test2 << endl;

/************************************************************************************/
	//引用不可返回局部变量的值!!
	cout << "ref_1=" << test01(99) << endl;

	//函数调用(返回值为引用)可以作为左值
	cout << "ref_2=" << test02() << endl;
	test02() = 1000;
	cout << "ref_3=" << test02() << endl;//test02()可以看作是aaa的别名
	system("pause");
	return 0;
}

int& test01(int b)
{
	int a = 10;
	return b;
}

int& test02()
{
	static int aaa = 88;
	return aaa;
}

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	return;
}