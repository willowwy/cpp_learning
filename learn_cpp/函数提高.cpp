#include <iostream>
using namespace std;
int test01(int, int, int, int);


/***************************************************************************************/
int test01(int a, int b, int c = 10, int d = 1)
{
	return a + b + c;
}
//attention!!
//���ĳ��λ���Ѿ�����Ĭ�ϲ�����������λ�����󣬶�������Ĭ��ֵ
//�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���(���������ֻ����һ��Ĭ�ϲ���)


void test02(int a, int, int = 1)
{
	cout << "this is a func!" << endl;
}
//ռλ������������Ĭ�ϲ���


int main()
{
	cout << test01(1, 2, 2, 3) << endl;//���Բ������β�
	cout << test01(1, 2, 4) << endl;//���λḲ��Ĭ��ֵ
	test02(1, 1,2);
	system("pause");
}
