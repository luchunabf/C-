#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
class Solution {
public:
	int Add(int num1, int num2)
	{
		//if((num1 & num2) == 0)
		//return (num1 | num2);
		//return Add((num1^num2),(num1&num2)<<1);
		int sum;
		if ((num1&num2) == 0)
			sum = (num1 | num2);
		else
		{
			int a = (num1&num2);
			int b = (num1^num2);
			while (a)
			{
				int c = (a << 1);
				sum = c | b;
				a = c&b;
				b = (c^b);
			}
		}
		return sum;
	}
};
int main()
{
	//Solution::Add(5, 10);
	Solution s;
	cout << s.Add(5, 10) << endl;

	return 0;
}