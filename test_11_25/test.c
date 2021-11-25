#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("%d", sizeof(int*));
//
//
//	return 0;
//}
//int main()
//{
//    double arr[5][6] = { 0 };
//    int i = 0;
//    int j = 0;
//    double sum = 0;
//    for (i = 0; i < 5; i++)
//    {
//        sum = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf ", &arr[i][j]);
//            sum += arr[i][j];
//        }
//        arr[i][5] = sum;
//    }
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 6; j++)
//        {
//            printf("%.1lf ", arr[i][j]);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int arr[5][5] = { 0 };
//    int n = 0;//行
//    int m = 0;//列
//    int i = 0;
//    int j = 0;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    scanf("%d", &b);
//    printf("%d", arr[a - 1][b - 1]);
//    return 0;
//}
//int main()
//{
//    int n = 0;//行
//    int m = 0;//列
//    int arr[100] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 100; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int a = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = a; j < m + (i * m); j++)
//        {
//            printf("%d ", arr[j]);
//        }
//        puts("");
//        a += m;
//    }
//
//    return 0;
//}
//int main()
//{
//    int n = 0;//行
//    int m = 0;//列
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int max = 0;
//    int a = 0;
//    int b = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//                a = i;
//                b = j;
//            }
//        }
//    }
//    printf("%d %d", a + 1, b + 1);
//    return 0;
//}
//int main()
//{
//	int n, sum = 0;
//	n = 1;
//loop:
//	sum += n;
//	n++;
//	if (n <= 200) {
//		goto loop;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
int main()
{
    int n = 0;//行
    int m = 0;//列
    int arr1[10][10] = { 0 };
    int arr2[10][10] = { 0 };
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    int o = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                puts("No");
                o++;
                break;
            }
        }
        if (o != 0)
        {
            break;
        }
    }
    if (o == 0)
    {
        puts("Yes");
    }
    return 0;
}
