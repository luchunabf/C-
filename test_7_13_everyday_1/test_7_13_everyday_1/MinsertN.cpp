#define _CRT_SECURE_NO_WARNINGS 1
class BinInsert {
public:
	int binInsert(int n, int m, int j, int i) {
		// write code here
		int arr1[32] = { 0 };
		for (int k = 0; k < 32; ++k)
		{
			arr1[k] = (m >> k) & 1;
		}
		int arr2[32] = { 0 };
		for (int k = 0; k < 32; ++k)
		{
			arr2[k] = (n >> k) & 1;
		}
		//for(int k = j; k <= i; ++k)
		//{
		//    arr2[k] = arr1[k];
		//}
		int l;
		for (int k = j; k <= i; ++k)
		{
			arr2[k] = arr1[l++];
		}

		int sum = 0;
		for (int k = 0; k < 32; ++k)
		{
			sum += arr2[k] * pow(2, k);
		}
		return sum;
	}
};