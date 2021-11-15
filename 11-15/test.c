 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	for (n = 100; n < 1000; n++)
//	{
//		for (i = 2; i < n; i++)
//		{
//			if (n % i == 0)
//			{
//				break;
//			}
//			
//		}
//		if (i == n)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[1001] = { 0 };
//	scanf("%d", &n);
//	int m = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		arr[m] = m;
//	}
//	for (i = 0; i < 1001; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//	int main()
//	{
//		long long n = 0;
//		long long i = 0;
//		long long a = 0;
//		long long max2 = 0;
//		long long min2 = 0;
//		scanf("%lld %lld", &i, &n);
//		long long max = i > n ? i : n;
//		long long min = i > n ? n : i;
//		while (1)
//		{
//			if (max % min == 0)
//			{
//				min2 = min;
//				break;
//			}
//			else
//			{
//				max2 = max;
//				min2 = min;//下面要交换，保留max、min的值。
//				while (max2 % min2 != 0)
//				{
//					long long a = max2 % min2;
//					max2 = min2;
//					min2 = a;
//				}
//				break;
//			}
//		}
//		/*printf("%d", min2);*/
//		long long minbei = 0;
//		minbei = (max * min) / min2;
//		long long b = 0;
//		b = minbei + min2;
//		printf("%lld", b);
//		return 0;
//}

//int main() 
//{
//    long long a, b, m, n, c;
//    scanf("%lld %lld", &a, &b);
//    c = a * b;
//    while (a && b)
//    {
//        if (a > b) a %= b;
//        else b %= a;
//    }
//    m = a > b ? a : b;
//    printf("%lld\n", m + c / m);
//    return 0;
//}
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	int i = 0;
//	int j = 0;
//	for (n; n > 0; n /= 10)
//	{
//		i++;
//	}
//	for (j = 0; j < i; j++)
//	{
//
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &i, &n);
//	int c = i ^ n;
//	int count = 0;
//	while (c)
//	{
//		if (c & 1 == 1)
//		{
//			count++;
//		}
//		c = c >> 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前a=%d,交换前b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = b ^ a;
//	printf("交换后a=%d,交换后b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 31; i >= 1; i -= 2)
//	{
//		int c = (n >> i) & 1;
//		printf("%d", c);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		int c = (n >>i ) & 1;
//		printf("%d", c);
//	}
//	return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1)==1)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//		{
//			printf("Odd\n");
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	char n = 0;
//	while (scanf("%c", &n) != EOF)
//	{
//		if (n =='A'|| n =='E' || n == 'I' || n == 'O' || n == 'U' || n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u')
//		{
//			printf("Vowel");
//		}
//		else
//		{
//			printf("Consonant");
//		}
//		grtchar();
//	//char n = 0;
//	//scanf("%c", &n);
// //   char a=getchar();//清理缓冲区，取走字符 回车；
//	//printf("%c", a);
//	///*}*/
//
//	return 0;
//}