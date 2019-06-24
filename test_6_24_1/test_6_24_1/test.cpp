#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s("h ello world");
	size_t pos = s.find(' ');
	cout << pos << endl;
	return 0;
}