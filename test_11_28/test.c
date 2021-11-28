 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    char arr[100] = { 0 };
//    scanf("%s", &arr);
//    printf("%s", arr);
//
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    scanf("%d %d", &i, &n);
//    int a = i > n ? i : n;
//    while (a % i != 0 || a % n != 0)
//    {
//        a++;
//    }
//    printf("%d", a);
//    return 0;
//}
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int len = 0;
//    int i = 0;
//    int j = 0;
//    len = strlen(arr);
//    for (i = len - 1; i >= 0; i--)
//    {
//        if (arr[i] ==' ')
//        {
//            for (j = i + 1; arr[j] != ' ' && arr[j] != '\0'; j++)
//            {
//                printf("%c", arr[j]);
//            }
//            printf(" ");
//        }
//    }
//    i = 0;
//    while (arr[i] != ' ')
//    {
//        i++;
//    }
//    for (j = 0; j < i; j++)
//    {
//        printf("%c", arr[j]);
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 1; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                goto a;
//            }
//        }
//    }
//    if (i == n)
//    {
//        goto b;
//    }
//a:
//    printf("NO\n");
//b:
//    if (i == n)
//    {
//        printf("YES\n");
//    }
//    return 0;
//}
int main()
{
    int i = 0;
    int j = 0;
    int n = 0;//ÁÐ
    int m = 0;//ÐÐ
    scanf("%d %d", &m, &n);
    int arr[10][10] = { 0 };
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    return 0;
}