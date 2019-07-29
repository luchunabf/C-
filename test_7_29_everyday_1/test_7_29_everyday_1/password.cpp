#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
///////////////////////没看懂题意
#if 0
int main()
{
	int a = 5, b = 5;
	while (a--)//5次循环
		cout << a << "-";
	cout << endl;
	while (--b)//4次循环
		cout << b << "-";
	cout << endl;
	return 0;
}
#endif 

#if 0
#include <iostream>
using namespace std;
int fib(int n)
{
	int first = 1;
	int second = 2;
	int third = 0;
	while (--n)
	{
		third = first + second;
		first = second;
		second = third;
	}
	return first;
}

int main()
{
	int n, t;
	while (cin >> n)
	{
		while (n--)
		{
			printf("%4d", fib(t) % 10000);
		}
		cout << endl;
	}
	return 0;
}
#endif 

#include <iostream>
#include <vector>
std::vector<int> a = { 1, 1 };
void data_init(){
	int i;
	for (i = 2; i < 10005; i++) {
		a.push_back((a[i - 1] + a[i - 2]) % 10000);
	}
}

int main()
{
	int n, t;
	data_init();
	while (std::cin >> n) {
		while (n--) {
			std::cin >> t;
			printf("%04d", a[t]);
		}
		printf("\n");
	}
	return 0;
}
