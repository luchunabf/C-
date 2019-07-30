#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int f1(int n)
{
	if (n <= 0)
		return 0;
	int total = 1;
	for (int i = 1; i < n; ++i)
		total *= 2;
	return total;
}

int f2(int n)
{
	if (n <= 0)
		return 0;
	return 1<<(n - 1);
}
int main()
{
	int n = 6;
	cout << "f1=" << f1(n) << endl;
	cout << "f2=" << f2(n) << endl;
	return 0;
}