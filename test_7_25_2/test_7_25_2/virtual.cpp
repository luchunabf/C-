#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

class Base1
{
public:
	virtual void func1()
	{
		cout << "Base1:: func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base1:: func2()" << endl;
	}
private:
	int _b1;
	char _b2;
	double _b3;
};
class Base2
{
public:
	virtual void func1()
	{
		cout << "Base2:: func1()" << endl;
	}
	virtual void func2()
	{
		cout << "Base2:: func2()" << endl;
	}
private:
	int _b4;
	double _b5;
	char _b6;

};
class Drived :public Base1, public Base2
{
public:
	virtual void func1()
	{
		cout << "Drived::func1()" << endl;
	}
	virtual void func3()
	{
		cout << "Drived:: func3()" << endl;
	}
private:
	int _d1;
};

int main()
{
	Drived d1;
	cout << sizeof(d1) << endl;//20 继承两个类，两个虚表指针【继承几种类，就有几种类的虚表指针】【而派生类复制基类的虚表？？？？？】
	return 0;/////////////【继承几种类，就复制几种类的虚表指针，自己的虚函数，重写了就覆盖，未重写就给第一个继承类的续表后面添加】
	////////////////////// 所以计算大小：看继承几种类，就加几种指针，其他按照成员变量加和即可
}