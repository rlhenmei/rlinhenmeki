 #define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//
//int is_leap(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (is_leap(i))
//		{
//			n++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\n%d", n);
//	return 0;
//}
//
//int is_prime(int i)
//{
//	int n = 0;
//	for (n = 2; n < i; n++)
//	{
//		if (i % n == 0)
//			return 0;
//			
//	}
//
//
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//
//
//
//	}
//	//
//	//
//	//
//	//
//	return 0;
//}

//void swap(int* pa, int* pb)
//{
//	int t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a, &b);
//	swap(&a, &b);
//	printf("½»»»ºóa=%d£¬b=%d",a,b);
//
//	return 0;
//}

void a(int n)
{
	int i = 0;
	int a = 0;
	for (i = 1; i <=n; i++)
	{
		for (a = 1; a <= i; a++)
		{
			printf("%2d*%2d=%3d ", i, a, i * a);



	     }

		printf("\n");

	}


}


int main()
{
	int n = 0;
	scanf("%d", &n);
	a(n);



	return 0;
}