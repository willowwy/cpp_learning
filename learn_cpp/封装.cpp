#include <iostream>
#include <math.h>
#include <string>
#define PI acos(-1)
using namespace std;

//访问权限有三种
//公共权限 public		类内可以访问			类外也可以访问
//保护权限 protected		类内可以访问			类外不可以访问（继承中儿子可以访问父亲中的保护内容）
//私有权限 private		类内可以访问			类外不可以访问（儿子不可以访问父亲的私有内容）


//PS：struct和class 的唯一区别在于默认的访问权限不同
//struct 默认访问权限全部为public
class Person
{
public:
	//公共权限
	string Name;//姓名

protected:
	//保护权限
	string Car;//汽车

private:
	//私有权限
	int Passwd;//银行卡密码

public:
	void func()
	{
		Name = "张三";
		Car = "拖拉机";
		Passwd = 123456;
	}

};


int main()
{
	Person wwy;
	wwy.Name = "hhh";
	
	wwy.func();//通过函数体访问private和protected
	system("pause");
	return 0;
}