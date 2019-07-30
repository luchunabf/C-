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
	int n, r;
	while (cin >> n >> r)
	{
		if (InBowl((double)n, (double)r))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}