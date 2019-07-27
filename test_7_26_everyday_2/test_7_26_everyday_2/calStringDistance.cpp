#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

int min(int a, int b)
{
	return a <= b ? a : b;
}
int calStringDistance(string& s1, string& s2)
{
	int count = 0;
	if (s1 == s2)
		return count;
	if (s1.size() != s2.size())
	{
		if (s1.size() > s2.size())
			count += (s1.size() - s2.size());
		else
			count += (s2.size() - s1.size());
	}
	int minsize = min(s1.size(), s2.size());
	for (int i = 0; i < minsize; ++i)
	{
		if (s1[i] != s2[i])
			count += 1;
	}
	return count;
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		cout << calStringDistance(s1, s2) << endl;
	}
	return 0;
}