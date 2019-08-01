#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	/**
	*  奇数位上都是奇数或者偶数位上都是偶数
	*  输入：数组arr，长度大于2
	*  len：arr的长度
	*  将arr调整成奇数位上都是奇数或者偶数位上都是偶数
	*/
	void oddInOddEvenInEven(vector<int>& arr, int len) {
		int even = 0;
		int odd = 1;
		while (even < len && odd < len)
		{
			if ((arr[even] % 2 != 0) && (arr[odd] % 2 == 0))
			{
				swap(arr[even], arr[odd]);
			}
			if (arr[even] % 2 == 0)
				even += 2;
			if (arr[odd] % 2 != 0)
				odd += 2;
		}
	}
};
int main()
{
	Solution s;
	vector<int> v{ 1, 3, 3, 4, 4, 6, 7, 8, 9 };
	s.oddInOddEvenInEven(v, 9);
	return 0;
}