#define _CRT_SECURE_NO_WARNINGS 1
//杨辉三角：两种方法
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

#if 0
vector<vector<int>> pascalTriangle1(int numRows)
{
	vector<vector<int>> v;
	if (0 == numRows)
		return v;
	v.resize(numRows);//numRows个一维数组
	for (size_t i = 0; i < v.size(); ++i)
	{
		v[i].resize(i + 1);
		v[i][0] = v[i][i] = 1;
		for (size_t j = 1; j < i; ++j)
		{
			v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
		}
	}
	return v;
}

int main()
{
	vector<vector<int>> v;
	v = pascalTriangle1(5);
	for (size_t i = 0; i < v.size(); ++i)
	{
		for (size_t j = 0; j < v[i].size(); ++j)
		{
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
#endif

#if 0
vector<vector<int>> pascalTriangle1(int n)
{
	vector<vector<int>> v;
	if (0 == n)
		return v;
	v.resize(n);//n个一维数组
	for (size_t i = 0; i < v.size(); ++i)
	{
		v[i].resize(i + 1);
		v[i][0] = v[i][i] = 1;
	}

	for (size_t i = 2; i < v.size(); ++i)
	{
		for (size_t j = 1; j < i; ++j)
		{
			v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
		}
	}
	return v;
}

int main()
{
	vector<vector<int>> v;
	v = pascalTriangle1(5);
	for (size_t i = 0; i < v.size(); ++i)
	{
		for (size_t j = 0; j < v[i].size(); ++j)
		{
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
#endif

vector<vector<int>> pascalTriangle1(int n)
{
	vector<vector<int>> v;
	if (0 == n)
		return v;
	v.resize(n);//n个一维数组
	for (size_t i = 0; i < v.size(); ++i)
	{
		v[i].resize(i + 1);
		v[i][0] = v[i][i] = 1;
	}

	for (size_t i = 0; i < v.size(); ++i)//v.size()代表的是一维数组的个数（也就是二维数组的行数）
	{
		for (size_t j = 0; j < v[i].size(); ++j)//v[i].size()代表的是二维数组中一位数组的元素个数
		{
			if (v[i][j] == 0)
			v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
		}
	}
	return v;
}

int main()
{
	vector<vector<int>> v;
	v = pascalTriangle1(5);
	for (size_t i = 0; i < v.size(); ++i)
	{
		for (size_t j = 0; j < v[i].size(); ++j)
		{
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
	system("pause");
	return 0;
}