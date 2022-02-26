 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
//int main()
//{
//    char arr[10001] = { 0 };
//    gets(arr);
//    for (int i = 0; i < 10000; i++)
//    {
//        if (arr[i] != ' ' && !isalpha(arr[i])&&arr[i]!='\0')
//            arr[i] = ' ';
//        if (arr[i] == '\0')
//            break;
//    }
//    for (int i = strlen(arr) - 1; i >= 0; i--) {
//        if (i == 0)
//        {
//            for (int cur = 0; arr[cur] != ' '; cur++)
//            {
//                printf("%c", arr[cur]);
//            }
//        }
//        if (arr[i] != ' ')
//            continue;
//
//        else
//        {
//            for (int cur = i + 1; arr[cur] != ' ' && arr[cur] != '\0'; cur++)
//            {
//                printf("%c", arr[cur]);
//            }
//        }
//        printf(" ");
//    }
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, * p = a + 5, * q = NULL;
//	q = (p + 5);
//	printf("%d %d\n", *p, *q);
//	return 0;
//}
#include<stdio.h>
int main()
{
   /* int n = 0;
    int num = 0;
    int m = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        num =num^m;
    }
    printf("%d\n", num);*/
    char a = 'a';
    printf("%c", a);
    return 0;
}