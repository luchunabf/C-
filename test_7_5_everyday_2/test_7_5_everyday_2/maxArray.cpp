#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;
int max_sum()
{
	int N;
	cin >> N;
	vector<int> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	int max = v[0];
	int sum = 0;
	for (int i = 0; i < v.size(); i++)
	{
		sum += v[i];//////////////////////////
		//ÿ��һ�����ݣ���֮ǰ��sum_max��һ�£���Ļ���˵˵��Ҫ���������
		if (sum > max)
		{
			max = sum;
		}
		//sum<0�ˣ�˵���϶��и��������ˣ������϶��������ȵ��Ǹ��������Ҫ��sum��գ���ʼ��һ���µ��ۼ�
		if (sum < 0)///////////////////////////��һ�������
		{
			sum = 0;
		}
	}
	return max;
}
int main()
{
	int sum = max_sum();
	cout << sum << endl;
	return 0;
}
