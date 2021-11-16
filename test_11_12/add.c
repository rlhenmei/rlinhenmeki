 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("请输入人数。");
//    scanf("%d", &num);
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < num; i++)
//	{
//		printf("%d号：", i + 1);
//		scanf("%d", &arr[i]);
//		while (arr[i] < 0 || arr[i]>100)
//		{
//			puts("请输入1-100的数字");
//			printf("%d号：",i+1);
//			scanf("%d", &arr[i]);
//		}
//		////printf("\n");
//	}
//	
//	puts("---分布图---");
//	
//	printf("\n");
//	for (i = 0; i <= 9; i++)
//	{
//		int j = 0;
//		if (i != 0)
//		{
//			printf("%d-%d:", i * 10, i * 10 + 9);
//			for (j = 0; j < num; j++)
//			{
//				if (arr[j] > i * 10 && arr[j] < i * 10 + 9)
//					printf("*");
//			}
//			printf("\n");
//		}
//		else
//		{
//			printf("  %3d:", i);
//			for (j = 0; j < num; j++)
//			{
//				if (arr[j] == 0)
//					printf("*");
//			}
//			printf("\n");
//		}
//	}
//	printf("  100:");
//	for (i = 0; i < num; i++)
//	{
//		if (arr[i] == 100)
//			printf("*");
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	long long c = a ^ b;
//	printf("%d", c);		
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int n = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a & 1 << i)
//			n++;
//
//	}
//	printf("%d", n);
//	return 0;
//}
//&   按位与：全一为一，否则为零。
//|   按位或：有一为一，否为零。
//^   按位异或：同为一，否为零。