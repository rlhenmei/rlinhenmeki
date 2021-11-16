 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i > 2 && i < n)
//		{
//			printf("* ");
//			for (a = 0; a < i - 2; a++)
//			{
//				printf("  ");
//			}
//			printf("* \n");
//
//		}
//		else
//		{
//			for (j = 1; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int len = 0;
//	int high = 0;
//	int r = 0;
//	int a = 0;
//	scanf("%d %d %d %d", &len, &high, &r, &a);
//	double b = 3.14 * r * r;
//	printf("%d\n%g\n%d\n", len * high,b, a * a);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[20] = { 0 };
//	int a[20] = { 0 };
//	printf("请输入学生人数：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		a[arr[i] / 10]++;
//	}
//	int max = a[0];
//	int t = 0;
//	for (i = 0; i <=10; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//	}
//	int j = 0;
//	for (max;max>0; max--)
//	{
//		for (j = 0; j <= 11; j++)
//		{
//			if (a[j] >= max)
//				printf(" * ");
//			else
//				printf("   ");
//		}
//		printf("\n");
//	}
//	puts("----------------------------------");
//	for (i = 0; i <= 100; i += 10)
//	{
//		printf("%2d ", i);
//	}
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[1001] = { 0 };
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (j = 0; j < n; j++)
//	{
//		if (arr[j] == arr[j + 1])
//		{
//
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[1001] = { 0 };
//    int m;
//    while (scanf("%d", &m) != EOF) 
//    {
//        arr[m] = m;
//    }
//
//    for (int i = 0; i < 1001; i++) 
//    {
//        if (arr[i] != 0) {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
//int get(int arr[10][10], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			
//		}
//
//	}
//	int c=get(arr, n);
//	if (c == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//
//		printf("NO\n");
//	}
//	/*for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%2d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	return 0;
//}
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	static int a = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &j);
	for (i = 0; i < n; i++)
	{
		if (j == arr[i])
		{
			
			a++;
			arr[i] = '\0';
		}

	}
	printf("%d\n", n-a);
	for (i = 0; i < n; i++)
	{
		if (arr[i] != '\0')
		{
			printf("%d ", arr[i]);
		}

	}
	return 0;
}