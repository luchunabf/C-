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

//int main()//���������Ƚ����ɣ�����δͨ�����룬������
//{
//	string s1, s2;
//	cin >> s2;
//	while (cin >> s1)
//		s2 = s1 + " " + s2;//�����ַ�������ֱ����ӣ�Ҳ���Ը��ַ���ֱ�Ӽӿո�
//	cout << s2 << endl;
//	system("pause");
//	return 0;
//}


