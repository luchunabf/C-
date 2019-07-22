#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int getTotalCount(int monthCount)
{
	if (monthCount <= 2)
		return 1;
	return getTotalCount(monthCount - 1) + getTotalCount(monthCount - 2);
}

int main()
{
	int month;
	while (cin >> month)
	{
		cout << getTotalCount(month) << endl;
	}
	return 0;
}