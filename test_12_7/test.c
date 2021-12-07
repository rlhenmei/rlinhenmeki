 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = -3;
//	n = !n;
//	printf("%d\n", n);
//	n = !n;
//	printf("%d", n);
//	return 0;
//}
//int comp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int arr[5] = { 'a','b','d','r','c'};
//	qsort(arr, 5, sizeof(int), comp);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	int sum = n;
//	int tou = n;
//	while (1)
//	{
//		if (tou < k)
//		{
//			printf("%d", sum);
//			return 0;
//		}
//		else
//		{
//			int xu = tou / k;
//			sum += xu;//一共洗了多少烟
//			tou = tou - xu * k + xu;//还剩多少烟头
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int flag = 0;
//	int arr[6] = { 0 };
//	scanf("%d", &n);
//	for (i = 10000; i <= 30000; i++)
//	{
//		int d = i;
//		int j = 5;
//		while (j)
//		{
//			arr[j] = d % 10;
//			d /= 10;
//			j--;
//		}
//		int a = arr[1] * 100 + arr[2] * 10 + arr[3];
//		int b = arr[2] * 100 + arr[3] * 10 + arr[4];
//		int c = arr[3] * 100 + arr[4] * 10 + arr[5];
//		if (a % n == 0 && b % n == 0 && c % n == 0)
//		{
//			flag = 1;
//			printf("%d\n", i);
//		}
//	}
//	if (flag == 0)
//		printf("No");
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int arr[1000] = { 0 };
//	int arr1[1000] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (i >= 1)
//		{
//			arr1[abs(arr[i] - arr[i - 1])] = abs(arr[i] - arr[i - 1]);
//		}
//	}
//	for (i = 1; i < n; i++)
//	{
//		if (arr1[i] != i)
//		{
//			printf("Not jolly");
//			return 0;
//		}
//	}
//	printf("Jolly");
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int n, i;
//	scanf("%d %d", &n, &i);
//	int c = abs(n - i);
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int t = 0;
//	double a = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		scanf("%lld %d", &a, &t);
//	}
//
//	return 0;
//}
//int main()
//{
//	int l, r,i;
//	int count = 0;
//	scanf("%d %d", &l, &r);
//	for (i = l; i <= r; i++)
//	{
//		int a = i;
//		while (a)
//		{
//			if (a % 10 == 2)
//				count++;
//			a /= 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}