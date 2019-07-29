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
	cout << board.size() << endl;//亮瞎了我的眼，这个二维数组board的size()居然是10，而不是100，因为它里面放了10个具有10个元素的一位数组
	return 0;
}



class Bonus {
public:
	int getMost(vector<vector<int> > board) {
		// write code here
		int lenth = board.size();
		int width = board[0].size();
		vector<vector<int>> v;//不能写成vector<vector<int>> v(lenth);
		vector<int> tmp(width, 0);
		for (int i = 0; i < lenth; ++i)//动态规划构造二维数组的方式
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