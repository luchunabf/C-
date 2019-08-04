#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <math.h>

int main()
{
	int n, i, j, t;
	int a[100];
	while (scanf("%d", &n) != EOF)
	{
		int j = 0;
		t = 0;
		for (i = 2; i <= sqrt(n); i++)
		{
			if (n%i == 0)
			{
				n /= i;
				t++;
			}
			while (n%i == 0)
			{
				n /= i;
			}
		}
		if (n != 1)//n为质数的情况 
			t++; //自身加一 
		printf("%d\n", t);
	}
	return 0;
}