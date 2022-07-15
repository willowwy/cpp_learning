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
//class 默认访问权限全部为private

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

//成员属性私人化*****************************************************************************
//优点：	1.可以自己控制读写权限
//		2.对于写权限，可以检测数据的有效性
class Per
{
public:
	//写姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	//获取年龄
	int getAge()
	{
		m_Age = 3;
		if (m_Age > 150)
		{
			cout << "你这个老妖精！！" << endl;
			return;
		}
		return m_Age;
	}
	//写情人
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//姓名：可读可写
	string m_Name;
	//年龄：只读
	int m_Age;
	//情人：只写
	string m_Lover;
};

int main()
{
	Person wwy;
	wwy.Name = "hhh";
	wwy.func();//通过函数体访问private和protected
//************************************************************************************
	Per bad_man;
	//姓名可读可写
	bad_man.setName("张三");
	cout << "姓名为：" << bad_man.getName() << endl;

	//年龄只读
	cout << "年龄为：" << bad_man.getAge() << endl;

	//情人只写
	bad_man.setLover("金道英");
	system("pause");
	return 0;
}