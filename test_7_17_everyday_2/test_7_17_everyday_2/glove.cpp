#define _CRT_SECURE_NO_WARNINGS 1
class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		// write code here
		int leftsum = 0, leftmin = 26;
		int rightsum = 0, rightmin = 26;
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			if (left[i] * right[i] == 0)
				sum += (left[i] + right[i]);
			else
			{
				leftsum += left[i];
				rightsum += right[i];
				leftmin = min(leftmin, left[i]);
				rightmin = min(rightmin, right[i]);
			}
		}
		return sum + min((leftsum - leftmin + 1), (rightsum - rightmin + 1)) + 1;
	}
};