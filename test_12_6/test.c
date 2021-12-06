 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n= 0;
//	int i = 0;
//	int count = 0;
//	int arr[1000] = { 0 };
//	int arr1[100] = { 0 };
//	scanf("%d", &n);
//	while (++i <= n)
//	{
//		scanf("%d", &arr1[i]);
//		if (arr[arr1[i]] != 0)
//			count++;
//		else
//			arr[arr1[i]] = arr1[i];
//	}
//	printf("%d\n", n - count);
//	for (i = 0; i < 1000; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int sushu(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = n-1; i > 1; i--)
//	{
//		if (n % i == 0)
//		{
//			if (sushu(i))
//			{
//				printf("%d", i);
//				return 0;
//			}
//		}
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d", n / i);
//			return 0;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[8][2] = { 0 };
//	int arr1[25] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (j = 1; j <= 7; j++)
//	{
//		int sum = 0;
//		for (i = 0; i < 2; i++)
//		{
//			scanf("%d", &arr[j][i]);
//			sum += arr[j][i];
//		}
//        if(arr1[sum]==0)
//			arr1[sum] = j;
//	}
//	for (i = 24; i >=1; i--)
//	{
//		if (arr1[i] != 0)
//		{
//			printf("%d", arr1[i]);
//			break;
//		}
//	}
//	return 0;
//}
int main()
{
	int m, n,i,sum,j;
	int max = 0;
	for (i = 1; i <= 7; i++)
	{
		scanf("%d %d", &n, &m);
		sum = n + m;
		if (sum > max&&sum>8)
		{
			max = sum;
			j = i;
		}
	}
	printf("%d", j);
	return 0;
}
