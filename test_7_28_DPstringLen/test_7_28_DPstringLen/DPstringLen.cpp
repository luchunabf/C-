#define _CRT_SECURE_NO_WARNINGS 1

#if 0
//�������ַ�������󹫹��ִ�����
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
//		����󹫹��Ӵ���ʹ�õ���ʵ�� ���� x(i): �ַ�����i���ַ� y(j): �ַ�����j���ַ� dp[i][j]: ��x(i),y(j)��β����
//		 ���Ӵ����� ���磺x : "abcde" y : "bcdae" dp[2][1] : ��x(2), y(1)��β������Ӵ����� ����x������"abc", y����
//		��"bc", �����ַ�'c'��βʱ��󹫹��Ӵ�Ϊ"bc" �ʣ�������dp[i][j]ʱ�����ȿ�x(i), y(j)��ֵ�� ��1�� : x(i) == y(j)
//		��ǰ�����ַ�����β���ַ���ȣ�dp[i][j] = dp[i - 1][j - 1] + 1 �������ĳ��ȼ�1 ��2�� : x(i) != y(j) ��ǰ�����ַ�
//		����β���ַ�����ȣ�˵��û�����������ַ���β�Ĺ����Ӵ� ��dp[i][j] = 0 ��3�� : dp[0][j] �� dp[i][0]��ʾ��
//		ĳ���Ӵ��ĵ�һ���ַ���β����󳤶�Ϊ1 ���x(0) == y(j) ���� x(i) == y(0), �򳤶�Ϊ1������Ϊ0 ��dp�е�
//		����Ԫ�ؼ�����֮�󣬴����Ҵ�����ֵ���
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int max = 0;
		int len1 = s1.size();
		int len2 = s2.size();
		vector<vector<int>> v(len1, vector<int>(len2));//��s1�ĳ���Ϊ�У���s2�ĳ���Ϊ�д�����ά���飨ά��һ����ά���鱣���Ӧs1�ߵ�i��s2�ߵ�jʱ��Ĺ����ִ���󳤶�[״̬]��
		for (int i = 0; i < len1; ++i)//����������ά����
		{
			for (int j = 0; j < len2; ++j)
			{
				if (s1[i] == s2[j])//������ά�����ͬʱҲ�ڱ���s1��s2����s1[i] == s2[j]ʱ��Ҫ����ά�����1������
				{
					if (i >= 1 && j >= 1)
						v[i][j] = v[i - 1][j - 1] + 1;//��s1[i] == s2[j]ʱ����һ�εĽ������ǰһ�εĽ����1 ע����б�Խ����ϵ�Ǯһ��Ԫ�ؼ�1
					else
						v[i][j] = 1;//�����Ǵ����һ�� j=0 �͵�һ�� i=0 ����������⴦����Ϊ��������ķ�ʽ���������Խ��
				}
				if (v[i][j] > max)//��max��������󳤶ȣ���������ά�����е����ֵ
					max = v[i][j];
			}
		}
		cout << max << endl;
	}
	return 0;
}
#endif


//�������ַ�������󹫹��ִ������ж���������һ��
//����˼·ͬ��
//����ע��������ֻ�󳤶ȵ�����1 ��Ҫ��len1�������s1��s2�н�С��  2 �ౣ��һ��start����ͨ��iѰ���ַ�������ʼλ�� start = i - max + 1;



#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int max = 0, start = 0;
		if (s1.size() > s2.size())
		{
			swap(s1, s2);
		}
		int len1 = s1.size();
		int len2 = s2.size();
		vector<vector<int>> v(len1, vector<int>(len2));
		for (int i = 0; i < len1; ++i)
		{
			for (int j = 0; j < len2; ++j)
			{
				if (s1[i] == s2[j])
				{
					if (i >= 1 && j >= 1)
						v[i][j] = v[i - 1][j - 1] + 1;
					else
						v[i][j] = 1;
				}
				if (max < v[i][j])
				{
					max = v[i][j];
					start = i - max + 1;
				}
			}
		}
		cout << s1.substr(start, max) << endl;
	}
	return 0;
}

//�ο�˼·
//������Ҫ�ö�̬�滮��⣬MCS[i][j]��¼���ַ��� s1 ǰ i ���ַ��ͳ��ַ��� s2 ǰ j ���ַ�����Ӵ��ĳ�
//�ȣ���ʼ������ֵΪ 0���� s1[i - 1] = s2[j - 1]ʱ��MCS[i][j] = MCS[i - 1][j - 1] + 1������ʹ��һ�������ֵ
//start ����¼��Ӵ��ڶ��ַ��� s1 �г��ֵ���ʼλ�ã�maxlen��¼��ǰ��Ӵ��ĳ��ȣ���MCS[i][j] >
//maxlen ʱ��maxlen = MCS[i][j]�� ��start = i - maxlen ����s1[i - 1] != s2[j - 1]ʱ����Ҫ�κβ���������ȡ
//substr(start, maxlen)��Ϊ����