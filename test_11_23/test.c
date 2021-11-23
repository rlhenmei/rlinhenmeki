 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int ji = 0;
//    int ou = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 != 0)
//        {
//            ji++;
//        }
//        else
//        {
//            ou++;
//        }
//    }
//    printf("%d %d", ji, ou);
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    double arr[100] = { 0 };
//    int i = 0;
//    double sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%lf", &arr[i]);
//        sum += arr[i];
//    }
//    double max = arr[0];
//    double min = arr[0];
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//    printf("%.2lf %.2lf %.2lf", max, min, sum  / n);
//        return 0;
//}
//int main()
//{
//    char a[10] = { 0 };
//    char b[10] = { 0 };
//    scanf("%s %s", &a, &b);
//    if (strcmp(a, b) == 0)
//    {
//        printf("same");
//    }
//    else
//    {
//        printf("different");
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int arr[51] = { 0 };
//    int i = 0;
//    int a = 0;//要插入的数。
//    int j = 0;//定义插入数字的下标。
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &a);
//    for (i = 0; i < n; i++)
//    {
//        if (a < arr[i])
//        {
//            j = i;
//            break;
//        }
//    }
//    if (i == n)
//    {
//        j = i;//插入数字就是数组中最大的数。
//    }
//    for (i = n; i >= j; i--)
//    {
//        arr[i + 1] = arr[i];
//    }
//    arr[j] = a;
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int main()
//{
//    int arr[10][10] = { 0 };
//    int m = 0, n = 0;
//    int i = 0;
//    int j = 0;
//    int sum = 0;;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > 0)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int arr[10] = { 0 };
//    for (n = 0; n < 10; n++)
//    {
//        scanf("%d", &arr[n]);
//    }
//    for (n = 9; n >= 0; n--)
//    {
//        printf("%d ", arr[n]);
//    }
//    return 0;
//}
//int main()
//{
//    int arr[10] = { 0 };
//    int n = 0;
//    int a = 0;
//    int b = 0;
//    for (n = 0; n < 10; n++)
//    {
//        scanf("%d", &arr[n]);
//        if (arr[n] > 0)
//        {
//            a++;
//        }
//        else if (arr[n] < 0)
//        {
//            b++;
//        }
//    }
//    printf("positive:%d\nnegative:%d", a, b);
//    return 0;
//}
//int main()
//{
//    int arr[50] = { 0 };
//    int n = 0;
//    int i = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    printf("%d", sum);
//    return 0;
//}
//int main()
//{
//    int arr[10000] = { 0 };
//    int i = 0;
//    int n = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//
//    }
//    int max = arr[0];
//    int min = arr[0];
//    for (i = 0; i < n; i++)
//    {
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//        else if (min > arr[i])
//        {
//            min = arr[i];
//        }
//    }
//    printf("%d", max - min);
//    return 0;
//}
int main()
{
    int a, b = 0, c = 100, i = 0, d;
    scanf("%d", &a);
    for (i; i < a; i++)
    {
        scanf("%d ", &d);
        if (d > b)
            b = d;
        if (d < c)
            c = d;
    }
    printf("%d", b - c);
}