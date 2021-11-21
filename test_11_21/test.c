 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void test()
//{
//
//	printf("hehe\n");
//}
//int main()
//{
//
//	test();
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int  a = 0;
//	int m = 0;
//	a = 20;
//	 int* const p = &a;
//	p = &m;
//	printf("%d %d", a, *p);
//	return 0;
//}
//int cifang(int i,int count)
//{
//	if (count == 1)
//	{
//		return i;
//	}
//	else
//	{
//		count--;
//		return i * cifang(i, count);
//	}
//}
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	int n1 = n;
//	int n2 = n;//保留n的值
//	while (n1!=0)
//	{
//		n1 /= 10;
//		count++;//算出数字的个数
//	}
//	printf("%d\n", count);
//	int i = 0;
//	int sum = 0;
//	while (n != 0)
//	{
//		i = n % 10;
//		int c=cifang(i,count);
//		sum += c; 
//		n /= 10;
//	}
//	//printf("%d", sum);
//	if (sum == n2)
//	{
//		printf("%d是水仙花数。\n", n2);
//	}
//	else
//	{
//		printf("%d不是水仙花数。\n", n2);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &n);
//	total = n;
//	empty = n;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//    float a, b, c;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        if (0 == a)
//        {
//            printf("Not quadratic equation");
//        }
//        else
//        {
//            float delta = (b * b) - 4 * a * c;
//            if (delta == 0)
//            {
//                printf("x1=x2=%.2f\n", -b / (2.0 * a));
//            }
//            else if (delta > 0)
//            {
//                printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(delta)) / (2.0 * a), (-b + sqrt(delta)) / (2.0 * a));
//            }
//            else
//            {
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (2.0 * a), sqrt(-delta) / (2.0 * a), -b / (2.0 * a), sqrt(-delta) / (2.0 * a));
//            }
//
//        }
//
//
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
//        {
//            if (2 == month)
//            {
//                puts("29");
//            }
//            else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//            {
//                puts("31");
//            }
//            else
//            {
//                puts("30");
//            }
//        }
//        else
//        {
//            if (2 == month)
//            {
//                puts("28");
//            }
//            else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//            {
//                puts("31");
//            }
//            else
//            {
//                puts("30");
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    double a, b = 0;
//    char ch = 0;
//    while (~scanf("%lf%c%lf", &a, &ch, &b))
//    {
//        if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
//        {
//            puts("Invalid operation!");
//        }
//        else
//        {
//            if (ch == '/' && b == 0)
//            {
//                puts("Wrong!Division by zero!");
//            }
//            else
//            {
//                if (ch == '+')
//                {
//                    printf("%.4lf+%.4lf=%.4lf", a, b, a + b);
//                }
//                else if (ch == '*')
//                {
//                    printf("%.4lf*%.4lf=%.4lf", a, b, a * b);
//                }
//                else if (ch == '-')
//                {
//                    printf("%.4lf-%.4lf=%.4lf", a, b, a - b);
//                }
//                else
//                {
//                    printf("%.4lf/%.4lf=%.4lf", a, b, a / b);
//                }
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n=0;
//    while(~scanf("%d",&n))
//    {
//        int i=0;
//        for(i=0;i<n;i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    
//    
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = n; i > 0; i--)
//        {
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n; j++)
//            {
//                if (j <= n - i)
//                {
//                    printf("  ");
//                }
//                else
//                {
//                    printf("* ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = n; i > 0; i--)
//        {
//            for (j = 1; j <= n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; n-j>= 0; j++)
//            {
//                printf(" ");
//            }
//            for (j = 1; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (j = 1; j <= n + 1; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 1; j <= n; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (j = 1; j <= n + 1; j++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= n + 1; i++)
//        {
//            for (j = 0; j < n + 2 - i; j++)
//            {
//                printf("* ");
//            }
//            puts("");
//        }
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            puts("");
//        }
//    }
//
//
//    return 0;
//}
