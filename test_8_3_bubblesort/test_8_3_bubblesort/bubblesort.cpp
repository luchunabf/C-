#define _CRT_SECURE_NO_WARNINGS 1
//冒泡：循环都是从0开始
//插入：循环都是从1开始
#include <iostream>
using namespace std;

void bubblesort(int* arr, int size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		int Flag = 0;
		for (int j = 0; j < size - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				Flag = 1;
			}
		}
		if (Flag == 0)
			return;
	}
}
void InsertSort(int* arr, int size)
{
	for (int i = 1; i < size; ++i)
	{
		int key = arr[i];
		int end = i - 1;
		while (end >= 0 && key < arr[end])
		{
			arr[end + 1] = arr[end];
			end--;
		}
		arr[end + 1] = key;
	}
}
void ShellSort(int* arr, int size)
{
	for (int gap = (size / 3) + 1; gap >= 1; --gap)
	{
		for (int i = gap; i < size; ++i)
		{
			int key = arr[i];
			int end = i - gap;
			while (end >= 0 && key <= arr[end])
			{
				arr[end + gap] = arr[end];
				end -= gap;
			}
			arr[end + gap] = key;
		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//bubblesort(arr, 9);
	//InsertSort(arr, 9);
	ShellSort(arr, 9);
	for (auto e : arr)
		cout << e << " ";
	cout << endl;
	return 0;
}