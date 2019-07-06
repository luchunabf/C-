#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s1;
	string s2("0123456789ABCDEF");
	int M, N;
	cin >> M >> N;
	//int i = 0;
	if (M == 0)
		cout << "0";
	while (M)
	{
		if (M < 0)
		{
			M = -M;
			//s1 += '-';
			cout << '-';
		}
		s1 += s2[M % N];
		M /= N;
		//++i;
	}

	reverse(s1.begin(), s1.end());
	cout << s1;

	return 0;
}