#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//int main()
//{
//	int a = 5;
//	int b = 3;
//	int ret = pow(a, b);
//	cout << ret << endl;
//	return 0;
//}

class LCA {
public:
	int level(int m)
	{
		int i = 1;
		while (i)
		{
			if (m >= pow(2, i) && m < pow(2, i + 1))
				break;
			++i;
		}
		return i;
	}
	int max(int x, int y)
	{
		return (x >= y) ? x : y;
	}
	int min(int x, int y)
	{
		return (x <= y) ? x : y;
	}
	int getLCA(int a, int b) {
		// write code here
		int max1 = max(level(a), level(b));
		int sub1 = min(level(a), level(b));
		int step = max1 - sub1;

		int child1 = max1;
		int parent1 = 0;
		if (child1 != 1 && child1 % 2 == 0)
		{
			parent1 = child1 >> 1;
			while (step)
			{
				child1 = parent1;
				parent1 = child1 >> 1;
				step--;
			}
		}
		if (child1 != 1 && child1 % 2 != 0)
		{
			parent1 = (child1 - 1) >> 1;
			while (step)
			{
				child1 = parent1;
				parent1 = (child1 - 1) >> 1;
				step--;
			}
		}
		else
			return 1;
		int child2 = sub1;
		int parent2 = 0;
		if (child2 == child1)
			return child1;
		if (child2 != 1 && child2 % 2 == 0)
		{
			parent2 = child2 >> 1;
			while (parent1 != parent2)
			{
				child1 = parent1;
				parent1 = child1 >> 1;
				child2 = parent2;
				parent2 = child2 >> 1;
			}
			return parent1;
		}
		if (child2 != 1 && child2 % 2 != 0)
		{
			parent2 = (child2 - 1) >> 1;
			while (parent1 != parent2)
			{
				child1 = parent1;
				parent1 = (child1 - 1) >> 1;
				child2 = parent2;
				parent2 = (child2 - 1) >> 1;
			}
			return parent1;
		}
		else
			return 1;

	}
};
int main()
{
	LCA l;
	return 0;
}