#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<vector<int>> board;
	vector<int> tmp(10, 0);
	for (int i = 0; i < 10; ++i)
		board.push_back(tmp);
	cout << board.size() << endl;//��Ϲ���ҵ��ۣ������ά����board��size()��Ȼ��10��������100����Ϊ���������10������10��Ԫ�ص�һλ����
	return 0;
}



class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		// write code here
		int lenth = board.size();
		int width = board[0].size();
		vector<vector<int>> v;//����д��vector<vector<int>> v(lenth);
		vector<int> tmp(width, 0);
		for (int i = 0; i < lenth; ++i)//��̬�滮�����ά����ķ�ʽ
			v.push_back(tmp);
		v[0][0] = board[0][0];
		for (int i = 0; i < lenth; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				//if(i == j == 0)
				if (i == 0 && j == 0)
					//continue;
					v[0][0] = board[0][0];
				else if (i == 0)
					v[0][j] = v[0][j - 1] + board[0][j];
				else if (j == 0)
					v[i][0] = v[i - 1][0] + board[i][0];
				else
					v[i][j] = max(v[i - 1][j], v[i][j - 1]) + board[i][j];
			}
		}
		return v[lenth - 1][width - 1];
	}
};