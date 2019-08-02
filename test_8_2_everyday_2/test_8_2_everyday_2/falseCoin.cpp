#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		while (n > 1)
		{
			n /= 2;
			++count;
		}
		cout << count << endl;
	}
	return 0;
}




//参考下别人的
//有假币
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
#define ms(x, n) memset(x,n,sizeof(x));
typedef  long long LL;
const LL maxn = 1 << 30 + 5;

int solve(int n)
{
	if (n == 1)
		return 0;
	if (n <= 3)
		return 1;
	else
		return solve((n + 2) / 3) + 1;
}
int main()
{
	int n;
	while (cin >> n && n != 0)
		cout << solve(n) << endl;
	return 0;
}