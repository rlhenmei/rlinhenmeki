 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdio.h>
//int main()
//{
//    float a = 0;
//    scanf("%f", &a);
//    int b = (int)a;
//    int c = b % 10;
//    printf("%d", c);
//    return 0;
//}
//int main()
//{
//	int n = 0;//行
//	int i = 0;//列
//	int j = 0;
//	int a = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d %d", &n, &i);
//	for (j = 0; j < n; j++)
//	{
//		for (a = 0; a < i; a++)
//		{
//			scanf("%d", &arr[j][a]);
//		}
//
//	}
//	int k = 0;
//	int m = 0;
//	char b = 0;
//	int t = 0;
//	scanf("%d", &k);
//	for (m = 0; m < k; m++)
//	{
//		int num1 = 0;
//		int num2 = 0;
//		getchar();//清理缓冲区
//		scanf("%c %d %d", &b, &num1, &num2);
//		if (b == 'r')
//		{
//			for (t = 0; t < i; t++)
//			{
//				int q = arr[num1 - 1][t];
//				arr[num1 - 1][t] = arr[num2 - 1][t];
//				arr[num2 - 1][t] = q;
//			}
//		}
//		else if (b == 'c')
//		{
//			for (t = 0; t < n; t++)
//			{
//				int q = arr[t][num1 - 1];
//				arr[t][num1 - 1] = arr[t][num2 - 1];
//				arr[t][num2 - 1] = q;
//			}
//		}
//
//	}
//	int o = 0;
//	int u = 0;
//	for (o = 0; o < n; o++)
//	{
//		for (u = 0; u < i; u++)
//		{
//			printf("%d ", arr[o][u]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	int a = 0;
//	int b = 0;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (ch == 'A')
//		{
//			a++;
//		}
//		else if (ch == 'B')
//		{
//			b++;
//		}
//	}
//	if (b > a)
//	{
//		printf("B");
//	}
//	else if (a > b)
//	{
//		printf("A");
//	}
//	else
//	{
//		printf("E");
//	}
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >= 140)
//	{
//		printf("Genius");
//	}
//
//	return 0;	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n >90&&n<100)
//	{
//		printf("Perfect");
//	}
//
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n >= 60)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (j = 0; j < 3; j++)
//	{
//		if (max < arr[j])
//		{
//			int t = max;
//			max = arr[j];
//			arr[j] = max;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (scanf("%c\n", &a) != EOF)
//	{
//		if (isalpha(a))
//		{
//			printf("%c is an alphabet.\n", a);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", a);
//		}
//	}
//	return 0;
//}
