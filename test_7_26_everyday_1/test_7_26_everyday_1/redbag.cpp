#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

#if 0
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		int maxval = gifts[0];
		int minval = gifts[0];
		for (int i = 0; i < n; ++i)
		{
			if (maxval < gifts[i])
				maxval = gifts[i];
			if (minval > gifts[i])
				minval = gifts[i];
		}
		//int range = maxval - minval + 1;
		vector<int> v(maxval + 1);
		for (int i = 0; i < n; ++i)
		{
			v[gifts[i]] += 1;
		}
		for (int i = minval; i <= maxval; ++i)
		{
			if (v[gifts[i]] > n / 2)
				return gifts[i];
		}
		return 0;
	}
};

int main()
{
	vector<int> v{ 1, 2, 3, 2, 2 };
	Gift g;
	cout << g.getValue(v, 5) << endl;
	return 0;
}
#endif


class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		int maxval = gifts[0];
		//int minval = gifts[0];
		for (int i = 0; i < n; ++i)
		{
			if (maxval < gifts[i])
				maxval = gifts[i];
			//if (minval > gifts[i])
				//minval = gifts[i];
		}
		//int range = maxval - minval + 1;
		vector<int> v(maxval + 1);
		for (int i = 0; i < n; ++i)
		{
			v[gifts[i]] += 1;
		}
		for (int i = 0; i <= maxval; ++i)
		{
			if (v[gifts[i]] > n / 2)
				return gifts[i];
		}
		return 0;
	}
};

#include <string>

int main()
{
	string s1("hello"), s2("hello");
	if(s1 == s2)//两个字符串可以直接等
		cout << "1";
	return 0;
}

