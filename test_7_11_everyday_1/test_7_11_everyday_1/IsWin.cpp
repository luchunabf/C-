#define _CRT_SECURE_NO_WARNINGS 1
class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		// write code here
		int row = board.size();
		//int i;
		for (int i = 0; i < row; ++i)
		{
			int sum_row = 0;
			int sum_col = 0;
			//int j;
			for (int j = 0; j < row; ++j)
			{
				sum_row += board[i][j];
				sum_col += board[j][i];
			}
			if (sum_row == row)
				return true;
			if (sum_col == row)
				return true;
		}
		int left = 0;
		int right = 0;
		//int k;
		for (int k = 0; k < row; ++k)
		{
			left += board[k][k];
			right += board[k][row - 1 - k];
		}
		if (left == row)
			return true;
		if (right == row)
			return true;
		return false;
	}
};