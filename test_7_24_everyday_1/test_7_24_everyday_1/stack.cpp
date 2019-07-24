#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	int T;
	while (cin >> T)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v;
		v.resize(2*n);
		//v[0] = 0;
		for (int i = 0; i < 2*n; ++i)
			cin >> v[i];
		while (k)
		{
			stack<int> s1, s2, s3;
			for (int i = 0; i < n; ++i)
			{
				s1.push(v[i]);
			}
			for (int i = n; i < 2*n; ++i)
			{
				s2.push(v[i]);
			}
			for (int i = 0; i < n; ++i)
			{
				s3.push(s2.top());
				s2.pop();
				s3.push(s1.top());
				s1.pop();
			}
			for (int i = 0; i < 2*n; ++i)
			{
				v[i] = s3.top();
				s3.pop();
			}
			k--;
		}
		for (int i = 0; i < 2*n; ++i)
		{
			cout << v[i] << " ";
		}
	}
	return 0;
}