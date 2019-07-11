#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//շת�����
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

//�����
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

//��ٷ�
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
//�Ľ�
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