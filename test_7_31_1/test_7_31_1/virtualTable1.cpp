#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdio.h>
using namespace std;

#if 0
class Base1
{
public:
	virtual void Func1()
	{
		cout << "Base1::Func1" << endl;
	}
	virtual void Func2()
	{
		cout << "Base1::Func2" << endl;
	}
private:
	int _b1;
};
class Base2
{
public:
	virtual void Func1()
	{
		cout << "Base2::Func1" << endl;
	}
	virtual void Func2()
	{
		cout << "Base2::Func2" << endl;
	}
private:
	int _b2;
};
class Drived : public Base1, public Base2
{
public:
	virtual void Func1()
	{
		cout << "Drived::Func1" << endl;
	}
	virtual void Func3()
	{
		cout << "Drived::Func3" << endl;
	}
	//virtual void Func4()
	// {
	//	 cout << "Drived::Func4" << endl;
	// }
private:
	int _d;
};

typedef void(*VFPTR)();
void PrintTable(VFPTR vTable[])
{
	cout << "虚表地址：" << vTable << endl;
	for (int i = 0; vTable[i] != nullptr; ++i)
	{
		printf("第%d个地址：0x%x ", i, vTable[i]);
		VFPTR f = vTable[i];
		f();
	}
	cout << endl;
}



int main()
{
	//Drived d;
	//cout << sizeof(Drived) << endl;
	//cout << sizeof(d) << endl;



	//Base1 b;
	//VFPTR* vTableb = (VFPTR*)(*(int*)&b);
	//PrintTable(vTableb);

	Drived d1;
	//VFPTR* vTabled1 = (VFPTR*)(*(int*)&d1);
	//PrintTable(vTabled1);
	Drived d2;
	//VFPTR* vTabled2 = (VFPTR*)(*(int*)((char*)&d2 + sizeof(Base1)));
	//PrintTable(vTabled2);
	return 0;
}
#endif 

#if 0
//单继承
class Base1
{
public:
	virtual void Func1()
	{
		cout << "Base1::Func1" << endl;
	}
	virtual void Func2()
	{
		cout << "Base1::Func2" << endl;
	}
private:
	int _b1;
};

class Drived : public Base1
{
public:
	virtual void Func1()//第一个虚函数重写
	{
		cout << "Drived::Func1" << endl;
	}
	virtual void Func3()
	{
		cout << "Drived::Func3" << endl;
	}
	virtual void Func4()
	{
		cout << "Drived::Func4" << endl;
	}
private:
	int _d;
};
int main()
{
	Base1 b;
	Drived d;
	cout << "b大小为:" << sizeof(b) << endl;
	cout << "d大小为:" << sizeof(d) << endl; 
	return 0;
}
#endif

#if 0
//多继承
class Base1
{
public:
	virtual void Func1()
	{
		cout << "Base1::Func1" << endl;
	}
	virtual void Func2()
	{
		cout << "Base1::Func2" << endl;
	}
private:
	int _b1;
};
class Base2
{
public:
	virtual void Func1()
	{
		cout << "Base2::Func1" << endl;
	}
	virtual void Func2()
	{
		cout << "Base2::Func2" << endl;
	}
private:
	int _b2;
};
class Drived : public Base1, public Base2
{
public:
	virtual void Func1()
	{
		cout << "Drived::Func1" << endl;
	}
	virtual void Func3()
	{
		cout << "Drived::Func3" << endl;
	}
	//virtual void Func4()
	// {
	//	 cout << "Drived::Func4" << endl;
	// }
private:
	int _d;
};

int main()
{
	Base1 b1;
	Base2 b2;
	Drived d;
	cout << "b1大小为:" << sizeof(b1) << endl;
	cout << "b2大小为:" << sizeof(b2) << endl;
	cout << "d大小为:" << sizeof(d) << endl;
	return 0;
}
#endif 

#if 0
//抽象类
class Car
{
public:
	virtual void Func() = 0;
private:
	int _a;
};
int main()
{
	cout << sizeof(Car) << endl;
	return 0;
}
#endif

//多态
#if 0
//利用基类引用调用虚函数
//class Person
//{
//public:
//	virtual void Func()
//	{
//		cout << "购买成人票" << endl;
//	}
//};
//
//class Child : public Person
//{
//public:
//	virtual void Func()
//	{
//		cout << "购买儿童票" << endl;
//	}
//};
//void Test(Person& people)
//{
//	people.Func();
//}
//int main()
//{
//	Person mike;
//	Test(mike);
//	Child cmike;
//	Test(cmike);
//	return 0;
//}
#endif

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

