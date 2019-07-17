#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <vector>

template<class T>
void mySwap(T* a, T* b)
{
	T tmp = *a;
	*a = *b;
	*b = tmp;
}

template<class T>
void BubbleSort(vector<T> v)
{
	int len = v.size();
	for (int i = 0; i < len - 1; ++i)
	{
		int Flag = 0;
		for (int j = 0; j < len - i - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				mySwap(&(v[j]), &(v[j + 1]));
				Flag = 1;
			}
		}
		if (Flag == 0)
			break;
	}
}
int main()
{
	int a = 1, b = 2;
	mySwap(&a, &b);
	cout << a << b << endl;
	vector<int> v1{ 5, 2, 9, 3, 4, 8, 6, 0, 7, 1 };
	BubbleSort(v1);
	for (auto e : v1)
		cout << e << " ";
	cout << endl;
	return 0;
}