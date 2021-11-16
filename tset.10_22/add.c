 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define ADD(x, y) (x+y)
//int main()
//{
//	int a = 10;
//	int b = 23;
//	int sum = ADD(a,b);
//	printf("%d", sum);
//	return 0;
//}
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int sum = a + b + c + d + e;
    float num = sum / 5.0;
        printf("%.1f", num);
    return 0;
}