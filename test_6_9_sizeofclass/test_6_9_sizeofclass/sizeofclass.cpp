#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stdlib.h>

#if 0
class A1
{
public:
	void f1()
	{}
private:
	int _a;
};

class A2
{
public:
	void f2()
	{}
};

class A3
{};

int main()
{
	int ret1 = sizeof(A1);//4
	int ret2 = sizeof(A2);//1
	int ret3 = sizeof(A3);//1
	cout << ret1 << endl;
	cout << ret2 << endl;
	cout << ret3 << endl;

	system("pause");
	return 0;
}
#endif

class A1
{
public:
	void f1()
	{}
private:
	int _a;
	char _b1;
	char _b2;
	char _b3;
	char _b4;
	char _b5;

};

class A2
{
public:
	void f2()
	{}
};

class A3
{};

int main()
{
	int ret1 = sizeof(A1);//12
	int ret2 = sizeof(A2);//1
	int ret3 = sizeof(A3);//1
	cout << ret1 << endl;
	cout << ret2 << endl;
	cout << ret3 << endl;

	system("pause");
	return 0;
}