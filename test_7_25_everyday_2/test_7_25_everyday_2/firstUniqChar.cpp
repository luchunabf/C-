#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		vector<char> v(256);
		for (int i = 0; i < s.size(); ++i)
		{
			v[s[i]] += 1;
		}
		int Flag = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			//int Flag = 0;
			if (v[s[i]] == 1)
			{
				Flag = 1;
				cout << s[i] << endl;
				break;
			}
			//if(Flag == 0)
		}
		if (Flag == 0)
			cout << -1 << endl;
	}
	return 0;
}