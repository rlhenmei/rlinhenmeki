 
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(unsigned int i)
//{
//	if (i > 9)
//	{
//		print(i / 10);
//	}
//	
// printf("%d ", i%10);
//	
//
//}
//
//int main()
//{
//	 unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//
//		ret = ret * i;
//	}
//
//	printf("%d", ret);
//	return 0;
//}
//int jiechen(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * jiechen(n - 1);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = jiechen(a);
//	printf("%d", i);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[] = "abcsd";
//	printf("%d", strlen(arr));
//
//
//
//	return 0;
//}
//int strlen(const char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + strlen(s + 1);
//}
//
//
//int main()
//{
//	char *arr = "abefg";
//	int len=strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//int DigitSum(int n)
//{ 
//	if (n < 10)
//		return n;
//	else
//		return (n%10) + DigitSum(n / 10);
//
//
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = DigitSum(a);
//	printf("%d", i);
//	return 0;
//}
//int power(int n, int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * power(n, k - 1);
//
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &n, &i);
//	int j = power(n, i);
//	printf("%d", j);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 1; i < (n - 2); i++)
//	{
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	printf("%d", c);
//	return 0;
//}
//int fib(int a)
//{
//	if (a < 3)
//		return 1;
//	else
//		return fib(a - 1) + fib(a - 2);
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = fib(a);
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int arr[1] = { 0 };
//	printf("%d", sizeof(arr));
//	return 0;
//}
int fib(int a)
{
	if (a < 3)
		return 1;
	else
		return fib(a - 1) + fib(a - 2);

}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int n = fib(a);
	printf("%d", n);
	return 0;
}