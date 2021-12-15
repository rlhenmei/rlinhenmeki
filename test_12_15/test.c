 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int arr[101];
//void quicksort(int left, int right)
//{
//	int i, j, tmp;
//	if (left > right)
//		return;
//	tmp = arr[left];
//	i = left;
//	j = right;
//	while (i != j)
//	{
//		while (arr[j] >= tmp && j > i)
//		{
//			j--;
//		}
//		while (arr[i]<=tmp && j>i)
//		{
//			i++;
//		}
//		if (i < j)
//		{
//			int t = arr[i];
//			arr[i] = arr[j];
//			arr[j] = t;
//		}
//	}
//	arr[left] = arr[i];
//	arr[i] = tmp;
//	quicksort(1, i - 1);
//	quicksort(i+1,right);
//	return;
//}
//int main()
//{
//	int i, j,n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	quicksort(1, n);
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	/*getchar();
//	getchar();*/
//	return 0;
//}
//