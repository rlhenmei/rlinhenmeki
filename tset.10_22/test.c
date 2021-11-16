 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int c = 3;
// void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
// int main()
//	
//{
//	int b= 0;
//	while (b < 10)
//	{
//		test();
//		b++;
//	}
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    if (x < 0)
//        printf("1\n");
//    else if (x==0)
//        printf("0\n");
//    else
//        printf("-1\n");
//    return 0;
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    while (a > 3600)
//    {
//        int hour = a / 3600;
//        printf("%d ", hour);
//    }
//    while (a < 3600 && a>60)
//    {
//        int min = (a - 3600) / 60;
//        printf("%d ", min);
//    }
//    while (a > 0 && a < 60)
//    {
//        printf("%d", a);
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int hour = 0;
//    int min = 0;
//    int second = 0;
//    scanf("%d", &a);
//    if (a >= 3600)
//    {
//        hour = a / 3600;
//        min = (a - hour * 3600) / 60;
//        second = a - hour * 3600 - min * 60;
//        printf("%d %d %d", hour, min, second);
//
//    }
//    else if (a >= 60 && a < 3600)
//    {
//        min = a / 60;
//        second = a - min * 60;
//        printf("%d %d %d", hour, min, second);
//    }
//    else
//        printf("%d %d %d", hour, min, a);
//    return 0;
//}