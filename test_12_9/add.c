 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	char arr[11] = { 0 };
//	for (i = 0; i < 11; i++)
//	{
//		arr[i] = -1;
//	}
//	gets(arr);
//	if (arr[0] == '0')
//	{
//		printf("0");
//		return 0;
//	}
//	for (count = 0; count < 11; count++)
//	{
//		if (arr[count] == '\0')
//			break;
//	}
//	for (i = count-1; i >= 0; i--)
//	{
//		if (arr[i] != '0')
//			break;
//	}
//	if (arr[0] == '-')
//	{
//		printf("-");
//		for (j = i; j > 0; j--)
//		{
//			printf("%c", arr[j]);
//		}
//	}
//	else
//	{
//		for (j = i; j >= 0; j--)
//		{
//			printf("%c", arr[j]);
//		}
//	}
//	return 0;
//}
//int arr[10001] = { 0 };
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 1;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = j; i < n; i++)
//	{
//		if (arr[i] < arr[i - 1])
//		{
//			for (j = i; j < n; j++)
//			{
//				if (arr[j] == arr[j + 1])
//					continue;
//				else if (arr[j] < arr[j + 1])
//				{
//					count++;
//					j = j + 2;
//					break;
//				}
//				else
//				{
//					j = j + 1;
//					break;
//				}
//			}
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//int arr[200][200] = { 0 };
int main()
{
	int n = 0;
	int sum = 0;
	int sum1 = 0;
	int i = 0;
	int j = 0;
	int m = 1;
	scanf("%d", &n);
	while (1)
	{
		scanf("%d", &i);
		if (m == 1)
		{
			sum += i;
			if (sum < n)
			{
				for (j = 0; j < i; j++)
				{
					printf("0");
				}
			}
			else
			{
				for (j = 0; j < n - (sum - i); j++)
				{
					printf("0");
				}
				puts("");
				
				sum = sum - j;
				for (j = 0; j < sum; j++)
				{
					printf("0");
				}
				if (sum % n == 0)
				{
					sum = 0;
				}
			}
		}
		if (m == -1)
		{
			sum += i;
			if (sum < n)
			{
				for (j = 0; j < i; j++)
				{
					printf("1");
				}
			}
			else
			{
				for (j = 0; j < n-(sum-i); j++)
				{
					printf("1");
				}
				puts("");
				sum = sum - j;
				for (j = 0; j < sum; j++)
				{
					printf("1");
				}
				if (sum % n == 0)
				{
					sum = 0;
				}
			}
		}
		a:
		m *= -1;
		sum1 += i;
		if (sum1 == n * n)
			break;
	}
	return 0;
}
