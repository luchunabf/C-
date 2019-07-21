#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdio.h>
using namespace std;

#define N  9
void fun(int a[], int n)
{
	int i, j, max, min, px, pn, t;
	for (i = 0; i < n - 1; i+=2)//这里不存在越界问题
	{
		max = min = a[i];
		px = pn = i;
		for (j = i + 1; j < n; ++j)//其实是遍历i到数组末尾，用max/min保存了a[i]，然后遍历i+1到数组末尾，用a[i]分别进行比较
		{
			if (max < a[j])
			{
				max = a[j];
				px = j;
			}
			if (min > a[j])
			{
				min = a[j];
				pn = j;
			}
		}
		if (pn != i)
		{
			t = a[i];
			a[i] = min;
			a[pn] = t;
			if (px == i)//如果最大值刚好在i的位置处，因上面已经将i处的最大值换到了pn处，故需要重新赋值
				px = pn;
		}
		if (px != i + 1)
		{
			t = a[i + 1];
			a[i + 1] = max;
			a[px] = t;
		}
	}
}

int main()
{
	int b[N] = { 9, 1, 4, 2, 3, 6, 5, 8, 7 };
	for (int i = 0; i < N; ++i)
	{
		printf("% 4d", b[i]);
	}
	printf("\n");
	fun(b, N);
	for (int i = 0; i < N; ++i)
		printf("% 4d", b[i]);
	printf("\n");
	return 0;
}