#include <iostream>
#include <string>
using namespace std;
//MP3播放歌曲
//【题目解析】：
//本题的意思是第一行输入歌曲数量，第二行输入指令，最后需要显式的输出也为两行，第一行为当前歌曲所
//在的列表，第二行为光标所指向的歌曲。
//【解题思路】：
//本题比较简单，通过解析指令，进行移动即可，分两种情况，歌曲数目不大于4和大于4的情况。
int main()
{
	int n;//歌曲数量
	string order;//上下操作命令U/D
	while (cin >> n >> order)
	{
		int cur = 1, first = 1;//cur表示当前歌曲，first表示歌曲列表中第一首歌曲
		if (n <= 4)//歌曲数小于等于4的情况
		{
			for (size_t i = 0; i < order.size(); ++i)///////////////记得要遍历命令字符串
			{
				if (cur == 1 && order[i] == 'U')//当当前在第一首时，并且要向上移动时
				{
					cur = n;
				}
				else if (cur == n && order[i] == 'D')//当当前在最后一首时，并且要向下移动时
				{
					cur = 1;
				}
				else if (order[i] == 'U')//当当前在中间时，并且要向上移动时
					cur--;
				else//当当前在中间时，并且要向下移动时
					cur++;
			}
			for (int i = 1; i <= n - 1; ++i)//输出歌曲列表，最后一个输出后要还行
				cout << i << " ";
			cout << n << endl;
			cout << cur << endl;//输出当前歌曲
		}
		else//歌曲数大于4的情况
		{
			for (size_t i = 0; i < order.size(); ++i)///////////////记得要遍历命令字符串
			{
				if (first == 1 && cur == first && order[i] == 'U')//当第一行歌曲是首曲时，并且当前歌曲也停在了首曲的位置，此时再向上移动时
				{
					first = n - 3;//n-4+1
					cur = n;
				}
				else if (first == n - 3 && cur == n && order[i] == 'D')//当第一行歌曲是尾曲时，并且当前歌曲也停在了尾曲的位置，此时再向下移动时
				{
					first = 1;
					cur = 1;
				}
				else if (first != 1 && cur == first && order[i] == 'U')//当第一行歌曲不在首曲位置，并且当前位置在第一行歌曲的位置，此时再向上移动时
				{
					first--;
					cur--;
				}
				else if (first != n - 3 && cur == first + 3 && order[i] == 'D')//当最后一行歌曲不在尾曲位置，并且当前位置在最后一行歌曲的位置，此时再向下移动时
				{
					first++;
					cur++;
				}
				else if (order[i] == 'U')//first == 1或first == n - 3 时U的情况：第一行歌曲时首曲时或者最后一行歌曲时尾曲时，且当前歌曲不在首行/曲或者尾行/曲的位置，此时向上移动时
					cur--;
				else //first == 1或first == n - 3 时D的情况:：第一行歌曲时首曲时或者最后一行歌曲时尾曲时，且当前歌曲不在首行/曲或者尾行/曲的位置，此时向下移动时
					cur++;
			}
			for (int i = first; i < first + 3; ++i)//输出歌曲列表，最后一个输出后要还行
				cout << i << " ";
			cout << first + 3 << endl;
			cout << cur << endl;//输出当前歌曲
		}
	}
	return 0;
}