#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdlib.h>
using namespace std;
//求最大公约数的三种方法:

//最小公倍数=(a*b)/a和b的最大公约数
//辗转相除法：
//有两整数a和b：
//
//① a%b得余数c
//
//② 若c = 0，则b即为两数的最大公约数
//
//③ 若c≠0，则a = b，b = c，再回去执行①
//
//例如求27和15的最大公约数过程为：
//
//27÷15 余12   15÷12余3   12÷3余0  因此，3即为最大公约数
int fib1(int a, int b)
{
	while (a % b)
	{
		int ret = a;
		a = b;
		b = ret % b;
	}
	return b;//注意是返回b
}




//相减法
//有两整数a和b：
//
//① 若a > b，则a = a - b
//
//② 若a<b，则b = b - a
//
//③ 若a = b，则a（或b）即为两数的最大公约数
//
//④ 若a≠b，则再回去执行①
//
//例如求27和15的最大公约数过程为：
//
//27－15＝12(15>12) 15－12＝3(12 > 3)
//
//12－3＝9(9 > 3) 9－3＝6(6 > 3)
//
//6－3＝3(3 == 3)
//
//因此，3即为最大公约数
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


//穷举法
//有两整数a和b：
//
//① i = 1
//
//② 若a，b能同时被i整除，则t＝i
//
//③ i++
//
//④ 若 i <= a(或b)，则再回去执行②
//
//⑤ 若 i > a(或b)，则t即为最大公约数，结束
//
//改进：
//
//① i = a(或b)
//
//② 若a，b能同时被i整除，则i即为最大公约数，
//
//结束
//
//③ i--，再回去执行②
//
int fib3(int a, int b)
{
	//int t;
	//for (int i = 1; i <= a; ++i)
	//{
	//	if (a%i == 0 && b %i == 0)
	//		t = i;//i是从小（1）到大（a），然后会有很多个数同时被整除，而t会一直保存最大的
	//}
	//return t;

	//改进:i从大到小，第一次全部整除时即最大公约数
	int i;
	for (i = a; i > 0; --i)
	{
		if (a%i == 0 && b % i == 0)
			break;
	}
	return i;


}


//穷举法求最小公倍数
int f(int a, int b)
{
	//int i = max(a, b);
	int i;
	for (i = a;; ++i)
	{
		if (i % a == 0 && i % b == 0)
			break;
	}
	return i;
}

//穷举法求多个数的最大公约数最小公倍数
int f1(int a, int b,int c)
{
	int i;
	for (i = a; i > 0; ++i)///////////////////////////////最大公约数，i的范围是从1到a
	{
		if (a % i == 0 && b % i == 0 && c % i == 0)
			break;
	}
	return i;
}
int f2(int a, int b, int c)
{
	int i;
	for (i = a;; ++i)//i从a开始一直往上加////////////////////////////最小公倍数，i的范围是从a一直往上加（无上限），直至找到最小公倍数
	{
		if (i % a == 0 && i%b == 0 && i % c == 0)
			break;
	}
	return i;
}

int main()
{
	int a = 4, b = 9;
	cout << fib1(4, 9) << endl;
	cout << (a*b) / fib1(4, 9) << endl;
	cout << fib2(4, 9) << endl;
	cout << (a*b) / fib2(4, 9) << endl;
	cout << fib3(4, 9) << endl;
	cout << (a*b) / fib3(4, 9) << endl;
	cout << f(4, 9) << endl;
	cout << f1(1, 4, 9) << endl;
	cout << f2(1, 4, 9) << endl;

	return 0;
}



