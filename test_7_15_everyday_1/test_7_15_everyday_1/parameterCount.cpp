#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
//#include <vector>
using namespace std;


/*分为两步：
*	首先根据空格和双引号判断参数个数，初始值为1
*		遇到双引号直接向后遍历到下一个个双引号
*		遇到空格则参数个数+1
*	第二步是输出分解后的参数，定义一个标志来判断当前是否在双引号内
*		不是空格或双引号直接打印
*		双引号中的空格打印
*		双引号外的空格用换行代替*/

int main()
{
	string s;
	size_t i = 0;
	while (getline(cin, s))
	{
		int count = 1;
		for (i = 0; i < s.size(); ++i)//计算参数个数：只判断空格，遇见双引号内的空格不用+1，直接i++，遇见双引号外的空格+1
		{
			if ('"' == s[i])
			{
				do
				{
					i++;
				} while ('"' != s[i]);
			}
			else if (' ' == s[i])
				++count;
		}
		cout << count << endl;
		int quote = 0;
		for (i = 0; i < s.size(); ++i)
		{
			if ('"' == s[i])
				quote ^= 1;//用于判断左右双引号，做双引号是变为1，右双引号变为0

			if (' ' != s[i] && '"' != s[i])//注意分情况的问题，只要不是空格，并且不是双引号的情况就必须打印
				cout << s[i];
			else if (' ' == s[i])//另一种情况是遇见空格了，判断是否在双引号内
			{
				if (quote)
					cout << s[i];//双引号内的空格打印
				else
					cout << endl;//双引号外的空格不打印
			}
		}
	}
	return 0;
}

