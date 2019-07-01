#define _CRT_SECURE_NO_WARNINGS 1

#if 0
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	while (getline(cin, s1))
	{
		cin >> s2;
		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			string::iterator it1 = s2.begin();
			while (it1 != s2.end())
			{
				if ((*it) == (*it1))
					//*it = ' ';//ÈçºÎÉ¾³ý
					s1.erase(it);
				else
					it1++;
			}
			it++;
		}
		cout << s1 << endl;
	}
	return 0;
}
#endif

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()//////////////////////////////////////¶Î´íÎó
{
	string s1, s2;
	while (getline(cin, s1))
	{
		cin >> s2;
		string::iterator it1 = s1.begin();
		while (it1 != s1.end())
		{
			string::iterator it2 = s2.begin();
			while (it2 != s2.end())
			{
				if ((*it1) == (*it2))
				{
					s1.erase(it1);
					it2++;
				}
				else
					it2++;
			}
			it1++;
		}
		cout << s1;
	}
	return 0;
}