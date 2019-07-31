#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;///////////////注意题目范围，必须double
	while (cin >> a >> b >> c)
	{
		if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))//两边之和大于第三边 即判断能否组成三角形
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
