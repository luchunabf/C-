#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

template <class T>
bool Isequal(T& left, T& right)
{
	return left == right;
}
int main()
{
	char* p1 = "hello";
	char* p2 = "world";
	if (Isequal(p1, p2))
		cout << p1 << endl;
	else
	{
		cout << p2 << endl;

	}
	return 0;
}