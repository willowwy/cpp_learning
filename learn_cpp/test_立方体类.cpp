//#include<iostream>
//#include<string>
//using namespace std;
//
////�������������
////�������
////�����Ϊ ��ȡ���������������
////�ж������������Ƿ����
//
//class Cube
//{
//public:
//	//���ó�������
//	void m_set(int l, int w, int h)
//	{
//		m_L = l;
//		m_W = w;
//		m_H = h;
//		return;
//	}
//
//	//��ȡ��������
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
//	//��ȡ���
//	int cal_S()
//	{
//		return (((m_H * m_L) + (m_H * m_W) + (m_W * m_L)) * 2);
//	}
//
//	//��ȡ���
//	int cal_V()
//	{
//		return m_H * m_W * m_H;
//	}
//
//	//���ó�Ա�������ж������������Ƿ����
//	bool cmp_cube_byclass(Cube& cmp)
//	{
//		if (m_H == cmp.m_get_h() && m_L == cmp.m_get_l() && m_W == cmp.m_get_w())
//			return true;
//		else
//			return false;
//	}
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
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
//	cout << "����߷ֱ�Ϊ" << c1.m_get_l() << "  " << c1.m_get_w() << "  " << c1.m_get_h() << endl;
//
//	cout << "���Ϊ��" << c1.cal_S() << endl;
//	cout << "���Ϊ��" << c1.cal_V() << endl;
//
//	//ȫ�ֺ����ж�
//	c2.m_set(1, 2, 1);//���� c2 ��ֵ
//	if (cmp_cube(c1, c2))
//		cout << "�������" << endl;
//	else
//		cout << "���߲����" << endl;
//	//**********************************************************************************************************
//		//��Ա�����ж�
//	c3.m_set(1, 2, 3);//���� c2 ��ֵ
//	if (c1.cmp_cube_byclass(c3))
//		cout << "�������" << endl;
//	else
//		cout << "���߲����" << endl;
//
//	system("pause");
//	return 0;
//}