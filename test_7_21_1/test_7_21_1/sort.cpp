#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdio.h>
using namespace std;

#define N  9
void fun(int a[], int n)
{
	int i, j, max, min, px, pn, t;
	for (i = 0; i < n - 1; i+=2)//���ﲻ����Խ������
	{
		max = min = a[i];
		px = pn = i;
		for (j = i + 1; j < n; ++j)//��ʵ�Ǳ���i������ĩβ����max/min������a[i]��Ȼ�����i+1������ĩβ����a[i]�ֱ���бȽ�
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
			if (px == i)//������ֵ�պ���i��λ�ô����������Ѿ���i�������ֵ������pn��������Ҫ���¸�ֵ
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