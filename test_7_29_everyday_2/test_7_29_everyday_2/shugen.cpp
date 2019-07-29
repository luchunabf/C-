#define _CRT_SECURE_NO_WARNINGS 1



#if 0
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int sum;
	while (cin >> sum)
	{
		vector<int> v(sum);
		for (int i = 0; i < sum; ++i)
			cin >> v[i];
		for (int i = 0; i < sum; ++i)
		{
			int count = v[i];
			while (count > 9)
			{
				int tmp = 0;
				while (count)
				{
					tmp += count % 10;
					count /= 10;
				}
				count = tmp;
			}
			cout << count << " ";
		}
		cout << endl;
	}
	return 0;
}
#endif


//#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int fib(int n)
{
	int count = n;
	while (count > 9)
	{
		int tmp = 0;
		while (count)
		{
			tmp += count % 10;
			count /= 10;
		}
		count = tmp;
	}
	return count;

}
//int main()/////////////////////////自己写的输入格式不正确
//{
//	vector<int> v;
//	v.resize(10000);
//	int i = 0;
//	while (cin >> v[i])
//	{
//		cout << fib(v[i]) << endl;
//		++i;
//	}
//	return 0;
//}
int main(){
	std::string origin;
	while (std::cin >> origin) {
		int sum = 0;
		for (int i = 0; i < origin.length(); i++) {
			sum += origin[i] - '0';
		}
		std::cout << fib(sum) << std::endl;
	}
	return 0;
}