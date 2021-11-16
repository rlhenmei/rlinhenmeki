 
#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
////金字塔型输出
//int main()
//{
//    char a;//定义一个字符串
//    scanf("%c", &a);
//    for (int i = 1; i <= 5; i++)//第一层for循环，可见循环5次，即这个金字塔有5层
//    {
//        for (int j = 5 - i; j > 0; j--)//第二层打印字符前的空格，第一行4个空，第二行3个逐行递减。
//            printf(" ");
//        for (int m = 1; m <= i; m++)//打印字符，第一行1个，第二行2个，逐行递增。
//            printf("%c ", a);
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char nb[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int length = sizeof(nb);
//    for (int i = 0; i < length; i++)
//    {
//        printf("%c", nb[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int b = a / 10000;
//    int c = a % 10000;
//    int d = c / 100;
//    int e = c % 100;
//    printf("year=%d\nmonth=%02d\ndate=%02d", b, d, e);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int t = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    t = a;
//    a=b;
//    b = t;
//        printf("a=%d,b=%d", a, b);
//
//    return 0;
//}
#include<stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	int n = 0;
	int t = 0;
	for (n = 0; n < 10; n++)
	{
		for (a = n; a < 10; a++)
		{
			if (arr[n] < arr[a])
			{
				t = arr[n];
				arr[n] = arr[a];
				arr[a] = t;
			}
			
		}
		
		printf("%03d\n", arr[n]);

	}




	return 0;
}