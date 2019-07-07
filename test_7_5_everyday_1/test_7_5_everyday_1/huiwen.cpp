#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
bool judge(string str)
{
	int left = 0;
	int right = str.size() - 1;
	while (left < right)
	{
		if (str[left] == str[right])
		{
			left++;
			right--;
		}
		else
			return false;
	}
	return true;
}
int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int i;
	int l = s1.size();
	//int l = strlen(s1);
	int count = 0;
	for (i = 0; i < l; ++i)
	{
		string ss = s1.substr(0, i) + s2 + s1.substr(i);//字符串可以直接相加减，但是顺序不能反
		if (judge(ss))
			++count;
	}
	if (judge(s1 + s2))
		++count;
	cout << count << endl;
	return 0;
}