#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//自己写的
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		string s;
		for (int i = 0; i < n; ++i)
		{
			if ((A[i] != '(') || (A[i] != ')'))
				return false;
			else if (A[i] == '(')
				s += A[i];
			else if (A[i] == ')')
			{
				if (s.empty())
					return false;
				int len = s.size();
				s.resize(len - 1);
			}

		}
		if (!s.empty())
			return false;
		else
			return true;
	}
};


//提交通过的
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		int l = 0; //左括号数
		for (int i = 0; i < A.length(); i++)
		{
			char c = A[i];
			if (c == '(') {
				l++;
			}
			else if (c == ')') {
				if (l > 0) {
					l--;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
		return l == 0;
	}

};