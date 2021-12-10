 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int sum1 = 0;
//	int i = 0;
//	int j = 0;
//	int m = 1;
//	scanf("%d", &n);
//	while (1)
//	{
//		scanf("%d", &i);
//		if (m == 1)
//		{
//			sum += i;
//			if (sum < n)
//			{
//				for (j = 0; j < i; j++)
//				{
//					printf("0");
//				}
//			}
//			else
//			{
//				for (j = 0; j < n - (sum - i); j++)
//				{
//					printf("0");
//				}
//				puts("");
//
//				sum = i - j;
//				for (j = 0; j < sum; j++)
//				{
//					printf("0");
//				}
//				if (sum % n == 0)
//				{
//					sum = 0;
//					//puts("");
//				}
//			}
//		}
//		if (m == -1)
//		{
//			sum += i;
//			if (sum < n)
//			{
//				for (j = 0; j < i; j++)
//				{
//					printf("1");
//				}
//			}
//			else
//			{
//				for (j = 0; j < n - (sum - i); j++)
//				{
//					printf("1");
//				}
//				puts("");
//				sum = i - j;
//				for (j = 0; j < sum; j++)
//				{
//					printf("1");
//				}
//				if (sum % n == 0)
//				{
//					sum = 0;
//					//puts("");
//				}
//			}
//		}
//	a:
//		m *= -1;
//		sum1 += i;
//		if (sum1 == n * n)
//			break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int m = 0;
//	int count = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	while (sum != n * n)
//	{
//		scanf("%d", &i);
//		sum += i;
//		for (j = 0; j < i; j++)
//		{
//			printf("%d", m);
//			count++;
//			if (count == n)
//			{
//				printf("\n");
//				count = 0;
//			}
//		}
//		m = !m;
//	}
//
//
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	//gets(a);
//	scanf("%s", &a);
//	printf("%c", a);
//	return 0;
//}

//int main()
//{
//	char arr[11] = { 0 };
//	gets(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char arr[10] = { 0 };
//	gets(arr);
//	int n = strlen(arr);
//	printf("%d", n);
//	return 0;
//}
int arr1[40000] = { 0 };
int main()
{
	int spot = 0;
	int j = 0;
	int n = 0;
	int count = 0;
	char arr[201] = { 0 };
	while (1)
	{
		int i = 0;
		gets(arr);
		n = strlen(arr);
		for (i = 0; i < n; i++)
		{
			if (arr[i] == spot)
			{
				count++;
			}
			if (arr[i] == !spot)
			{
				arr[j] = count;
				count = 0;
			}
		}

	}
	printf("%d", n);
	for (j = 0; j < 40000; j++)
	{
		if (arr[j] != 0)
		{
			printf(" %d", arr[j]);

		}
	}
	return 0;
}