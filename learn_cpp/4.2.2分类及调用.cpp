#include<iostream>
#include<string>
using namespace std;

//���캯���ķ��༰����
// ����
//���ղ�������   �޲ι��죨Ĭ�Ϲ��죩���вι���
//�������ͷ���   ��ͨ����   ��������


class Person
{
public:
	Person()
	{
		cout << "Person���޲ι��캯������" << endl;
	}

	Person(int a)//�в�������
	{
		age = a;
		cout << "Person���в�������������" << endl;
	}

	//�������캯��
	Person(const Person &p)//��p����������copy���ҵ����ϣ�ԭp�������޸�
	{
		cout << "Person�Ŀ������캯������" << endl;
		age = p.age;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}


	int age;
};


//����
void test01()
{
	//1.���ŷ�(����)
	Person p1;//Ĭ�Ϲ��캯������
	Person p2(10);
	Person p3(p2);
	//ע�����
	// ����Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ�ӣ�������Person px()�ᱻ��������Ϊ�Ǻ�����������������void func();
	//�޲������ţ��в������š�
	cout << endl << "**************************************" << endl << endl;

	//2.��ʾ��
	Person p4;
	Person p5 = Person(10);
	Person p6 = Person(p5);

	Person(10);//��������  �ص㣺��ǰ��ִ�н�����ϵͳ���������ո���������
	//ע�����
	//��Ҫ���ÿ������캯�� ��ʼ���������� ����������Ϊ Person(p3) == Person p3
	//����Ϊ�ض��壬�ظ����������
	cout << endl << "**************************************" << endl << endl;


	//3.��ʽת����
	Person p7 = 10;//�൱��Person p7=Person(10);����������ʽת��
	Person p8 = p7;//��������
}

int main()
{
	//Person p;//��return 0�����ʵ����������

	test01();//�ھֲ��������ͷ�ʱ�ͻ�ִ������

	system("pause");
	return 0;
}