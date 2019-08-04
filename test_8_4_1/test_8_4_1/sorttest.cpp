#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//非递归实现快排
#include "Stack.h"
void QuickSortNor(int* array, int size)
{
	int left = 0;
	int right = size;
	Stack s;
	StackInit(&s);
	StackPush(&s, right);
	StackPush(&s, left);

	while (!StackEmpty(&s))
	{
		left = StackTop(&s);
		StackPop(&s);
		right = StackTop(&s);
		StackPop(&s);

		if (right - left > 1)
		{
			int div = Partion3(array, left, right);

			// 保存右半部分区间
			StackPush(&s, right);
			StackPush(&s, div + 1);

			// 保存左半部分区间
			StackPush(&s, div);
			StackPush(&s, left);
		}
	}
}
#endif


int main()
{
	int arr[] = { 3, 4, 2, 9, 1, 7, 6, 0, 8, 5 };
	QuickSort(arr, 0, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		printf("%d ", arr[i]);
	printf("\n");
	system("pause");
	return 0;
}
