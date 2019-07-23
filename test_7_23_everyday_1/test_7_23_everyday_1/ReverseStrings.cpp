#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <list>
using namespace std;

#if 0
int main()
{
	string s;
	while (cin >> s)
	{
		list<char> l;
		size_t N = s.size();
		l.resize(N);
		for (int i = 0; i < N; ++i)
			l.push_back(s[i]);
		l.reverse();
		for (auto e : l)
			cout << e;
		cout << endl;
	}
	return 0;
}
#endif

#if 0
int main()
{
	string s;
	
	while (cin >> s)
	{
		if (s.empty())
			return -1;
		size_t N = s.size();
		for (int i = N - 1; i >= 0; --i)
			cout << s[i];
		cout << endl;
	}
	return 0;
}
#endif

int main()
{
	string s;
	while (cin >> s)
	{
		//cin >> s;
		if (s.empty())
			return -1;
		size_t begin = 0, end = s.size() - 1;
		while (begin < end)
		{
			swap(s[begin], s[end]);
			++begin;
			--end;
		}
		cout << s << endl;
	}
	return 0;
}