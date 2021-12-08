 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	char arr[7] = { 0 };
//	char arr1[7] = { 0 };
//	char ch = 0;
//	long long num1 = 1;
//	long long num2 = 1;
//	//int i = 0;
//	/*gets(arr);
//	gets(arr1);
//	int i = 0;*/
//	/*for (i = 0; i < 6; i++)
//	{
//		if (arr[i] == 0)
//			break;
//		arr[i] -= 64;
//		num1 *= arr[i];
//	}
//	for (i = 0; i < 6; i++)
//	{
//		if (arr1[i] == 0)
//			break;
//		arr1[i] -= 64;
//		num2 *= arr1[i];
//	}*/
//	while ((ch = getchar())!='\n')
//	{
//		
//		ch -= 64;
//		num1 *= ch;
//	}
//	//printf("%d", num1);
//	while ((ch = getchar()) != '\n')
//	{
//		ch -= 64;
//		num2 *= ch;
//	}
//	if (num1 % 47 == num2 % 47)
//		printf("go");
//	else
//		printf("stay");
//	/*for (i = 0; i < 6; i++)
//	{
//		scanf("%c", &arr[i]);
//	}*/
//	//printf("%d",arr[1]);
//	return 0;
//}
// //¸çµÂ°ÍºÕ²ÂÏë
//int panduan(int n)
//{
//	int i = 0;
//	for (i = 2; i < n ; i++)
//	{
//		if (n % i == 0&&n!=0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 4; i <= n; i += 2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (panduan(j) && panduan(i - j))
//			{
//				printf("%d=%d+%d", i, j, i - j);
//				break;
//			}
//		}
//		puts("");
//	}
//	return 0;
//}
// 
// 
// 
//#include<stdlib.h>
//int  comp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int arr[100000] = { 0 };
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, n, sizeof(int), comp);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#include<math.h>
//int zhuanhuan(int n)
//{
//	if (n == 1)
//		return 10;
//	else
//	    return 10 * zhuanhuan(n - 1);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int count = 0;
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		while (n)
//		{
//			arr[i] = n % 10;
//			n /= 10;
//			i++;
//		}
//		for (j = 0; j < i-1; j++)
//		{
//			if (arr[j] != 0)
//			{
//				sum += arr[j]*zhuanhuan(j);
//			}
//		}
//		printf("%d", sum);
//	}
//	else
//	{
//		n = -n;
//		while (n)
//		{
//			arr[i] = n % 10;
//			n /= 10;
//			i++;
//		}
//	}
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int n = 0;
	int i = 0;
	int b = 0;
	int flag = 0;
	scanf("%d", &n);
	if (n > 0)
	{
		while (n)
		{
			arr[i] = n % 10;
			n /= 10;
			if (arr[i] != 0)
				printf("%d", arr[i]);
			i++;
		}
	}
	else if (n < 0)
	{
	a:
		if (flag == 1)
			n = -n;
	//b:
		while (n)
		{
			arr[i] = n % 10;
			n /= 10;
			if (n < 0)
			{
				if (arr[i] != 0)
				{
					flag = 1;
					printf("%d", arr[i]);
					i++;
					goto a;
				}
				if (arr[i] == 0)
				{
					i++;
					//goto b;
					continue;
				}
			}
			
		}
	}
	else
		printf("0");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] != 0)
			break;
	}
	for (i; i < ; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
//int main()
//{
//	int i = -190;
//	int c = i % 10;
//	printf("%d", c);
//}