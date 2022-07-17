//#include<iostream>
//#include<string>
//using namespace std;
//
////创建立方体的类
////设计属性
////设计行为 获取立方体的面积与体积
////判断两个立方体是否相等
//
//class Cube
//{
//public:
//	//设置长、宽、高
//	void m_set(int l, int w, int h)
//	{
//		m_L = l;
//		m_W = w;
//		m_H = h;
//		return;
//	}
//
//	//获取长、宽、高
//	int m_get_l(void)
//	{
//		return m_L;
//	}
//	int m_get_w(void)
//	{
//		return m_W;
//	}
//	int m_get_h(void)
//	{
//		return m_H;
//	}
//
//	//获取面积
//	int cal_S()
//	{
//		return (((m_H * m_L) + (m_H * m_W) + (m_W * m_L)) * 2);
//	}
//
//	//获取体积
//	int cal_V()
//	{
//		return m_H * m_W * m_H;
//	}
//
//	//利用成员函数来判断两个立方体是否相等
//	bool cmp_cube_byclass(Cube& cmp)
//	{
//		if (m_H == cmp.m_get_h() && m_L == cmp.m_get_l() && m_W == cmp.m_get_w())
//			return true;
//		else
//			return false;
//	}
//private:
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//};
//
//bool cmp_cube(Cube& c1, Cube& c2)
//{
//	if (c1.m_get_h() == c2.m_get_h() && c1.m_get_l() == c2.m_get_l() && c1.m_get_w() == c2.m_get_w())
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	Cube c1, c2, c3;
//	c1.m_set(1, 2, 3);
//	cout << "长宽高分别为" << c1.m_get_l() << "  " << c1.m_get_w() << "  " << c1.m_get_h() << endl;
//
//	cout << "面积为：" << c1.cal_S() << endl;
//	cout << "体积为：" << c1.cal_V() << endl;
//
//	//全局函数判断
//	c2.m_set(1, 2, 1);//设置 c2 的值
//	if (cmp_cube(c1, c2))
//		cout << "两者相等" << endl;
//	else
//		cout << "两者不相等" << endl;
//	//**********************************************************************************************************
//		//成员函数判断
//	c3.m_set(1, 2, 3);//设置 c2 的值
//	if (c1.cmp_cube_byclass(c3))
//		cout << "两者相等" << endl;
//	else
//		cout << "两者不相等" << endl;
//
//	system("pause");
//	return 0;
//}