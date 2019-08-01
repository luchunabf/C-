#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//#include <>
using namespace std;
bool InBowl(double n, double r)
{
	double d = 6.28 * r;
	if (d < n)
		return false;
	return true;
}
int main()
{
	int n, r;//int 是问题所在，将 int 改为 double即可通过编译
	while (cin >> n >> r)
	{
		if (InBowl((double)n, (double)r))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}


//正确答案：
#include <iostream>
using namespace std;
int main()
{
	double n, r;
	while (cin >> n >> r)
	{
		if (3.14 * 2 * r < n)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
	return 0;
}