#include<iostream>
#include<string>
using namespace std;

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���






//2.ֵ���ݵķ�ʽ������������ֵ


//3.ֵ��ʽ���ؾֲ�����

class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}
	
	Person(int age)
	{
		cout << "Person�вκ�������" << endl;
		m_Age = age;
	}

	Person(const Person& p)
	{
		cout << "Person������������" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}

	int m_Age;
};


int main()
{
	char s[10];
	cout << "Hello world!" << endl;

	printf("HELLO!");
	scanf("%s", s);
}
