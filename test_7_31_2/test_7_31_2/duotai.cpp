#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//多态
#if 0
//利用基类引用调用虚函数
class Person
{
public:
	virtual void Func()
	{
		cout << "购买成人票" << endl;
	}
};

class Child : public Person
{
public:
	virtual void Func()
	{
		cout << "购买儿童票" << endl;
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
//利用基类指针调用虚函数
class Person
{
public:
	virtual void Func()
	{
		cout << "成人票" << endl;
	}
};
class Child : public Person
{
public:
	virtual void Func()
	{
		cout << "半价票" << endl;
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
//继承
//同名隐藏
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
	d1.Base::_b = 0;//注意使用方式
	return 0;
}
#endif