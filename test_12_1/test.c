 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//long long panduan(int n)
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 2;; i++)
//	{
//		int count = 0;
//		long long p = i * n;
//		if (p > 9)
//		{
//			while (p != 0)
//			{
//				count = 0;
//				arr[p % 10] = p%10;
//				p = (p / 10 > 0) ? (p / 10) : p;
//				if (arr[p % 10] =! p % 10)
//				{
//					count++;
//				}
//				if (count > 1)
//				{
//					break;
//				}
//			}
//			if (count == 1)
//			{
//				return p;
//			}
//		}
//
//	}
//
//
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	int m = 0;//计算n的倍数有几位数
//	do
//	{
//		scanf("%d", &n);
//		count++;
//		long long c=panduan(n);
//		printf("%d:%lld\n",n, c);
//
//		if (count == 500)
//		{
//			break;
//		}
//	} while (n);
//
//
//	return 0;
//}
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    int max = a > b ? a : b;
//    max = max > c ? max : c;
//    max = max > d ? max : d;
//    printf("%d", max);
//    return 0;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if ((a + b + c) / 3 < 60)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        puts("NO");
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n >= 90 && n <= 100)
//    {
//        printf("A");
//    }
//    else if (n >= 80 && n <= 89)
//    {
//        printf("B");
//    }
//    else if (n >= 70 && n <= 79)
//    {
//        printf("C");
//    }
//    else if (n >= 60 && n <= 69)
//    {
//        printf("D");
//    }
//    else if (n >= 0 && n <= 59)
//    {
//        printf("E");
//    }
//    else
//    {
//        printf("F");
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        int a, b, c;
//        scanf("%d %d %d", &a, &b, &c);
//        if ((a + b + c) / 3 < 60)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int max = 0;
//    for (i = 0; i < n; i++)
//    {
//        int math = 0;
//        scanf("%d", &math);
//        if (math > max)
//        {
//            max = math;
//        }
//    }
//    printf("%d", max);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int a = 1;
//    int sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        a *= i;
//        sum += a;
//    }
//    printf("%d", sum);
//    return 0;
//}
//int max3(int a, int b, int c)
//{
//    int max = a;
//    max = max > b ? max : b;
//    max = max > c ? max : c;
//    return max;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    int q = max3(a + b, b, c);
//    int w = max3(a, b + c, c);
//    int e = max3(a, b, b + c);
//    double m = q * 1.0 / (w + e);
//    printf("%.2lf", m);
//    return 0;
//}
