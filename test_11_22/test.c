 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while(~scanf("%d", &n))
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n; j++)
//            {
//                if (j == i || j == n - i+1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            puts("");
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
//            if (i == 1 || i == n)
//            {
//                for (j = 0; j < n; j++)
//                {
//                    printf("* ");
//                }
//                puts("");
//            }
//            else
//            {
//                printf("* ");
//                for (j = 1; j < 2*n - 3; j++)
//                {
//                    printf(" ");
//                }
//                printf("*\n");
//            }
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    double arr[5] = { 0 };
//    double sum = 0;
//    for (n = 0; n < 5; n++)
//    {
//        scanf("%lf", &arr[n]);
//        sum += arr[n];
//    }
//    printf("%.2lf", sum/5);
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        if (n == 200)
//        {
//            puts("OK");
//        }
//        else if (n == 202)
//        {
//            puts("Accepted");
//        }
//        else if (n == 400)
//        {
//            puts("Bad Request");
//        }
//        else if (n == 404)
//        {
//            puts("Forbidden");
//        }
//        else if (n == 500)
//        {
//            puts("Internal Server Error");
//        }
//        else if (n == 502)
//        {
//            puts("Bad Gateway");
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int arr[51] = { 0 };
//    int i = 0;
//    int j = 0;
//    scanf("%d", &n);
//    for (j = 0; j < n; j++)
//    {
//        scanf("%d", &arr[j]);
//    }
//    scanf("%d", &i);
//    int a = 0;
//    for (j = 0; j < n; j++)
//    {
//        if (i < arr[j])
//        {
//            a = j;//j就是数字要插入的下标
//            break;
//        }
//    }
//    if (j == n)
//    {
//        a = j;//如果插入的数就是这个数组中最大的数，那就不用调整数组位置，直接插入。
//    }
//    int b = 0;
//    for (b = n; b > a; b--)
//    {
//        arr[b] = arr[b - 1];//将第j项后的内容都向后一个位置。
//    }
//    arr[a] = i;
//    int m = 0;
//    for (m = 0; m < n + 1; m++)
//    {
//        printf("%d ", arr[m]);
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int arr[100] = { 0 };
//        int i = 0;
//        int j = 0;
//        int count = 0;
//        for (i = 2; i <= n; i++)
//        {
//            arr[i - 2] = i;
//        }
//        for (i = 2; i <= n; i++)
//        {
//            for (j = i - 1; j <= n - 2; j++)
//            {
//                if (arr[j] % i == 0)
//                {
//                    arr[j] = 0;//将值为素数的数组中的值改为0.
//                }
//            }
//        }
//        for (i = 0; i < n; i++)
//        {
//            if (arr[i] != 0)
//            {
//                printf("%d ", arr[i]);
//                count++;//计算不是素数的个数，再用总数减去得到素数个数。
//            }
//        }
//        printf("\n%d", n - count - 1);
//    }
//
//    return 0;
//}
//int main()
//{
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    int m = 0;
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    double like = 0;
//    scanf("%d %d", &m, &n);
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    like = (count * 100.0) / (m * n);
//    printf("%.2lf", like);
//    return 0;
//}
//int main()
//{
//    char ch, ch1,ch2;
//    scanf("%c", &ch);
//    scanf("%c", &ch2);
//    putchar(ch2);
//    ch1 = getchar();
//    putchar(ch1);
//    return 0;
//}
//int main()
//{
//    char a[100], b[100];
//    while (scanf("%s%s", a, b) != EOF)
//    {
//        if (strcmp(a, "admin") == 0 && strcmp(b, "admin") == 0)
//        {
//            printf("Login Success!\n");
//        }
//        else
//        {
//            printf("Login Fail!\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    printf("%d", (a + b - c) * d);
//
//    return 0;
//}
//int panduan(int i)
//{
//    if (i == 0)
//    {
//        return 0;
//    }
//    else
//    {
//        if (i % 10 == 9)
//        {
//            return 1;
//        }
//        else
//        {
//            panduan(i / 10);
//        }
//    }
//}
//int main()
//{
//    int i = 0;
//    int sum = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int c = panduan(i);
//        sum += c;
//    }
//    printf("%d", sum);
//
//    return 0;
//}
