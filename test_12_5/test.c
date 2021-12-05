 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		printf("1/1");
//		return 0;
//	}
//	while (++i)
//	{
//		count++;
//		sum += i;
//		if (sum >= n)
//		{
//			n = n-(sum -i);
//			break;	
//		}
//	}
//	if (count % 2 == 0)
//	{
//		printf("%d/%d",n, ((count + 1) - n));
//	}
//	else
//	{
//		printf("%d/%d", ((count + 1) - n), n);
//	}
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	int i = 0;
//	double Sn = 0;
//	scanf("%d", &k);
//	for (Sn = 0; Sn <= k; ++i, Sn += 1.0 / i);
//	printf("%d", i);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//	{
//		if (n + 30 >= arr[i])
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}
int main()
{
	int l = 0;
	int m = 0;
	int arr[2] = { 0 };
	int arr1[10001] = { 0 };
    scanf("%d %d", &l, &m);
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &arr[j]);
		}
		for (j = arr[0]; j <= arr[1]; j++)
		{
			arr1[j] = 1;
		}
	}
	for (i = 0; i <= l; i++)
	{
		if (arr1[i] == 0)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;		
}
int main()
{
	int i, j, L, a[2], b[10001], M, count = 0;
	scanf("%d%d", &L, &M);
	for (i = 0; i <= L; i++)
		b[i] = 0;
	for (i = 1; i <= M; i++) {
		for (j = 0; j < 2; j++)
			scanf("%d", &a[j]);
		for (j = 0; j <= L; j++)
			if (j >= a[0] && j <= a[1]) b[j] = 1;
	}
	for (i = 0; i <= L; i++)
		if (b[i] == 0) count++;
	printf("%d", count);
	return 0;
}