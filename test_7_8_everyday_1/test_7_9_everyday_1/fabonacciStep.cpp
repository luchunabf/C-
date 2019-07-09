#define _CRT_SECURE_NO_WARNINGS 1

#if 0
//求递归的次数
#include <stdio.h>
int count = 0;
int fib(int n)
{
	++count;
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int N;
	scanf("%d",&N);
	//int count = 0;

	fib(N);
	printf("%d\n", count);
	return 0;
}
#endif

#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int f0 = 0, f1 = 1, f;
	int a, b;
	cin >> N;
	while (1)
	{
		f = f0 + f1;
		f0 = f1;
		f1 = f;
		if (f < N)
			a = N - f;
		else
		{
			b = f - N;
			break;
		}
	}
	cout << min(a, b) << endl;
	return 0;
}