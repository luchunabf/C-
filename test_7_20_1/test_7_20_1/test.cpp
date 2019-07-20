#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

void MySwap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void BubbleSort(int* arr, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		int Flag = 0;
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				MySwap(&arr[j], &arr[j + 1]);
				Flag = 1;
			}
		}
		if (Flag == 0)
			break;
	}
}
int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	BubbleSort(arr, 10);
	for (auto e : arr)
	{
		cout << e << " ";
	}
	cout << endl;
	return 0;
}