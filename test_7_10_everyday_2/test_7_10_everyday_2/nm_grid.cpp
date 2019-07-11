#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int find(int n, int m)
{
	if (n == 1)
		return m + 1;
	else if (m == 1)
		return n + 1;
	return find(n - 1, m) + find(n, m - 1);
}
int main()
{
	int n, m;
	while (cin >> n >> m)
		cout << find(n, m) << endl;
	return 0;
}