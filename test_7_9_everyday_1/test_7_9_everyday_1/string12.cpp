#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#if 0
bool lexicographically(string s1, string s2)
{

}
bool length(string s1, string s2)
{

}

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	//vector<string> a;
	//a.resize(n);
	//while(geline(cin, ))
	string s[n];
	for (int i = 0; i < n; ++i)
	{
		getline(cin, s[i]);
	}

	return 0;
}
#endif

//判断一个字符串数组中的字符串是不是按照字典排序的
bool is_dict_rank(vector<string>& vec)
{
	for (int i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i] > vec[i + 1])
		{
			return false;
		}
	}
	return true;
}

//判断一个字符串数组中的字符串是不是按照长度排序
bool is_len_rank(vector<string>& vec)
{
	for (int i = 0; i < vec.size() - 1; i++)
	{
		if (vec[i].size() > vec[i + 1].size())
		{
			return false;
		}
	}
	return true;
}

void rank_means()
{
	int n;
	cin >> n;//输入几个字符串

	vector<string> v;
	v.resize(n);

	//将字符串输入到字符串数组v中
	for (int i = 0; i < n; i++)
	{
		cin.get();//取走缓冲区中的\n符
		getline(cin, v[i]);
	}

	if (is_dict_rank(v) && !is_len_rank(v))
	{
		cout << "lexicographically" << endl;
	}
	else if (!is_dict_rank(v) && is_len_rank(v))
	{
		cout << "lengths" << endl;
	}
	else if (is_dict_rank(v) && is_len_rank(v))
	{
		cout << "both" << endl;
	}
}



