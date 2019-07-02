#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
//排序子序列
int ArraySum(vector<int> v)
{
	int n = v.size();
	int p = 0;
	int pPre = 0;

	if (n <= 2)
	{
		return 1;
	}
	vector<int>::iterator it = v.begin();
	while ((it + 2) != v.end())
	{
		if ( (*it) < (*(it + 1)))
		{
			if ((*(it + 2)) != 0 && ((*it + 1)>(*(it + 2))))
			{
				p++;
			}
			it++;
		}
		
		else if ((*it) == (*(it + 1)))
		{
			pPre = *(it - 1);
			while ((*it) == (*(it + 1)))
			{
				it++;
			}
			if ((pPre< *(it) && (*(it + 1))<*(it)) || (pPre> *(it) && (*(it + 1))>*(it)))
			{
				it++;
				
			}
			else
			{
				it++;
				p++;
				
			}
		}
		else
		{
			if ((*(it + 2)) != 0 && ((*it + 1) < (*(it + 2))))
			{
				p++;
			}
			it++;
		}
	}
	p++;
	return p;
}

int main()
{

	//vector<int> v{ 1, 2, 3, 4, 3, 2, 2, 1, 2, 3, 2, 1 };//越界问题
	
	int a;
	while (cin >> a)
	{
		vector<int> v;
		int num;
		do
		{
			cin >> num;
			v.push_back(num);
		} while (getchar() != '\n');

		/*do
		{
		cin >> num;
		v.push_back(num);
		} while (getchar() != '\n');*/
		int n = ArraySum(v);
		cout << n << endl;
	}

	system("pause");
	return 0;
}