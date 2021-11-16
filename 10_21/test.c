// #define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d %d", &num1, &num2);
//	max = (num1 > num2) ? num1 : num2;
//	printf("较大的数是%d。\n",max);
//
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int a, b, c, d = 0;
//    scanf("%d %d", &a, &b);
//    c = a / b;
//    d = a % b;
//    printf("%d %d", c, d);
//    return 0;
//}#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int a = 40;
//    int c = 212;
//    int b = (-8 + 22) * a - 10+c / 2;
//    printf("b=%d", b);
//
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int MAX(int x, int y)
{ 
	if (x > y)
      return x;
    else
      return y;
}


int main()
{
    int num1 = 0;
    int num2 = 0; 
    scanf("%d %d", &num1, &num2);
    int max1 = MAX(num1, num2);
    printf("max1=%d", max1);
     return 0;

}