#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;

//�Լ�д��
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


//�ύͨ����
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		int l = 0; //��������
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