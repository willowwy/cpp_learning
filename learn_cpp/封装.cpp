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
//class Ĭ�Ϸ���Ȩ��ȫ��Ϊprivate

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

//��Ա����˽�˻�*****************************************************************************
//�ŵ㣺	1.�����Լ����ƶ�дȨ��
//		2.����дȨ�ޣ����Լ�����ݵ���Ч��
class Per
{
public:
	//д����
	void setName(string name)
	{
		m_Name = name;
	}
	//��ȡ����
	string getName()
	{
		return m_Name;
	}

	//��ȡ����
	int getAge()
	{
		m_Age = 3;
		if (m_Age > 150)
		{
			cout << "���������������" << endl;
			return;
		}
		return m_Age;
	}
	//д����
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//�������ɶ���д
	string m_Name;
	//���䣺ֻ��
	int m_Age;
	//���ˣ�ֻд
	string m_Lover;
};

int main()
{
	Person wwy;
	wwy.Name = "hhh";
	wwy.func();//ͨ�����������private��protected
//************************************************************************************
	Per bad_man;
	//�����ɶ���д
	bad_man.setName("����");
	cout << "����Ϊ��" << bad_man.getName() << endl;

	//����ֻ��
	cout << "����Ϊ��" << bad_man.getAge() << endl;

	//����ֻд
	bad_man.setLover("���Ӣ");
	system("pause");
	return 0;
}