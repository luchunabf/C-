#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//辗转相除法
int fib1(int a, int b)
{
	while (a%b)
	{
		int ret = a;
		a = b;
		b = ret%b;
	}
	return b;
}

//相减法
int fib2(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

//穷举法
int fib3(int a, int b)
{
	int i,t;
	for (i = 1; i < a; ++i)
	{
		if (a%i == 0 && b%i == 0)
			t = i;
	}
	return t;
}
//改进
int fib4(int a, int b)
{
	int i;
	for (i = a; i > 0; --i)
	{
		if (a%i == 0 && b%i == 0)
			break;
	}
	return i;
}


int main()
{
	int a, b;
	cin >> a>>b;
	cout << fib1(a, b) << endl;
	cout << fib2(a, b) << endl;
	cout << fib3(a, b) << endl;
	cout << fib4(a, b) << endl;
	return 0;
}