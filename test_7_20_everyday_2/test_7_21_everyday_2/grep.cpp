#define _CRT_SECURE_NO_WARNINGS 1
#include <string>
#include <iostream>
using namespace std;

bool grepStr(const char* s1, const char* s2)////////////////////////���ﴫ����char*
{
	if (*s1 == '\0' && *s2 == '\0')
		return true;
	if (*s1 == '\0' || *s2 == '\0')
		return false;
	if (*s1 == '?')
		return grepStr(s1 + 1, s2 + 1);
	else if (*s1 == '*')
		return grepStr(s1 + 1, s2) || grepStr(s1 + 1, s2 + 1) || grepStr(s1, s2 + 1);
	else if (*s1 == *s2)
		return grepStr(s1 + 1, s2 + 1);
	else
		return false;
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		if (grepStr(s1.c_str(), s2.c_str()))//////////////////����Ϊ�β���Ҫ����ַ�أ�������
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}