#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>

namespace N
{
	int a = 10;
	int b = 20;
	int Add(int left, int right)
	{
		return left + right;
	}
	int Sub(int left, int right)
	{
		return left - right;
	}
}

using namespace N;
int main()
{
	printf("%d\n", N::a);
	printf("%d\n",Add(10, 20));
	system("pause");
	return 0;
}