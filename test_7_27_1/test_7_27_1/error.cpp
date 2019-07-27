#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

int division(int a, int b)
{
	if (b == 0)
		throw "error";
	else
		return a / b;
}

void Func()
{
	int a, b;
	cin >> a >> b;
	int ret = division(a, b);
	cout << ret << endl;
}

int main()
{
	try
	{
		Func();
	}
	catch (const char* s)
	{
		cout << s << endl;
	}
	catch (...)
	{
		cout << "unknown error" << endl;
	}
	return 0;
}