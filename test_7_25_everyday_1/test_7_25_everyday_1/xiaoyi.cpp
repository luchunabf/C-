#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int fib(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return b;
}
int main()
{

	int n, a;
	while (cin >> n >> a)
	{
		//cin >> n >> a;

		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			//    }

			//    for(int i = 0; i < n; ++i)
			//    {
			if (a >= v[i])
				a += v[i];
			else
			{
				a += fib(a, v[i]);
			}
		}
		cout << a << endl;

	}

	return 0;
}