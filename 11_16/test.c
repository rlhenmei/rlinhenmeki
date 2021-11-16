 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int a, b, sum;
//    scanf("0x%x 0%o", &a, &b);
//    sum = a + b;
//    printf("%d\n", sum);
//}
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch >= 65 && ch <= 90)
//        {
//            printf("%c\n", ch + 32);
//        }
//        else if (ch >= 97 && ch <= 122)
//        {
//            printf("%c\n", ch - 32);
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF)
//    {
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//    return 0;
//}
//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//        {
//            printf("1\n");
//        }
//        else if (0 == t)
//        {
//            printf("0.5\n");
//        }
//        else
//        {
//            printf("0\n");
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//    int a, b, c;
//    int i = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && b == c && a == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || c == b || a == c)
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!");
//            }
//
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//
//    return 0;
//}
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        float c = b / 100.0;
        float n = a / (c * c);
        if (n < 18.5)
        {
            printf("Underweight\n");
        }
        else if (n >= 18.5 && n <= 23.9)
        {
            printf("Normal\n");
        }
        else if (n > 23.9 && n <= 27.9)
        {

            printf("Overweight\n");
        }
        else if (n > 27.9)
        {
            printf("Obese\n");
        }
    }

    return 0;
}