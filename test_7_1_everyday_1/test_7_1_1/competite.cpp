#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream> 
//#include<algorithm> 
//#include<vector>   //����
//using namespace std;
//
//int main() {
//	int n;
//	while (cin >> n) {
//		long long sum = 0;
//		vector<int> a;    //��������    
//		a.resize(3 * n);
//		for (int i = 0; i < (3 * n); i++)  {
//			cin >> a[i];
//		}
//
//		std::sort(a.begin(), a.end());     //�������п��ŵĺ���sort����������     
//		for (int i = n; i <= 3 * n - 2; i += 2) {   //���
//			sum += a[i];
//		}        cout << sum << endl;
//	}
//}
#if 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		long sum = 0;
		vector<int> a(3 * n);
		for (int i = 0; i < 3 * n; ++i)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			sum += a[i];
		}
		cout << sum << endl;
	}
	return 0;
}
#endif

