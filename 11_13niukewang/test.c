 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long  a = n * 3.156 * 10000000;
//	printf("%lld", a);
//	return 0;
//}
//int main()
//{
//	float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//	double sum = a + b + c;
//	double d = sum / 3.0;
//	printf("%.2lf %.2lf", sum, d);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d %d", &n, &i);
//	double a = n / ((i / 100.0)*(i/100.0));	
//	printf("%.2lf", a);
//	return 0;
//}
/*#include<math.h>
int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double p = (a + b + c) / 2;
	double area = sqrt(p * (p - a) * (p - b) * (p - c));
	double circumference = a + b + c;
	printf("circumference=%.2lf area=%.2lf", circumference, area);
	//return*/ /*0;*/
//}
//int main()
//{
//	float r = 0;
//	scanf("%f", &r);
//	double V = 4 * 3.1415926 * r * r * r/3;
//	printf("%.3lf", V);
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	char b = 0;
//	scanf("%c %c", &a, &b);
//	printf("%c %c", a+32, b+32);
//	return 0;
//}
//int main()
//{
//	char ch = 0;
//	while (scanf("%c",&ch) != EOF)
//	{
//		getchar();
//		printf("%c\n", ch + 32);
//	
//	}
//
//	return 0;
//}
//int cifang(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return 2 * cifang(n - 1);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c=cifang(n);
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", n);
//	int c = 2 << (n - 1);
//	printf("%d",c);
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while ( n!= '\0')
//	{
//		scanf("%d", &n);
//		printf("%d\n", 1 << n);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	int n = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (c % b == 0)
//		n = a - c / b;
//	else
//		n = a - c / b - 1;
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	char a = 0;
//	scanf("%c", &a);
//	if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//int main()
//{
//	float weight = 0;
//	double i = 0;
//	scanf("%f %lf", &weight, &i);
//	double BMI = weight / (i * i);
//	if (BMI > 18.5 && BMI < 23.9)
//		printf("Normal");
//	else
//		printf("Abnormal");
//	return 0;
//}
//int main()
//{
//    float n = 0;
//	int month = 0;
//	int date = 0;
//	int i = 0;
//	int a = 0;
//	scanf("%f %d %d %d", &n, &month, &date, &i);
//	if (month == 11 && date == 11)
//	{
//		if (i == 1)
//		{
//			if (n * 0.7 - 50 < 0)
//				printf("0.00");
//		    else
//			    printf("%.2lf", n * 0.7 - 50);
//		}
//		else
//			printf("%.2lf", n * 0.7);
//	}
//	else
//	{
//		if (i == 1)
//		{
//			if (n * 0.8 - 50<0)
//				printf("0.00");
//			else
//			    printf("%.2lf", n * 0.8 - 50);
//		}
//		else
//			printf("%.2lf", n * 0.8);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int a = 0;
//	for (i = 10000; i < 99999; i++)
//	{
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			a = (i % j) * (i / j);
//			sum += a;
//		}
//		if (sum == i)
//			printf("%d ", i);
//		sum = 0;
//	}
//
//	return 0;
//}
int main()
{
	int num = 0;
	int arr[50] = { 0 };
	int i = 0;
	int j = 0;
	int t = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);

	}
	for (i = 0; i < num; i++)
	{
		for (j = i; j < num; j++)
		{
			if (arr[i] < arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}