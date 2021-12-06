 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[12] = { 0 };
//	int i = 0;
//	int mom = 0;
//	int yu = 0;
//	for (i = 0; i < 12; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 12; i++)
//	{
//		yu = 300+yu - arr[i];
//		if (yu < 0)
//		{
//			printf("-%d", i + 1);
//			return 0;
//		}
//		if (yu > 100&&yu%100!=0)
//		{
//			mom = mom + (yu / 100) * 100;
//			yu = yu - (yu / 100) * 100;
//		}
//		else if (yu >= 100 && yu % 100 == 0)
//		{
//			mom = mom + yu;
//			yu = 0;
//		}
//	}
//	mom *= 1.2;
//	printf("%d", mom+yu);
//	return 0;
//}
// #include<stdio.h>
//#include<stdlib.h>
//int j = 0;
//int comp(const void* a, const void* b)
//{
//	
//	 j++;
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int i = 0;
//	int* array;
//	int n;
//	scanf("%d", &n);
//	array = (int*)malloc(n * sizeof(int));
//
//	for (; i < n; i++)
//	{
//		scanf("%d", (array + i));
//	}
//	qsort(array, n, sizeof(int), comp);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10000] = { 0 };
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	return 0;
//}
 /*qsort函数
#include<stdlib.h>
int j = 0;
int comp(const void* a, const void* b)
{

	j++;
	return *(int*)a - *(int*)b;
}
int main()
{
	int i = 0;
	int* array;
	int n;
	scanf("%d", &n);
	array = (int*)malloc(n * sizeof(int));
	for (; i < n; i++)
	{
		scanf("%d", (array + i));
	}
	qsort(array, n, sizeof(int), comp);
	printf("%d", j);
	return 0;
}*/
//int main()
//{
//	int arr[10000] = { 0 };
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	int count1 = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	while (arr[0] != 1)
//	{
//		for (i = 0; i < n - count-1; i++)
//		{
//			int tmp = arr[i+1];
//			arr[i + 1] = arr[i];
//			arr[i] = tmp;
//			count1++;
//		}
//		count++;
//	}
//	printf("%d", count1);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[n+1], ans;
//	ans = 0;
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= i; j++)
//			if (a[i] < a[j])
//				ans++;
//	printf("%d", ans);
//}
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	printf("%d\n", n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				arr[j] = !arr[j];
			}
			printf("%d", arr[j]);
		}
		puts("");
	}
	return 0;
}

//const int MAXN = 100;
//
//int a[100 + 5];
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", n); //n就是最少的操作次数
//	for (int i = 1; i <= n; i++)
//		a[i] = 0; //初始序列均为0 
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (i != j) //第i次让a[i]不取反 
//				a[j] = !a[j];
//			printf("%d", a[j]);
//		}
//		putchar('\n');
//	}
//}