#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;

#if 0
int main()
{
	string s;
	getline(cin, s);

	reverse(s.begin(), s.end());
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
			end++;
		reverse(start, end);
		if (end != s.end())
			start = end + 1;
		else
			start = s.end();
	}
	cout << s << endl;
	return 0;
}
#endif 

//int main()//方法二，比较讨巧，但是未通过编译，很尴尬
//{
//	string s1, s2;
//	cin >> s2;
//	while (cin >> s1)
//		s2 = s1 + " " + s2;//两个字符串可以直接相加，也可以给字符串直接加空格
//	cout << s2 << endl;
//	system("pause");
//	return 0;
//}


