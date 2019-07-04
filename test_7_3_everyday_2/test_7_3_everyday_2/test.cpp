#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int len = numbers.size();
		int halflen = len / 2;
		int array[10];
		vector<int>::iterator it = numbers.begin();
		while (it != numbers.end())
		{
			array[*it] += 1;
			it++;
		}
		int i;
		int Flag = 0;
		for (i = 0; i < 10; ++i)
		{
			if (array[i] > halflen)
			{
				cout << i;
				Flag = 1;
			}

		}
		if (Flag == 0)
			cout << 0;
		return 0;
	}
};

int main()
{
	Solution s;
	vector<int> v;
	s.MoreThanHalfNum_Solution(v);
	return 0;
}