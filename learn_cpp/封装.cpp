#include <iostream>
#include <math.h>
#include <string>
#define PI acos(-1)
using namespace std;

//����Ȩ��������
//����Ȩ�� public		���ڿ��Է���			����Ҳ���Է���
//����Ȩ�� protected		���ڿ��Է���			���ⲻ���Է��ʣ��̳��ж��ӿ��Է��ʸ����еı������ݣ�
//˽��Ȩ�� private		���ڿ��Է���			���ⲻ���Է��ʣ����Ӳ����Է��ʸ��׵�˽�����ݣ�


//PS��struct��class ��Ψһ��������Ĭ�ϵķ���Ȩ�޲�ͬ
//struct Ĭ�Ϸ���Ȩ��ȫ��Ϊpublic
class Person
{
public:
	//����Ȩ��
	string Name;//����

protected:
	//����Ȩ��
	string Car;//����

private:
	//˽��Ȩ��
	int Passwd;//���п�����

public:
	void func()
	{
		Name = "����";
		Car = "������";
		Passwd = 123456;
	}

};


int main()
{
	Person wwy;
	wwy.Name = "hhh";
	
	wwy.func();//ͨ�����������private��protected
	system("pause");
	return 0;
}