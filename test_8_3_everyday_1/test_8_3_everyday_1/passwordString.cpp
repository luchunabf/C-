#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#if 1
int main()
{
	string s1;
	while (getline(cin,s1))
	{
		int ret = s1.size();
		vector<char> v(ret);
		//string s2(ret);
		for (size_t i = 0; i < s1.size(); ++i)
		{
			if (s1[i] >= 'A' && s1[i] <= 'E')
			{
				v[i] = s1[i] + 21;
			}
			else if (s1[i] >= 'F' && s1[i] <= 'Z')
			{
				v[i] = s1[i] - 5;
			}
			else if (s1[i] == ' ')
				v[i] = ' ';
		}
		for (auto e : v)
			cout << e;
		cout << endl;
	}
	return 0;
}

#endif


