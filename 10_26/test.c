 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int a = 1;
//	for (n = 1; n <= 100; n++)
//	{
//		sum = sum + 1.0 / n * a;
//		a = -a;
//
//
//	}
//	printf("%lf", sum);
//	return 0;
//}
int main()
{
	int n = 0;
	int sum = 0;
	for (n = 1; n <= 100; n++)
	{
		if (n % 2 == 0)
			sum = sum - (1.0 / n);
		else
			sum = sum + (1.0/ n);



	}
	printf("%lf\n", sum);

	return 0;
}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			b = b + 1;
//		}
//		c = i / 10;
//		if (c % 10 == 9)
//			b = b + 1;
//
//	}
//	printf("%d", b);
//
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	while (num1 != num2)
//	{
//		if (num1 > num2)
//			num1 = num1 - num2;
//		else
//			num2 = num2 - num1;
//
//
//	}
//	printf("%d", num1);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int a = 2;
//		for (a = 2; a < i; a++)
//		{
//			if (i % a == 0)
//				break;
//
//
//		}
//		if (a == i)
//			printf("%d ", i);
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 100; i <= 200; i++) {
//		for (a = 2;a<=i; a++) {
//			if (i % a == 0)
//				break;
//		}
//	}
//	if (i == a) {
//
//	}
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++) {
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//			printf("%d ", i);
// }
//
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	printf("显示多少个*：");
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++) {
//		printf("*");
//		if (i % 5 == 0) {
//			printf("\n");
//		}
//
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++) {
//		if (a % i == 0)
//			printf("%d ", i);
//
//
//
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int b = 1;
//	int a = 0;
//	int i = 0;
//	int c = 0;
//	scanf("%d", &i);
//	for (a = 1; a <= i; a++)
//	{
//		b = b * a;
//		c += b;
//
//
//
//	}
//	printf("%d", c);
//	return 0;
//}
