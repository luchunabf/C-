#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

//public static int findNumberOf1(int num)
static int findNumberOf1(int num)
{
	vector<int> v;
	v.resize(32);
	int count = 0;
	for (size_t i = 0; i < v.size(); ++i)
	{
		v[i] = (num >> i) & 1;
		count += v[i];
	}

	return count;
}

int main()
{
	int num;
	while (cin >> num)
	{
		int ret = findNumberOf1(num);
		cout << ret << endl;
	}
	
	return 0;
}