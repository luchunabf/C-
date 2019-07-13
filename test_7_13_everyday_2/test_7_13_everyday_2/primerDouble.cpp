#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

bool IsPrime(int a)
{
	int Flag = 0;
	for (int i = 2; i < a; ++i)
	{
		if (a % i == 0)
		{
			Flag = 1;
			return false;
		}
	}
	//if(Flag == 0)
	return true;
}

int max1(int a, int b)
{
	return (a > b) ? a : b;
}
int min1(int a, int b)
{
	return (a < b) ? a : b;
}

int main()
{
	int m;
	while (cin >> m)
	{
		//cin >> m;
		int n = m / 2;
		int minX = m;
		int k = 0;
		for (int i = 0; i <= n; ++i)
		{
			if (IsPrime(i))
			{
				k = (max1(i, m - i) - min1(i, m - i));
				if (minX >= k)
					minX = k;
			}
		}
		cout << (m - minX) / 2 << endl;
		cout << (m - minX) / 2 + minX << endl;
	}
	return 0;
}