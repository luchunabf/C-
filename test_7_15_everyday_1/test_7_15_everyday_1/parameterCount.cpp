#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
//#include <vector>
using namespace std;


/*��Ϊ������
*	���ȸ��ݿո��˫�����жϲ�����������ʼֵΪ1
*		����˫����ֱ������������һ����˫����
*		�����ո����������+1
*	�ڶ���������ֽ��Ĳ���������һ����־���жϵ�ǰ�Ƿ���˫������
*		���ǿո��˫����ֱ�Ӵ�ӡ
*		˫�����еĿո��ӡ
*		˫������Ŀո��û��д���*/

int main()
{
	string s;
	size_t i = 0;
	while (getline(cin, s))
	{
		int count = 1;
		for (i = 0; i < s.size(); ++i)//�������������ֻ�жϿո�����˫�����ڵĿո���+1��ֱ��i++������˫������Ŀո�+1
		{
			if ('"' == s[i])
			{
				do
				{
					i++;
				} while ('"' != s[i]);
			}
			else if (' ' == s[i])
				++count;
		}
		cout << count << endl;
		int quote = 0;
		for (i = 0; i < s.size(); ++i)
		{
			if ('"' == s[i])
				quote ^= 1;//�����ж�����˫���ţ���˫�����Ǳ�Ϊ1����˫���ű�Ϊ0

			if (' ' != s[i] && '"' != s[i])//ע�����������⣬ֻҪ���ǿո񣬲��Ҳ���˫���ŵ�����ͱ����ӡ
				cout << s[i];
			else if (' ' == s[i])//��һ������������ո��ˣ��ж��Ƿ���˫������
			{
				if (quote)
					cout << s[i];//˫�����ڵĿո��ӡ
				else
					cout << endl;//˫������Ŀո񲻴�ӡ
			}
		}
	}
	return 0;
}

