#include <iostream>
using namespace std;
int test01(int, int, int, int);


/***************************************************************************************/
int test01(int a, int b, int c = 10, int d = 1)
{
	return a + b + c;
}
//attention!!
//如果某个位置已经有了默认参数，则从这个位置往后，都必须有默认值
//如果函数声明有默认参数，则函数实现就不能有默认参数(定义和声明只能有一个默认参数)


void test02(int a, int, int = 1)
{
	cout << "this is a func!" << endl;
}
//占位参数：可以有默认参数


int main()
{
	cout << test01(1, 2, 2, 3) << endl;//可以不传入形参
	cout << test01(1, 2, 4) << endl;//传参会覆盖默认值
	test02(1, 1,2);
	system("pause");
}
