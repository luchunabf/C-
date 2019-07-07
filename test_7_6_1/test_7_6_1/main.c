#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


#if 0
#pragma pack(4)
struct One
{
	double d;
	char c;
	int i;
};

struct Two
{
	char c;
	double d;
	int i;
};

int main()
{
	struct One one;
	struct Two two;
	int a = sizeof(one);
	printf("a = %d\n", a);//16
	int b = sizeof(two);
	printf("b = %d\n", b);//16 :  放(double)的时候，对齐到对齐数的整数倍，
								//而对齐数是(double)本身大小和默认对齐数的较小值，
								//并不是对齐到它(double)大小的整数倍

	return 0;
}
#pragma pack()
#endif 


#pragma pack(8)
struct One
{
	double d;
	char c;
	int i;
};

struct Two
{
	char c;
	double d;
	int i;
};

int main()
{
	struct One one;
	struct Two two;
	int a = sizeof(one);
	printf("a = %d\n", a);//16
	int b = sizeof(two);
	printf("b = %d\n", b);//24

	return 0;
}