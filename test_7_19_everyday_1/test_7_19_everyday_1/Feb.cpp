#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
//�����ά����Խ�����⣺������/����/ǰ��/�������ȫΪ0�����м���
int Feb(int n)
{
	vector<vector<int>> v;
	v.resize(n + 1);
	int m = 2 * n + 1;//ÿһ�е�����
	for (int i = 1; i <= n; ++i)
	{
		v[i].resize(m);
		for (int j = 1; j < m - 1; ++j)
		{
			if (i == 1)
				v[i][n] = 1;
			else
				v[i][j] = v[i - 1][j - 1] + v[i - 1][j] + v[i - 1][j + 1];
		}
	}
	for (int k = 1; k < m - 1; ++k)
	{
		if (v[n][k] == 0)
			continue;
		else if (v[n][k] % 2 == 0)
			return k;
	}
	return -1;
}
int main()
{
	int n;
	while (cin >> n)
	{
		if (n < 0)
			return 0;
		else
		{
			cout << Feb(n) << endl;
		}
	}
	return 0;
}