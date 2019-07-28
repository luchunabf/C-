#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
//洗牌
//【题目解析】：
//本题题目的意思是模拟洗牌过程，牌被分成两组，且每组数量相等，然后每组牌从最后一个牌交叉排列，最
//后再把排列逆序就是一次洗牌的过程，K次需要重复K次这样的过程。
//【解题思路】：
//每次读取一个数之后，算出他经过k次洗牌后的位置，只用一个长度为2n数组用来输出
//根据当前数的位置，可以算出经过一次洗牌后的位置
//如果当前数小于等于n（即在左手），则他下次出现的位置是 2 * 当前位置
//与之对应的当前位置 + n（即在右手）的牌, 则他下次出现的位置是 2 * 当前位置 + 1
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> v1(2 * n);
		for (int i = 0; i < 2 * n; ++i)
			cin >> v1[i];
		while (k--)
		{
			vector<int> v2(v1.begin(), v1.end());
			for (int i = 0; i < n; ++i)//注意这种新思想，只需要遍历一半，就可以将所有排满
			{
				v1[2 * i] = v2[i];//给2*i和2*i +1 赋值即可将整个数组遍历完
				v1[2 * i + 1] = v2[i + n];
			}
		}
		for (int i = 0; i < 2 * n - 1; ++i)
			cout << v1[i] << " ";
		cout << v1[2 * n - 1] << endl;//最后一个后面无空格，所以单独输出
	}
	return 0;
}