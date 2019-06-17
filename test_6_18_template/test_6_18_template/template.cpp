#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

template<typename T>
T Add(const T& left, const T& right)
{
	return left + right;
}

int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 1.0, d2 = 2.0;
	
	cout << Add(a1, a2) << endl;
	Add(d1, d2);
	cout << Add(d1, d2) << endl;
	Add(a1, (int)d2);
	cout << Add((double)a1, d2) << endl;

	Add<int>(a1, a2);
	cout << Add<int>(a1, a2) << endl;

	system("pause");
	return 0;
}