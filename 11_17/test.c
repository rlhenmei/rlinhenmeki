 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//void print(int arr[],int sz)
//{
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//
//
//	}
//}
//int main()
//{
//	char arr[10001] = { 0 };
//	int i = 0;
//	int j = 0;
//	while (scanf("%c", &arr[i]) != EOF)
//	{
//		i++;//数组最后一个元素的下标
//
//	}
//	char* p = &arr[i];
//	for (j = 0; j < i; j++)
//	{
//		printf("%c", *p);
//		p--;
//	}
//		
//	return 0;
//}
//int main()
//{
//	char arr[10001] = { 0 };
//	int i = 0;
//	int n = 0;
//	for (n = 0; n < 5; n++)
//	{
//		scanf("%c", &arr[n]);
//	}
//	/*while ()
//	{
//		i++;
//	}*/
//	int left = 0;
//	int right = 4;
//	while (left < right)
//	{
//		int t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%c", arr[j]);
//
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int t = 0;
//	int n = 0;
//	scanf("%d %d", &a,&n);
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		t = t * 10 + a;
//		sum += t;
//
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;//行数
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 0; j < n - i; j++)//打印空格数
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < n ; i++)
//	{
//		for (a = 0; a < i; a++)
//		{
//
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (n - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}