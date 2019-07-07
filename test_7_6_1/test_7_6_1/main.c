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
	printf("b = %d\n", b);//16 :  ��(double)��ʱ�򣬶��뵽����������������
								//����������(double)�����С��Ĭ�϶������Ľ�Сֵ��
								//�����Ƕ��뵽��(double)��С��������

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