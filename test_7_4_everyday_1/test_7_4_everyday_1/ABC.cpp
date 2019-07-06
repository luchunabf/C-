#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int A = (a + c) / 2;
	int B = (c - a) / 2;
	int C = (d - b) / 2;
	if ((A - B == a) && (B - C == b) && (A + B == c) && (B + C == d))
		cout << A << ' ' << B << ' ' << C;
	else
		cout << "No";
	return 0;
}