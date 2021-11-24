 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int count = 0;
//    int m = 0;
//    int j = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] < arr[i + 1])
//        {
//            count++;
//        }
//
//
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] > arr[i + 1])
//        {
//            j++;
//        }
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] == arr[i + 1])
//        {
//            m++;
//        }
//    }
//    if (count == n - 1 || m == n - 1 || j == n - 1)
//    {
//        printf("sorted");
//    }
//    else
//    {
//        printf("unsorted");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<assert.h>//相比上面的那种解法更好
//int pd(int* a, int n)
//{
//    assert(a && n);
//    int f1 = 1;
//    int f2 = 1;
//    int i = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        if (a[i] > a[i + 1])
//        {
//            f1 = 0;
//        }
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (a[i] < a[i + 1])
//        {
//            f2 = 0;
//        }
//    }
//    return (f1 || f2);
//}
//int main()
//{
//    int a[50];
//    int i, N;
//    scanf("%d", &N);
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d ", &a[i]);
//    }
//    if (pd(a, N))
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    int m = 0;
//    int arr[51] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &j);
//    for (m = n - 1; m >= 0; m--)
//    {
//        arr[m + 1] = arr[m];
//        if (arr[m] < j)
//        {
//            arr[m + 1] = j;
//            break;
//        }
//    }
//    if (m < 0)
//    {
//        arr[0] = j;
//    }
//    for (m = 0; m <= n; m++)
//    {
//        printf("%d ", arr[m]);
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int a = 0;
//    int j = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &a);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == a)
//        {
//            arr[i] = 0;//也可以用按位异或
//
//        }
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}
//按位异或
int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[50], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < n; i++)
        arr[i] ^= x;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            printf("%d ", arr[i] ^ x);
    }
    return 0;
}