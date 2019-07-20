#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int CheckSystem1()
{
	union Un
	{
		int i;
		char c;
	};
	Un u;
	u.i = 1;
	return u.c;
}
int CheckSystem()
{
	int i = 1;
	return *(char*)&i;
}

int main()
{
	if (CheckSystem() == 1)
	{
		cout << "Ð¡¶Ë" << endl;
	}
	else
		cout << "´ó¶Ë" << endl;
	
	return 0;
}
