#define _CRT_SECURE_NO_WARNINGS 1

#if 0
//求两个字符串的最大公共字串长度
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//		求最大公共子串，使用递推实现 假设 x(i): 字符串第i个字符 y(j): 字符串第j个字符 dp[i][j]: 以x(i),y(j)结尾的最
//		 大子串长度 比如：x : "abcde" y : "bcdae" dp[2][1] : 以x(2), y(1)结尾的最大子串长度 即：x遍历到"abc", y遍历
//		到"bc", 都以字符'c'结尾时最大公共子串为"bc" 故：当计算dp[i][j]时，首先看x(i), y(j)的值： （1） : x(i) == y(j)
//		当前两个字符串结尾的字符相等，dp[i][j] = dp[i - 1][j - 1] + 1 即个它的长度加1 （2） : x(i) != y(j) 当前两个字符
//		串结尾的字符不相等，说明没有以这连个字符结尾的公共子串 即dp[i][j] = 0 （3） : dp[0][j] 和 dp[i][0]表示以
//		某个子串的第一个字符结尾，最大长度为1 如果x(0) == y(j) 或者 x(i) == y(0), 则长度为1，否则为0 当dp中的
//		所有元素计算完之后，从中找打最大的值输出
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int max = 0;
		int len1 = s1.size();
		int len2 = s2.size();
		vector<vector<int>> v(len1, vector<int>(len2));//以s1的长度为行，以s2的长度为列创建二维数组（维护一个二维数组保存对应s1走到i和s2走到j时候的公共字串最大长度[状态]）
		for (int i = 0; i < len1; ++i)//遍历整个二维数组
		{
			for (int j = 0; j < len2; ++j)
			{
				if (s1[i] == s2[j])//遍历二维数组的同时也在遍历s1和s2，当s1[i] == s2[j]时就要给二维数组加1操作了
				{
					if (i >= 1 && j >= 1)
						v[i][j] = v[i - 1][j - 1] + 1;//当s1[i] == s2[j]时，这一次的结果等于前一次的结果加1 注意是斜对角线上的钱一个元素加1
					else
						v[i][j] = 1;//这里是处理第一行 j=0 和第一列 i=0 的情况，特殊处理，因为按照上面的方式处理，数组会越界
				}
				if (v[i][j] > max)//用max来保存最大长度，即遍历二维数组中的最大值
					max = v[i][j];
			}
		}
		cout << max << endl;
	}
	return 0;
}
#endif


//求两个字符串的最大公共字串，若有多个，输出第一个
//解题思路同上
//但是注意与上面只求长度的区别：1 需要让len1保存的是s1和s2中较小的  2 多保存一个start用来通过i寻找字符串的起始位置 start = i - max + 1;



#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int max = 0, start = 0;
		if (s1.size() > s2.size())
		{
			swap(s1, s2);
		}
		int len1 = s1.size();
		int len2 = s2.size();
		vector<vector<int>> v(len1, vector<int>(len2));
		for (int i = 0; i < len1; ++i)
		{
			for (int j = 0; j < len2; ++j)
			{
				if (s1[i] == s2[j])
				{
					if (i >= 1 && j >= 1)
						v[i][j] = v[i - 1][j - 1] + 1;
					else
						v[i][j] = 1;
				}
				if (max < v[i][j])
				{
					max = v[i][j];
					start = i - max + 1;
				}
			}
		}
		cout << s1.substr(start, max) << endl;
	}
	return 0;
}

//参考思路
//本题需要用动态规划求解，MCS[i][j]记录短字符串 s1 前 i 个字符和长字符串 s2 前 j 个字符的最长子串的长
//度，初始化所有值为 0。当 s1[i - 1] = s2[j - 1]时，MCS[i][j] = MCS[i - 1][j - 1] + 1，这里使用一个额外的值
//start 来记录最长子串在短字符串 s1 中出现的起始位置，maxlen记录当前最长子串的长度，当MCS[i][j] >
//maxlen 时，maxlen = MCS[i][j]， 则start = i - maxlen ；档s1[i - 1] != s2[j - 1]时不需要任何操作，最后获取
//substr(start, maxlen)即为所求