#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//��̬
#if 0
//���û������õ����麯��
class Person
{
public:
	virtual void Func()
	{
		cout << "�������Ʊ" << endl;
	}
};

class Child : public Person
{
public:
	virtual void Func()
	{
		cout << "�����ͯƱ" << endl;
	}
};
void Test(Person& people)
{
	people.Func();
}
int main()
{
	Person mike;
	Test(mike);
	Child cmike;
	Test(cmike);
	return 0;
}
#endif

#if 0
//���û���ָ������麯��
class Person
{
public:
	virtual void Func()
	{
		cout << "����Ʊ" << endl;
	}
};
class Child : public Person
{
public:
	virtual void Func()
	{
		cout << "���Ʊ" << endl;
	}
	//virtual void Func1()
	//{
	//	cout << "123" << endl;
	//}
};

void Test(Person* people)
{
	people->Func();
}
int main()
{
	Person p;
	Test(&p);
	Child c;
	Test(&c);
	return 0;
}
#endif

#if 0
//�̳�
//ͬ������
class Base
{
public:
	int _b;
};
class Drived : public Base
{
public:
	int _b;
	int _d;
};
int main()
{
	Drived d1;
	d1._b = 1;
	d1.Base::_b = 0;//ע��ʹ�÷�ʽ
	return 0;
}
#endif