#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> v;
	v.resize(n + 1);
	int i = 0;
	//for (i = 0; i < v.size(); ++i)
	for (i = 0; i < n; ++i)//size要输入多少个就小于多少，不要用v.size()
		cin >> v[i];
	v[n] = 0;

	i = 0;
	int count = 0;
	while (i < n)
	{
		if (v[i] < v[i + 1])
		{
			while (i < n && v[i] <= v[i + 1])
				++i;
			++count;
			++i;
		}
		else if (v[i] == v[i + 1])
		{
			while (i < n && v[i] == v[i + 1])
				++i;
		}
		else
		{
			while (i < n && v[i] >= v[i + 1])
				++i;
			++count;
			++i;
		}
	}
	cout << count << endl;
	return 0;
}