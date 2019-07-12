#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//#include <vector>
using namespace std;

int main()
{
	int m;
	while (cin >> m)
	{
		//cin >> m;
		int arr[32] = { 0 };
		for (int i = 0; i < 32; ++i)
		{
			if ((m >> i) & 1)
				arr[i] = 1;
		}
		int count = 0;
		int max = 0;
		for (int i = 0; i < 32; ++i)
		{
			if (arr[i] == 1)
			{
				count++;
				if (max <= count)
					max = count;
			}
			else
			{
				if (max <= count)
				{
					max = count;
					count = 0;
				}
				else
					count = 0;
			}
		}
		cout << max << endl;
	}
	return 0;
}
